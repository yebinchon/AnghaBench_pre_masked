
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct _Dwarf_LineFile {int dummy; } ;
struct TYPE_8__ {char* lf_fname; int lf_dirndx; void* lf_size; void* lf_mtime; int * lf_fullpath; } ;
struct TYPE_7__ {int li_inclen; char** li_incdirs; int li_lflen; int li_lflist; } ;
typedef int FILE ;
typedef TYPE_1__* Dwarf_LineInfo ;
typedef TYPE_2__* Dwarf_LineFile ;
typedef int Dwarf_Error ;
typedef int Dwarf_Debug ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 void* FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_6 (int) ;
 int * FUNC_7 (int **,size_t*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(Dwarf_LineInfo VAR_4, uint8_t **VAR_5, const char *VAR_6,
    Dwarf_Error *VAR_7, Dwarf_Debug VAR_8)
{
 Dwarf_LineFile VAR_9;
 FILE *VAR_10;
 const char *VAR_11;
 uint8_t *VAR_12;
 size_t VAR_13;

 VAR_12 = *VAR_5;

 if ((VAR_9 = FUNC_6(sizeof(struct _Dwarf_LineFile))) == ((void*)0)) {
  FUNC_0(VAR_8, VAR_7, VAR_1);
  return (VAR_1);
 }

 VAR_9->lf_fullpath = ((void*)0);
 VAR_9->lf_fname = (char *) VAR_12;
 VAR_12 += FUNC_8(VAR_9->lf_fname) + 1;
 VAR_9->lf_dirndx = FUNC_2(&VAR_12);
 if (VAR_9->lf_dirndx > VAR_4->li_inclen) {
  FUNC_5(VAR_9);
  FUNC_0(VAR_8, VAR_7, VAR_0);
  return (VAR_0);
 }


 if (*VAR_9->lf_fname != '/') {
  VAR_10 = FUNC_7(&VAR_9->lf_fullpath, &VAR_13);
  if (VAR_10 == ((void*)0)) {
   FUNC_5(VAR_9);
   FUNC_0(VAR_8, VAR_7, VAR_1);
   return (VAR_1);
  }

  if (VAR_9->lf_dirndx > 0)
   VAR_11 = VAR_4->li_incdirs[VAR_9->lf_dirndx - 1];
  else
   VAR_11 = ((void*)0);





  if (VAR_11 == ((void*)0) || *VAR_11 != '/')
   FUNC_4(VAR_10, "%s/", VAR_6);
  if (VAR_11 != ((void*)0))
   FUNC_4(VAR_10, "%s/", VAR_11);
  FUNC_4(VAR_10, "%s", VAR_9->lf_fname);
  if (FUNC_3(VAR_10) != 0) {
   FUNC_5(VAR_9);
   FUNC_0(VAR_8, VAR_7, VAR_1);
   return (VAR_1);
  }
 }

 VAR_9->lf_mtime = FUNC_2(&VAR_12);
 VAR_9->lf_size = FUNC_2(&VAR_12);
 FUNC_1(&VAR_4->li_lflist, VAR_9, VAR_3);
 VAR_4->li_lflen++;

 *VAR_5 = VAR_12;

 return (VAR_2);
}
