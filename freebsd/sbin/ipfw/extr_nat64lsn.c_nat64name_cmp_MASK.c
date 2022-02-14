
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ set; int name; } ;
typedef TYPE_1__ ipfw_nat64lsn_cfg ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 ipfw_nat64lsn_cfg *VAR_2, *VAR_3;

 VAR_2 = (ipfw_nat64lsn_cfg *)VAR_0;
 VAR_3 = (ipfw_nat64lsn_cfg *)VAR_1;

 if (VAR_2->set > VAR_3->set)
  return (1);
 else if (VAR_2->set < VAR_3->set)
  return (-1);
 return (FUNC_0(VAR_2->name, VAR_3->name));
}
