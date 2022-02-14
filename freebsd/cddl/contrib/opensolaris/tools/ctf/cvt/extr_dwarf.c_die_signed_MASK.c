
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dw_err; } ;
typedef TYPE_1__ dwarf_t ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Half ;
typedef int Dwarf_Die ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(dwarf_t *VAR_1, Dwarf_Die VAR_2, Dwarf_Half VAR_3, Dwarf_Signed *VAR_4,
    int VAR_5)
{
 *VAR_4 = 0;
 if (FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_1->dw_err) != VAR_0) {
  if (VAR_5)
   FUNC_3("die %llu: failed to get signed: %s\n",
       FUNC_0(VAR_1, VAR_2), FUNC_2(VAR_1->dw_err));
  return (0);
 }

 return (1);
}
