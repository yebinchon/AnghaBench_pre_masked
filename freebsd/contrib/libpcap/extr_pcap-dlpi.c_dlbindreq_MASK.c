
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int req ;
struct TYPE_2__ {int dl_max_conind; int dl_sap; int dl_service_mode; int dl_primitive; } ;
typedef TYPE_1__ dl_bind_req_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int,char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, bpf_u_int32 VAR_4, char *VAR_5)
{

 dl_bind_req_t VAR_6;

 FUNC_0((char *)&VAR_6, 0, sizeof(VAR_6));
 VAR_6.dl_primitive = VAR_0;







 VAR_6.dl_sap = VAR_4;

 return (FUNC_1(VAR_3, (char *)&VAR_6, sizeof(VAR_6), "bind", VAR_5));
}
