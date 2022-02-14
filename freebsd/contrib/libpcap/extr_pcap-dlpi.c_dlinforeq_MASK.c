
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int req ;
struct TYPE_2__ {int dl_primitive; } ;
typedef TYPE_1__ dl_info_req_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, char *VAR_2)
{
 dl_info_req_t VAR_3;

 VAR_3.dl_primitive = VAR_0;

 return (FUNC_0(VAR_1, (char *)&VAR_3, sizeof(VAR_3), "info", VAR_2));
}
