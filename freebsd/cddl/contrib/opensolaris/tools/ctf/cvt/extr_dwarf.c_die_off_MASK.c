
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dw_err; } ;
typedef TYPE_1__ dwarf_t ;
typedef int Dwarf_Off ;
typedef int Dwarf_Die ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static Dwarf_Off
FUNC_3(dwarf_t *VAR_1, Dwarf_Die VAR_2)
{
 Dwarf_Off VAR_3;

 if (FUNC_0(VAR_2, &VAR_3, &VAR_1->dw_err) == VAR_0)
  return (VAR_3);

 FUNC_2("failed to get offset for die: %s\n",
     FUNC_1(VAR_1->dw_err));

 return (0);
}
