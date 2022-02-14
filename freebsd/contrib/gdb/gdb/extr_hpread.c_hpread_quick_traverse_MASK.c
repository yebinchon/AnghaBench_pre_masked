
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_11__ ;


struct partial_symtab {int dummy; } ;
struct partial_symbol {int dummy; } ;
struct TYPE_24__ {struct partial_symbol** next; struct partial_symbol** list; } ;
struct TYPE_23__ {struct partial_symbol** next; struct partial_symbol** list; } ;
struct objfile {TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; } ;
struct dntt_type_block {int dummy; } ;
typedef TYPE_3__* quick_procedure_entry_ptr ;
struct TYPE_25__ {int adrEnd; scalar_t__ sbProc; } ;
typedef TYPE_3__ quick_procedure_entry ;
typedef TYPE_5__* quick_module_entry_ptr ;
struct TYPE_26__ {scalar_t__ sbMod; } ;
typedef TYPE_5__ quick_module_entry ;
typedef TYPE_7__* quick_file_entry_ptr ;
struct TYPE_27__ {scalar_t__ sbFile; } ;
typedef TYPE_7__ quick_file_entry ;
typedef TYPE_9__* quick_class_entry_ptr ;
struct TYPE_28__ {scalar_t__ sbClass; } ;
typedef TYPE_9__ quick_class_entry ;
struct TYPE_22__ {int end; } ;
struct TYPE_21__ {int pd_entries; int fd_entries; int md_entries; int cd_entries; int globals; } ;
typedef TYPE_11__* PXDB_header_ptr ;
typedef int CORE_ADDR ;
typedef int B_TYPE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (struct objfile*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_13 (int,TYPE_7__*,int,TYPE_11__*) ;
 int FUNC_14 (int,TYPE_5__*,int,TYPE_11__*) ;
 int FUNC_15 (int,TYPE_3__*,int,TYPE_11__*) ;
 int FUNC_16 (int) ;
 struct partial_symtab* FUNC_17 (struct partial_symtab*,int *,int ,int,int,int *,int ) ;
 struct partial_symtab* FUNC_18 (struct objfile*,char*,int,int,struct partial_symbol**,struct partial_symbol**) ;
 int FUNC_19 () ;
 int FUNC_20 (int,int) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (char*,...) ;
 TYPE_13__* VAR_15 ;
 int VAR_16 ;
 int FUNC_24 (int,int) ;
 int FUNC_25 (int*,TYPE_3__*,int,int,int,struct partial_symtab*,char*,struct objfile*) ;
 int FUNC_26 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (int *) ;
 int * FUNC_29 (int ) ;

__attribute__((used)) static int
FUNC_30 (struct objfile *VAR_18, char *VAR_19,
         char *VAR_20, PXDB_header_ptr VAR_21)
{
  struct partial_symtab *VAR_22;

  char *VAR_23;

  quick_procedure_entry *VAR_24;
  quick_file_entry *VAR_25;
  quick_module_entry *VAR_26;
  quick_class_entry *VAR_27;

  int VAR_28;
  int VAR_29;
  CORE_ADDR VAR_30;
  CORE_ADDR VAR_31;
  CORE_ADDR VAR_32;
  int VAR_33;
  int VAR_34;
  int VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38;
  int VAR_39;
  B_TYPE *VAR_40;

  struct partial_symbol **VAR_41;
  struct partial_symbol **VAR_42;
  VAR_22 = (struct partial_symtab *) 0;


  FUNC_19 ();
  VAR_17 = 0;



  if (VAR_13 != VAR_14)
    {

      FUNC_26 (VAR_8);
    }




  VAR_23 = VAR_19;

  VAR_24 = (quick_procedure_entry_ptr) VAR_23;
  VAR_23 += VAR_21->pd_entries * sizeof (quick_procedure_entry);
  VAR_25 = (quick_file_entry_ptr) VAR_23;
  VAR_23 += VAR_21->fd_entries * sizeof (quick_file_entry);
  VAR_26 = (quick_module_entry_ptr) VAR_23;
  VAR_23 += VAR_21->md_entries * sizeof (quick_module_entry);
  VAR_27 = (quick_class_entry_ptr) VAR_23;
  VAR_23 += VAR_21->cd_entries * sizeof (quick_class_entry);
  VAR_38 = FUNC_4 (VAR_18);







  VAR_33 = 0;
  VAR_34 = 0;
  VAR_35 = 0;

  VAR_30 = 0;
  VAR_31 = 0;

  VAR_36 = 0;
  VAR_37 = 0;

  VAR_39 = 0;



  VAR_41 = VAR_18->global_psymbols.list;
  VAR_42 = VAR_18->static_psymbols.list;
  while (VAR_12 && (VAR_7 == 0))
    VAR_33++;
  while (VAR_10 || VAR_11)
    {

      char *VAR_43 = ((void*)0);
      char *VAR_44;





      if (VAR_11 && (VAR_5 == -1) && (VAR_3 == 0))
 {

   VAR_43 = &VAR_20[(long) VAR_26[VAR_35].sbMod];
   VAR_22 = FUNC_18 (VAR_18,
          VAR_43,
          VAR_5,
         (VAR_4 * sizeof (struct dntt_type_block)),

          VAR_41,
          VAR_42);

   VAR_22 = FUNC_17 (VAR_22,
        ((void*)0),
        0,
      VAR_37 * sizeof (struct dntt_type_block),



        0,
        ((void*)0),
        0);

   VAR_41 = VAR_18->global_psymbols.next;
   VAR_42 = VAR_18->static_psymbols.next;

   VAR_35++;
 }
      else if (VAR_11 &&
        ((VAR_5 == 0) || (VAR_5 == -1) ||
  (VAR_3 == 0) || (VAR_3 == -1)))
 {
   VAR_9;
   FUNC_27 ("Module \"%s\" [0x%s] has non-standard addresses.  It starts at 0x%s, ends at 0x%s, and will be skipped.",
     VAR_43, FUNC_22 (VAR_35), FUNC_22 (VAR_30), FUNC_22 (VAR_31));

   VAR_35++;
 }
      else
 {



   if (VAR_10 ? (VAR_11 ? (VAR_0 < VAR_5) : 1) : 0)
     {



       VAR_44 = &VAR_20[(long) VAR_25[VAR_34].sbFile];
       VAR_30 = VAR_2;
       VAR_31 = VAR_0;
       VAR_36 = VAR_1;







       if (VAR_7 < VAR_30)
  {
    VAR_9;
    FUNC_27 ("Found procedure \"%s\" [0x%x] that is not in any file or module.",
      &VAR_20[(long) VAR_24[VAR_33].sbProc], VAR_33);
    VAR_30 = VAR_7;
    if (VAR_6 < VAR_36)
      VAR_36 = VAR_6;
  }





       if (FUNC_9 (VAR_34 + 1) && (FUNC_3 (VAR_34 + 1) <= VAR_31))
  {
    VAR_9;
    FUNC_27 ("File \"%s\" [0x%x] has ending address after starting address of next file; adjusting ending address down.",
      VAR_44, VAR_34);
    VAR_31 = FUNC_3 (VAR_34 + 1) - 1;
  }
       if (FUNC_10 (VAR_35) && (VAR_5 <= VAR_31))
  {
    VAR_9;
    FUNC_27 ("File \"%s\" [0x%x] has ending address after starting address of next module; adjusting ending address down.",
      VAR_44, VAR_34);
    VAR_31 = VAR_5 - 1;
  }
       VAR_22 = FUNC_18 (VAR_18,
       VAR_44,
       VAR_30,
         (VAR_36 * sizeof (struct dntt_type_block)),

       VAR_41,
       VAR_42);


       VAR_40 = FUNC_29 (FUNC_0 (VAR_21->cd_entries));
       FUNC_1 (VAR_40, VAR_21->cd_entries);




       VAR_39 = FUNC_25 (&VAR_33, VAR_24, VAR_21->pd_entries,
     VAR_30, VAR_31, VAR_22, VAR_20, VAR_18);



       VAR_37 = 0;

       if (VAR_16 && VAR_36 < VAR_15[VAR_16 - 1].end)
  {
    VAR_37 = FUNC_16 (VAR_36);
  }

       if (!VAR_37)
  {
    int VAR_45 = FUNC_13 (VAR_36, VAR_25, VAR_34 + 1, VAR_21);
    int VAR_46 = FUNC_14 (VAR_36, VAR_26, VAR_35, VAR_21);
    int VAR_47 = FUNC_15 (VAR_36, VAR_24, VAR_33, VAR_21);

    if (VAR_45 && VAR_46)
      {

        VAR_37 = FUNC_21 (VAR_45, VAR_46);
      }
    else
      {

        VAR_37 = FUNC_20 (VAR_45, VAR_46);
      }


    if (!VAR_37)
      VAR_37 = VAR_47;
    else
      VAR_37 = FUNC_21 (VAR_37, VAR_47);
  }


       if (!VAR_37)
  VAR_37 = VAR_21->globals;
       VAR_22 = FUNC_17 (VAR_22,
     ((void*)0),
     0,
      VAR_37 * sizeof (struct dntt_type_block),



     VAR_31,
     ((void*)0),
     0);

       FUNC_24 (VAR_36, VAR_37);

       if (((void*)0) == VAR_22)
  FUNC_27 ("No symbols in psymtab for file \"%s\" [0x%x].", VAR_44, VAR_34);
       VAR_41 = VAR_18->global_psymbols.next;
       VAR_42 = VAR_18->static_psymbols.next;
       FUNC_28 (VAR_40);

       VAR_34++;
     }
   else
     {


       VAR_43 = &VAR_20[(long) VAR_26[VAR_35].sbMod];





       VAR_30 = VAR_5;
       if (VAR_10)
  {
    if (VAR_2 < VAR_5)
      {
        VAR_9;
        FUNC_27 ("File \"%s\" [0x%x] crosses beginning of module \"%s\".",
          &VAR_20[(long) VAR_25[VAR_34].sbFile],
          VAR_34, VAR_43);

        VAR_30 = VAR_2;
      }
  }


       VAR_36 = VAR_4;
       if (VAR_10 && (VAR_1 < VAR_4))
  VAR_36 = VAR_1;
       VAR_31 = VAR_3;

       if (VAR_10)
  {
    while (VAR_10 && (VAR_2 < VAR_31))
      {






        if (VAR_0 > VAR_31)
   {
     VAR_9;
     FUNC_27 ("File \"%s\" [0x%x] crosses end of module \"%s\".",
       &VAR_20[(long) VAR_25[VAR_34].sbFile],
       VAR_34, VAR_43);
     VAR_31 = VAR_0;
   }
        VAR_34++;
      }
    VAR_34--;
  }





       if (FUNC_10 (VAR_35 + 1) && (FUNC_5 (VAR_35 + 1) <= VAR_31))
  {
    VAR_9;
    FUNC_27 ("Module \"%s\" [0x%x] has ending address after starting address of next module; adjusting ending address down.",
      VAR_43, VAR_35);
    VAR_31 = FUNC_5 (VAR_35 + 1) - 1;
  }
       if (FUNC_9 (VAR_34 + 1) && (FUNC_3 (VAR_34 + 1) <= VAR_31))
  {
    VAR_9;
    FUNC_27 ("Module \"%s\" [0x%x] has ending address after starting address of next file; adjusting ending address down.",
      VAR_43, VAR_35);
    VAR_31 = FUNC_3 (VAR_34 + 1) - 1;
  }
       if (VAR_10)
  VAR_44 = &VAR_20[(long) VAR_25[VAR_34].sbFile];
       else
  VAR_44 = VAR_43;







       if (VAR_7 < VAR_30)
  {
    VAR_9;
    FUNC_27 ("Found procedure \"%s\" [0x%x] that is not in any file or module.",
      &VAR_20[(long) VAR_24[VAR_33].sbProc], VAR_33);
    VAR_30 = VAR_7;
    if (VAR_6 < VAR_36)
      VAR_36 = VAR_6;
  }
       VAR_22 = FUNC_18 (VAR_18,
       VAR_44,
       VAR_30,
         (VAR_36 * sizeof (struct dntt_type_block)),

       VAR_41,
       VAR_42);


       VAR_40 = FUNC_29 (FUNC_0 (VAR_21->cd_entries));
       FUNC_1 (VAR_40, VAR_21->cd_entries);




       VAR_39 = FUNC_25 (&VAR_33, VAR_24, VAR_21->pd_entries,
     VAR_30, VAR_31, VAR_22, VAR_20, VAR_18);



       VAR_37 = 0;

       if (VAR_16 && VAR_36 < VAR_15[VAR_16 - 1].end)
  {
    VAR_37 = FUNC_16 (VAR_36);
  }

       if (!VAR_37)
  {
    int VAR_48 = FUNC_13 (VAR_36, VAR_25, VAR_34 + 1, VAR_21);
    int VAR_49 = FUNC_14 (VAR_36, VAR_26, VAR_35 + 1, VAR_21);
    int VAR_50 = FUNC_15 (VAR_36, VAR_24, VAR_33, VAR_21);

    if (VAR_48 && VAR_49)
      {

        VAR_37 = FUNC_21 (VAR_48, VAR_49);
      }
    else
      {

        VAR_37 = FUNC_20 (VAR_48, VAR_49);
      }


    if (!VAR_37)
      VAR_37 = VAR_50;
    else
      VAR_37 = FUNC_21 (VAR_37, VAR_50);
  }


       if (!VAR_37)
  VAR_37 = VAR_21->globals;
       VAR_22 = FUNC_17 (VAR_22,
     ((void*)0),
     0,
      VAR_37 * sizeof (struct dntt_type_block),



     VAR_31,
     ((void*)0),
     0);

       FUNC_24 (VAR_36, VAR_37);

       if (((void*)0) == VAR_22)
  FUNC_27 ("No symbols in psymtab for module \"%s\" [0x%x].", VAR_43, VAR_35);
       VAR_41 = VAR_18->global_psymbols.next;
       VAR_42 = VAR_18->static_psymbols.next;
       FUNC_28 (VAR_40);

       VAR_35++;
       VAR_34++;
     }
 }
    }



  if (VAR_12)
    {
      VAR_30 = VAR_7;
      VAR_31 = VAR_24[VAR_21->pd_entries - 1].adrEnd;
      VAR_9;
      FUNC_27 ("Found functions beyond end of all files and modules [0x%x].", VAR_33);







      VAR_22 = FUNC_18 (VAR_18,
      "orphans",
      VAR_30,
    (VAR_6 * sizeof (struct dntt_type_block)),

      VAR_41,
      VAR_42);

      FUNC_25 (&VAR_33, VAR_24, VAR_21->pd_entries,
    VAR_30, VAR_31, VAR_22, VAR_20, VAR_18);

      VAR_22 = FUNC_17 (VAR_22,
    ((void*)0),
    0,
     VAR_21->globals * sizeof (struct dntt_type_block),



    VAR_31,
    ((void*)0),
    0);
    }
  FUNC_12 ();

  return 1;

}
