
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct readelf {int dbg; int cu_ver; int cu_osize; int cu_psize; } ;
struct TYPE_5__ {int ld_cents; struct TYPE_5__* ld_s; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Locdesc ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct readelf*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int ,int ,TYPE_1__**,int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct readelf *VAR_3, uint8_t *VAR_4, Dwarf_Unsigned VAR_5)
{
 Dwarf_Locdesc *VAR_6;
 Dwarf_Signed VAR_7;
 Dwarf_Error VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_3->dbg, VAR_4, VAR_5, VAR_3->cu_psize,
     VAR_3->cu_osize, VAR_3->cu_ver, &VAR_6, &VAR_7, &VAR_8) != VAR_2) {
  FUNC_5("dwarf_loclist_form_expr_b: %s", FUNC_2(VAR_8));
  return;
 }

 for (VAR_9 = 0; (Dwarf_Half) VAR_9 < VAR_6->ld_cents; VAR_9++) {
  FUNC_0(VAR_3, &VAR_6->ld_s[VAR_9]);
  if (VAR_9 < VAR_6->ld_cents - 1)
   FUNC_4("; ");
 }

 FUNC_1(VAR_3->dbg, VAR_6->ld_s, VAR_1);
 FUNC_1(VAR_3->dbg, VAR_6, VAR_0);
}
