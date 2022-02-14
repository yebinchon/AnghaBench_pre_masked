
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tbuf ;
typedef int ipfw_xtable_info ;
struct TYPE_4__ {int opheader; } ;
typedef TYPE_1__ ipfw_obj_header ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,size_t*) ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_3(ipfw_obj_header *VAR_3, ipfw_xtable_info *VAR_4)
{
 char VAR_5[sizeof(ipfw_obj_header) + sizeof(ipfw_xtable_info)];
 size_t VAR_6;

 VAR_6 = sizeof(VAR_5);
 FUNC_2(VAR_5, 0, sizeof(VAR_5));
 FUNC_1(VAR_5, VAR_3, sizeof(*VAR_3));
 VAR_3 = (ipfw_obj_header *)VAR_5;

 if (FUNC_0(VAR_1, &VAR_3->opheader, &VAR_6) != 0)
  return (VAR_2);

 if (VAR_6 < sizeof(VAR_5))
  return (VAR_0);

 *VAR_4 = *(ipfw_xtable_info *)(VAR_3 + 1);

 return (0);
}
