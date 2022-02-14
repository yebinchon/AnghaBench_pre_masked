
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tbuf ;
struct TYPE_6__ {int opheader; } ;
typedef TYPE_1__ ipfw_xtable_info ;
typedef TYPE_1__ ipfw_obj_header ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_2(ipfw_obj_header *VAR_1, ipfw_xtable_info *VAR_2)
{
 char VAR_3[sizeof(ipfw_obj_header) + sizeof(ipfw_xtable_info)];
 int VAR_4;

 FUNC_1(VAR_3, VAR_1, sizeof(*VAR_1));
 FUNC_1(VAR_3 + sizeof(*VAR_1), VAR_2, sizeof(*VAR_2));
 VAR_1 = (ipfw_obj_header *)VAR_3;

 VAR_4 = FUNC_0(VAR_0, &VAR_1->opheader, sizeof(VAR_3));

 return (VAR_4);
}
