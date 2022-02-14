
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_ca {int cost; scalar_t__ bad_uses; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0 (struct iv_ca *VAR_1)
{
  return (VAR_1->bad_uses ? VAR_0 : VAR_1->cost);
}
