
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int li_inclen; int ** li_incdirs; } ;
struct TYPE_5__ {TYPE_2__* dbgp_lineinfo; } ;
typedef size_t Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef TYPE_2__* Dwarf_LineInfo ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int ** FUNC_1 (int **,int) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;

Dwarf_Unsigned
FUNC_4(Dwarf_P_Debug VAR_3, char *VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_LineInfo VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || FUNC_3(VAR_4) == 0) {
  FUNC_0(VAR_3, VAR_5, VAR_0);
  return (VAR_2);
 }

 VAR_6 = VAR_3->dbgp_lineinfo;

 VAR_6->li_incdirs = FUNC_1(VAR_6->li_incdirs, (VAR_6->li_inclen + 1) *
     sizeof(char *));
 if (VAR_6->li_incdirs == ((void*)0)) {
  FUNC_0(VAR_3, VAR_5, VAR_1);
  return (VAR_2);
 }
 if ((VAR_6->li_incdirs[VAR_6->li_inclen] = FUNC_2(VAR_4)) == ((void*)0)) {
  FUNC_0(VAR_3, VAR_5, VAR_1);
  return (VAR_2);
 }

 return (++VAR_6->li_inclen);
}
