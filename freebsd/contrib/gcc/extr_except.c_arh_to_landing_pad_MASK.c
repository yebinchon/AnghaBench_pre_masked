
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eh_region {int landing_pad; } ;
typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1 (struct eh_region *VAR_1, void *VAR_2)
{
  rtx *VAR_3 = VAR_2;
  if (! *VAR_3)
    *VAR_3 = FUNC_0 (VAR_1->landing_pad, VAR_0);
}
