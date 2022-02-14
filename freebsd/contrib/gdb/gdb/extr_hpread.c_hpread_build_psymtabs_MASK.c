
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_19__ {int global; } ;
struct TYPE_18__ {unsigned long location; int global; } ;
struct TYPE_17__ {int kind; scalar_t__ extension; } ;
struct TYPE_28__ {int index; } ;
struct TYPE_29__ {TYPE_7__ dnttp; } ;
struct TYPE_30__ {TYPE_8__ type; } ;
struct TYPE_27__ {int global; } ;
struct TYPE_26__ {int regvar; } ;
struct TYPE_25__ {int const endkind; } ;
struct TYPE_24__ {unsigned long hiaddr; unsigned long lowaddr; int global; } ;
struct TYPE_23__ {unsigned long hiaddr; unsigned long lowaddr; int global; } ;
union dnttentry {TYPE_12__ dconst; TYPE_11__ dsvar; TYPE_10__ dblock; TYPE_9__ dtype; TYPE_6__ dtag; TYPE_5__ ddvar; TYPE_4__ dend; TYPE_3__ ddocfunc; TYPE_2__ dfunc; } ;
struct partial_symtab {char* filename; TYPE_1__* objfile; } ;
struct TYPE_21__ {int next; } ;
struct objfile {char* name; TYPE_16__ static_psymbols; TYPE_16__ global_psymbols; int section_offsets; } ;
struct dntt_type_block {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum address_class { ____Placeholder_address_class } address_class ;
typedef int domain_enum ;
struct TYPE_22__ {int objfile_obstack; } ;
struct TYPE_20__ {int globals; } ;
typedef TYPE_13__ PXDB_header ;


 unsigned long FUNC_0 (int ,int ) ;

 int const VAR_0 ;





 int const VAR_1 ;






 int const VAR_2 ;

 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (struct objfile*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct objfile*) ;
 int FUNC_5 (struct objfile*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct objfile*) ;
 int FUNC_7 (char*,int ,int ,int,TYPE_16__*,unsigned long,int ,int ,struct objfile*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct cleanup*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct partial_symtab*,char**,int,int,int,struct partial_symtab**,int) ;
 union dnttentry* FUNC_12 (int,struct objfile*) ;
 scalar_t__ FUNC_13 (struct objfile*,TYPE_13__*) ;
 union dnttentry* FUNC_14 (int,struct objfile*) ;
 unsigned long FUNC_15 (int,int,struct objfile*,int) ;
 int FUNC_16 (struct objfile*,int ,int ,TYPE_13__*) ;
 struct partial_symtab* FUNC_17 (struct objfile*,char*,unsigned long,int,int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_18 (int ,int ) ;
 struct cleanup* FUNC_19 (struct objfile*) ;
 int FUNC_20 (char**,char**,int) ;
 scalar_t__ FUNC_21 (int *,int ) ;
 int FUNC_22 (char*,char*) ;
 int VAR_14 ;
 int FUNC_23 (union dnttentry*,char**,struct objfile*) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*) ;
 char* FUNC_27 (char*,char) ;

void
FUNC_28 (struct objfile *VAR_15, int VAR_16)
{






  char *VAR_17;
  int VAR_18 = 0;
  struct cleanup *VAR_19;

  int VAR_20, VAR_21, VAR_22;
  int VAR_23 = 0;

  union dnttentry *VAR_24;
  unsigned long VAR_25;
  char *VAR_26;
  int VAR_27 = 0;
  int VAR_28 = 0;


  struct partial_symtab *VAR_29;


  char **VAR_30;
  int VAR_31;
  int VAR_32;


  struct partial_symtab **VAR_33;
  int VAR_34, VAR_35;


  FUNC_10 ();
  FUNC_18 (VAR_14, 0);

  VAR_29 = (struct partial_symtab *) 0;





  VAR_31 = 30;
  VAR_32 = 0;
  VAR_30 = (char **) FUNC_8 (VAR_31 *
        sizeof (char *));

  VAR_35 = 30;
  VAR_34 = 0;
  VAR_33 =
    (struct partial_symtab **) FUNC_8 (VAR_35 *
           sizeof (struct partial_symtab *));

  VAR_19 = FUNC_19 (VAR_15);

  VAR_13 = 0;
  for (VAR_22 = 0; VAR_22 < 1; VAR_22++)
    {
      int VAR_36 = 0;

      if (VAR_22)
 VAR_21 = FUNC_2 (VAR_15);
      else
 VAR_21 = FUNC_3 (VAR_15);


      for (VAR_20 = VAR_23; VAR_20 < VAR_21; VAR_20++)
 {
   VAR_9;
   if (VAR_22)
     VAR_24 = FUNC_12 (VAR_20, VAR_15);
   else
     VAR_24 = FUNC_14 (VAR_20, VAR_15);

   if (VAR_24->dblock.extension)
     continue;



   switch (VAR_24->dblock.kind)
     {
     case 131:
       {
  FUNC_23 (VAR_24, &VAR_17, VAR_15);



  if (VAR_29 && !FUNC_24 (VAR_17, VAR_29->filename))
    continue;



  VAR_26 = FUNC_27 (VAR_17, '.');
  if (!FUNC_24 (VAR_26, ".h"))
    {
      int VAR_37, VAR_38;

      VAR_38 = 0;
      for (VAR_37 = 0; VAR_37 < VAR_32; VAR_37++)
        if (!FUNC_24 (VAR_17, VAR_30[VAR_37]))
   {
     VAR_38 = 1;
     break;
   }
      if (VAR_38)
        continue;



      VAR_30[VAR_32++] = VAR_17;
      if (VAR_32 >= VAR_31)
        {
   char **VAR_39 = VAR_30;

   VAR_30 = (char **)
     FUNC_8 ((VAR_31 *= 2) *
      sizeof (char *));
   FUNC_20 (VAR_30, VAR_39,
    VAR_32 * sizeof (char *));
        }
      continue;
    }

  if (VAR_29)
    {
      if (!VAR_28)
        {
   VAR_29->filename = (char *)
     FUNC_21 (&VAR_29->objfile->objfile_obstack,
      FUNC_26 (VAR_17) + 1);
   FUNC_25 (VAR_29->filename, VAR_17);
   VAR_28 = 1;
   continue;
        }
      continue;
    }




  if (VAR_29 && VAR_18)
    {
      FUNC_11 (VAR_29, VAR_30,
     VAR_32,
     (VAR_20
      * sizeof (struct dntt_type_block)),
     VAR_27,
     VAR_33, VAR_34);
      VAR_29 = (struct partial_symtab *) 0;
      VAR_32 = 0;
      VAR_34 = 0;
    }
  else
    VAR_18 = 1;

  VAR_25 = FUNC_15 (VAR_22, VAR_20, VAR_15, VAR_21);
  VAR_25 += FUNC_0 (VAR_15->section_offsets, FUNC_5 (VAR_15));
  VAR_29 = FUNC_17 (VAR_15,
         VAR_17, VAR_25,
         (VAR_20
      * sizeof (struct dntt_type_block)),
         VAR_15->global_psymbols.next,
         VAR_15->static_psymbols.next);
  VAR_27 = VAR_25;
  VAR_28 = 1;
  continue;
       }

     case 132:





       if (VAR_29)
  {
    FUNC_11 (VAR_29, VAR_30, VAR_32,
          ((VAR_20 - 1)
           * sizeof (struct dntt_type_block)),
          VAR_27,
          VAR_33, VAR_34);
    VAR_29 = (struct partial_symtab *) 0;
    VAR_32 = 0;
    VAR_34 = 0;
    VAR_28 = 0;
  }


       FUNC_23 (VAR_24, &VAR_17, VAR_15);
       VAR_25 = FUNC_15 (VAR_22, VAR_20, VAR_15, VAR_21);
       VAR_25 += FUNC_0 (VAR_15->section_offsets, FUNC_5 (VAR_15));
       if (!VAR_29)
  {
    VAR_29 = FUNC_17 (VAR_15,
           VAR_17, VAR_25,
           (VAR_20
      * sizeof (struct dntt_type_block)),
           VAR_15->global_psymbols.next,
           VAR_15->static_psymbols.next);
    VAR_27 = VAR_25;
    VAR_28 = 0;
  }
       continue;

     case 134:
     case 135:


       VAR_25 = VAR_24->dfunc.hiaddr + FUNC_0 (VAR_15->section_offsets,
             FUNC_5 (VAR_15));
       if (VAR_25 > VAR_27)
  VAR_27 = VAR_25;
       VAR_25 = VAR_24->dfunc.lowaddr +
  FUNC_0 (VAR_15->section_offsets, FUNC_5 (VAR_15));
       FUNC_23 (VAR_24, &VAR_17, VAR_15);
       if (VAR_24->dfunc.global)
  FUNC_7 (VAR_17, FUNC_26 (VAR_17),
         VAR_11, VAR_3,
         &VAR_15->global_psymbols, VAR_25,
         0, VAR_12, VAR_15);
       else
  FUNC_7 (VAR_17, FUNC_26 (VAR_17),
         VAR_11, VAR_3,
         &VAR_15->static_psymbols, VAR_25,
         0, VAR_12, VAR_15);
       VAR_36 = 1;
       continue;

     case 138:
       VAR_25 = VAR_24->ddocfunc.hiaddr + FUNC_0 (VAR_15->section_offsets,
         FUNC_5 (VAR_15));
       if (VAR_25 > VAR_27)
  VAR_27 = VAR_25;
       VAR_25 = VAR_24->ddocfunc.lowaddr +
  FUNC_0 (VAR_15->section_offsets, FUNC_5 (VAR_15));
       FUNC_23 (VAR_24, &VAR_17, VAR_15);
       if (VAR_24->ddocfunc.global)
  FUNC_7 (VAR_17, FUNC_26 (VAR_17),
         VAR_11, VAR_3,
         &VAR_15->global_psymbols, VAR_25,
         0, VAR_12, VAR_15);
       else
  FUNC_7 (VAR_17, FUNC_26 (VAR_17),
         VAR_11, VAR_3,
         &VAR_15->static_psymbols, VAR_25,
         0, VAR_12, VAR_15);
       VAR_36 = 1;
       continue;

     case 140:
     case 136:
       if ((VAR_24->dend.endkind == 134) ||
    (VAR_24->dend.endkind == 138))
  VAR_36 = 0;
       continue;

     case 130:
     case 137:
     case 128:
     case 129:
       {

  enum address_class VAR_40;
  domain_enum VAR_41;


  if (VAR_36
      && (VAR_24->dblock.kind == 130
   || VAR_24->dblock.kind == 137))
    continue;


  if (VAR_24->dblock.kind == 129)
    VAR_41 = VAR_10;
  else
    VAR_41 = VAR_11;


  if (VAR_24->dblock.kind == 130)
    VAR_40 = VAR_7;
  else if (VAR_24->dblock.kind == 137
    && VAR_24->ddvar.regvar)
    VAR_40 = VAR_6;
  else if (VAR_24->dblock.kind == 137)
    VAR_40 = VAR_5;
  else
    VAR_40 = VAR_8;

  FUNC_23 (VAR_24, &VAR_17, VAR_15);
  if (!VAR_29)
    {
      VAR_29 = FUNC_17 (VAR_15,
      "globals", 0,
      (VAR_20
      * sizeof (struct dntt_type_block)),
           VAR_15->global_psymbols.next,
          VAR_15->static_psymbols.next);
    }


  VAR_25 = VAR_24->dsvar.location;

  if (VAR_40 == VAR_7)
    VAR_25 += FUNC_0 (VAR_15->section_offsets, FUNC_4 (VAR_15));






  if (VAR_24->dsvar.global)
    {
      FUNC_7 (VAR_17, FUNC_26 (VAR_17),
      VAR_41, VAR_40,
      &VAR_15->global_psymbols,
      VAR_25,
      0, VAR_12, VAR_15);
    }
  else
    {
      FUNC_7 (VAR_17, FUNC_26 (VAR_17),
      VAR_41, VAR_40,
      &VAR_15->static_psymbols,
      VAR_25,
      0, VAR_12, VAR_15);
    }
  if (VAR_24->dblock.kind == 129 &&
    VAR_24->dtype.type.dnttp.index < FUNC_3 (VAR_15))
    {
      int VAR_42 = VAR_24->dtag.global;

      VAR_24 = FUNC_14 (VAR_24->dtype.type.dnttp.index, VAR_15);
      if (VAR_24->dblock.kind == VAR_0 ||
   VAR_24->dblock.kind == VAR_1 ||
   VAR_24->dblock.kind == VAR_2)
        {
   if (VAR_42)
     {
       FUNC_7 (VAR_17, FUNC_26 (VAR_17),
       VAR_11, VAR_40,
       &VAR_15->global_psymbols,
       VAR_24->dsvar.location,
           0, VAR_12, VAR_15);
     }
   else
     {
       FUNC_7 (VAR_17, FUNC_26 (VAR_17),
       VAR_11, VAR_40,
       &VAR_15->static_psymbols,
       VAR_24->dsvar.location,
           0, VAR_12, VAR_15);
     }
        }
    }
       }
       continue;

     case 133:
     case 139:

       FUNC_23 (VAR_24, &VAR_17, VAR_15);
       if (!VAR_29)
  {
    VAR_29 = FUNC_17 (VAR_15,
           "globals", 0,
           (VAR_20
      * sizeof (struct dntt_type_block)),
           VAR_15->global_psymbols.next,
           VAR_15->static_psymbols.next);
  }
       if (VAR_24->dconst.global)
  FUNC_7 (VAR_17, FUNC_26 (VAR_17),
         VAR_11, VAR_4,
         &VAR_15->global_psymbols, 0,
         0, VAR_12, VAR_15);
       else
  FUNC_7 (VAR_17, FUNC_26 (VAR_17),
         VAR_11, VAR_4,
         &VAR_15->static_psymbols, 0,
         0, VAR_12, VAR_15);
       continue;
     default:
       continue;
     }
 }
    }


  if (VAR_29)
    {
      FUNC_11 (VAR_29, VAR_30, VAR_32,
     VAR_20 * sizeof (struct dntt_type_block),
     0, VAR_33, VAR_34);
    }

  FUNC_9 (VAR_19);
}
