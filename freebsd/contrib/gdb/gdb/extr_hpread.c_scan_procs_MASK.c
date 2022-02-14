
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ global; } ;
union dnttentry {TYPE_1__ dfunc; } ;
struct partial_symtab {int dummy; } ;
struct objfile {int section_offsets; int static_psymbols; int global_psymbols; } ;
struct TYPE_5__ {scalar_t__ language; scalar_t__ adrStart; int isym; scalar_t__ sbProc; scalar_t__ sbAlias; } ;
typedef TYPE_2__ quick_procedure_entry ;
typedef enum hp_language { ____Placeholder_hp_language } hp_language ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct objfile*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,char*,int ,int ,int ,int *,scalar_t__,int ,scalar_t__,struct objfile*) ;
 char* FUNC_3 (char*,int) ;
 union dnttentry* FUNC_4 (int ,struct objfile*) ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_10 (int *VAR_9, quick_procedure_entry *VAR_10, int VAR_11,
     CORE_ADDR VAR_12, CORE_ADDR VAR_13, struct partial_symtab *VAR_14,
     char *VAR_15, struct objfile *VAR_16)
{
  union dnttentry *VAR_17;
  int VAR_18 = 0;
  int VAR_19 = *VAR_9;
  while ((VAR_1 <= VAR_13) && (VAR_19 < VAR_11))
    {

      char *VAR_20;
      char *VAR_21;
      char *VAR_22;
      int VAR_23;

      if ((FUNC_8 ((enum hp_language) VAR_10[VAR_19].language) == VAR_7) &&
   VAR_15[(long) VAR_10[VAR_19].sbAlias])
 {

   VAR_20 = &VAR_15[(long) VAR_10[VAR_19].sbAlias];
   VAR_21 = FUNC_3 (VAR_20, VAR_2 | VAR_3);
 }
      else
 {
   VAR_20 = &VAR_15[(long) VAR_10[VAR_19].sbProc];
   VAR_21 = ((void*)0);
 }



      if ((FUNC_6 (VAR_20, "_MAIN_") == 0) &&
   (FUNC_6 (&VAR_15[(long) VAR_10[VAR_19].sbProc], "main") == 0))
 VAR_21 = VAR_20 = VAR_8;
      if (VAR_0 > VAR_13)
 {
   VAR_5;
   FUNC_9 ("Procedure \"%s\" [0x%x] spans file or module boundaries.", VAR_20, VAR_19);
 }
      VAR_17 = FUNC_4 (VAR_10[VAR_19].isym, VAR_16);
      if (VAR_17->dfunc.global)
 FUNC_2 (VAR_20,
        FUNC_7 (VAR_20),
        VAR_21,
        FUNC_7 (VAR_21),
        VAR_6,
        VAR_4,
        &VAR_16->global_psymbols,
        (VAR_10[VAR_19].adrStart +
     FUNC_0 (VAR_16->section_offsets, FUNC_1 (VAR_16))),
        0,
        FUNC_8 ((enum hp_language) VAR_10[VAR_19].language),
        VAR_16);
      else
 FUNC_2 (VAR_20,
        FUNC_7 (VAR_20),
        VAR_21,
        FUNC_7 (VAR_21),
        VAR_6,
        VAR_4,
        &VAR_16->static_psymbols,
        (VAR_10[VAR_19].adrStart +
     FUNC_0 (VAR_16->section_offsets, FUNC_1 (VAR_16))),
        0,
        FUNC_8 ((enum hp_language) VAR_10[VAR_19].language),
        VAR_16);

      VAR_18++;
      *VAR_9 = ++VAR_19;
    }
  return VAR_18;
}
