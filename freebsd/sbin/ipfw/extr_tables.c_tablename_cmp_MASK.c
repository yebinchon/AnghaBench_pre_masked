
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tablename; } ;
typedef TYPE_1__ ipfw_xtable_info ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 ipfw_xtable_info *VAR_2, *VAR_3;

 VAR_2 = (ipfw_xtable_info *)VAR_0;
 VAR_3 = (ipfw_xtable_info *)VAR_1;

 return (FUNC_0(VAR_2->tablename, VAR_3->tablename));
}
