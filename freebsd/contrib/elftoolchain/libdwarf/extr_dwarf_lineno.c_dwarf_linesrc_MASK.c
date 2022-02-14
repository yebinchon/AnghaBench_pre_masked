
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ln_fileno; TYPE_1__* ln_li; } ;
struct TYPE_9__ {char* lf_fname; scalar_t__ lf_fullpath; } ;
struct TYPE_8__ {int li_lflist; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_LineInfo ;
typedef TYPE_2__* Dwarf_LineFile ;
typedef TYPE_3__* Dwarf_Line ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

int
FUNC_4(Dwarf_Line VAR_5, char **VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_LineInfo VAR_8;
 Dwarf_LineFile VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_7, VAR_0);
  return (VAR_2);
 }

 VAR_8 = VAR_5->ln_li;
 FUNC_3(VAR_8 != ((void*)0));

 for (VAR_10 = 1, VAR_9 = FUNC_1(&VAR_8->li_lflist);
      (Dwarf_Unsigned) VAR_10 < VAR_5->ln_fileno && VAR_9 != ((void*)0);
      VAR_10++, VAR_9 = FUNC_2(VAR_9, VAR_4))
  ;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_7, VAR_1);
  return (VAR_2);
 }

 if (VAR_9->lf_fullpath) {
  *VAR_6 = (char *) VAR_9->lf_fullpath;
  return (VAR_3);
 }

 *VAR_6 = VAR_9->lf_fname;

 return (VAR_3);
}
