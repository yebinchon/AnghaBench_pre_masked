
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dw_err; } ;
typedef TYPE_1__ dwarf_t ;
typedef int * Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int **,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static Dwarf_Die
FUNC_4(dwarf_t *VAR_2, Dwarf_Die VAR_3)
{
 Dwarf_Die VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_3, &VAR_4, &VAR_2->dw_err)) == VAR_1)
  return (VAR_4);
 else if (VAR_5 == VAR_0)
  return (((void*)0));

 FUNC_3("die %llu: failed to find type child: %s\n",
     FUNC_0(VAR_2, VAR_3), FUNC_2(VAR_2->dw_err));

 return (((void*)0));
}
