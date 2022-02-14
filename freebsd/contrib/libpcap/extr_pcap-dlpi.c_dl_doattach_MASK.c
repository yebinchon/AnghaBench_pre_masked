
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int req ;
struct TYPE_2__ {int dl_ppa; int dl_primitive; } ;
typedef TYPE_1__ dl_attach_req_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int,char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, int VAR_4, char *VAR_5)
{
 dl_attach_req_t VAR_6;
 bpf_u_int32 VAR_7[VAR_1];
 int VAR_8;

 VAR_6.dl_primitive = VAR_0;
 VAR_6.dl_ppa = VAR_4;
 if (FUNC_1(VAR_3, (char *)&VAR_6, sizeof(VAR_6), "attach", VAR_5) < 0)
  return (VAR_2);

 VAR_8 = FUNC_0(VAR_3, "attach", (char *)VAR_7, VAR_5);
 if (VAR_8 < 0)
  return (VAR_8);
 return (0);
}
