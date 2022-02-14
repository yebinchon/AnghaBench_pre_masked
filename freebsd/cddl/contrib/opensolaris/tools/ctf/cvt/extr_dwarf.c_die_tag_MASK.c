
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dw_err; } ;
typedef TYPE_1__ dwarf_t ;
typedef int Dwarf_Half ;
typedef int Dwarf_Die ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static Dwarf_Half
FUNC_4(dwarf_t *VAR_1, Dwarf_Die VAR_2)
{
 Dwarf_Half VAR_3;

 if (FUNC_2(VAR_2, &VAR_3, &VAR_1->dw_err) == VAR_0)
  return (VAR_3);

 FUNC_3("die %llu: failed to get tag for type: %s\n",
     FUNC_0(VAR_1, VAR_2), FUNC_1(VAR_1->dw_err));

 return (0);
}
