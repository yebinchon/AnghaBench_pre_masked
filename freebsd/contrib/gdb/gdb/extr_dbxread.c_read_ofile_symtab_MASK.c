
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_offsets {int dummy; } ;
struct partial_symtab {scalar_t__ textlow; int texthigh; int symtab; struct section_offsets* section_offsets; struct objfile* objfile; } ;
struct objfile {int * obfd; } ;
struct internal_nlist {unsigned char n_type; int n_value; int n_desc; } ;
struct external_nlist {int e_type; } ;
typedef int bfd ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct objfile*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct internal_nlist,struct external_nlist*,int *) ;
 int FUNC_4 (struct partial_symtab*) ;
 int FUNC_5 (struct partial_symtab*) ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_6 (struct objfile*,int ) ;
 int VAR_9 ;
 int FUNC_7 (struct objfile*) ;
 char const FUNC_8 (int *) ;
 unsigned char FUNC_9 (int *,int ) ;
 struct objfile* VAR_10 ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,struct objfile*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (unsigned char,int ,int ,char*,struct section_offsets*,struct objfile*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int ) ;
 char* FUNC_16 (struct objfile*,struct internal_nlist) ;
 int FUNC_17 (int) ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 struct external_nlist* VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int * VAR_24 ;
 unsigned int VAR_25 ;

__attribute__((used)) static void
FUNC_18 (struct partial_symtab *VAR_26)
{
  char *VAR_27;
  struct external_nlist *VAR_28;
  struct internal_nlist VAR_29;
  unsigned char VAR_30;
  unsigned VAR_31;
  bfd *VAR_32;
  struct objfile *VAR_33;
  int VAR_34;
  int VAR_35;
  CORE_ADDR VAR_36;
  int VAR_37;
  struct section_offsets *VAR_38;

  VAR_33 = VAR_26->objfile;
  VAR_34 = FUNC_5 (VAR_26);
  VAR_35 = FUNC_4 (VAR_26);
  VAR_36 = VAR_26->textlow;
  VAR_37 = VAR_26->texthigh - VAR_26->textlow;




  VAR_38 = VAR_26->section_offsets;

  VAR_10 = VAR_33;
  VAR_17 = ((void*)0);

  VAR_16 = FUNC_0 (VAR_33);
  VAR_11 = ((void*)0);

  VAR_32 = VAR_33->obfd;
  VAR_24 = VAR_33->obfd;
  VAR_20 = VAR_21 = 0;
  VAR_23 = 0;
  VAR_22 = VAR_34 + VAR_35;







  if (!VAR_14 && VAR_34 >= (int) VAR_18)
    {
      FUNC_17 (VAR_34 - VAR_18);
      FUNC_13 (VAR_32);
      VAR_28 = &VAR_19[VAR_21++];
      FUNC_3 (VAR_29, VAR_28, VAR_32);
      FUNC_6 (VAR_33, VAR_13++);

      VAR_27 = FUNC_16 (VAR_33, VAR_29);

      VAR_15 = 0;
      if (VAR_29.n_type == VAR_8)
 {
   const char *VAR_39 = VAR_27;

   if (FUNC_1 (VAR_27, VAR_2))
     VAR_15 = 1;
   else if (FUNC_1 (VAR_27, VAR_1))
     VAR_15 = 2;
   if (VAR_39[0] == FUNC_8 (VAR_24))
     ++VAR_39;
   if (FUNC_2 (VAR_39, "__gnu_compiled", 14))
     VAR_15 = 2;
 }
    }
  else
    {



      FUNC_17 (VAR_34);
      VAR_15 = 0;
    }

  if (VAR_21 == VAR_20)
    FUNC_13 (VAR_32);
  VAR_28 = &VAR_19[VAR_21];
  if (FUNC_9 (VAR_32, VAR_28->e_type) != VAR_6)
    FUNC_12 ("First symbol in segment of executable not a source symbol");

  VAR_31 = VAR_35 / VAR_18;

  for (VAR_25 = 0;
       VAR_25 < VAR_31;
       VAR_25++)
    {
      VAR_9;
      if (VAR_21 == VAR_20)
 FUNC_13 (VAR_32);
      VAR_28 = &VAR_19[VAR_21++];
      FUNC_3 (VAR_29, VAR_28, VAR_32);
      FUNC_6 (VAR_33, VAR_13++);

      VAR_30 = FUNC_9 (VAR_32, VAR_28->e_type);

      VAR_27 = FUNC_16 (VAR_33, VAR_29);

      if (VAR_30 & VAR_7)
 {
   FUNC_14 (VAR_30, VAR_29.n_desc, VAR_29.n_value,
         VAR_27, VAR_38, VAR_33);
 }


      else if (VAR_30 == VAR_8)
 {






   if (FUNC_1 (VAR_27, VAR_2))
     VAR_15 = 1;
   else if (FUNC_1 (VAR_27, VAR_1))
     VAR_15 = 2;
 }
      else if (VAR_30 & VAR_4 || VAR_30 == (unsigned char) VAR_8
        || VAR_30 == (unsigned char) VAR_5
 )
 {
   ;
 }
    }

  VAR_10 = ((void*)0);




  if (VAR_12 == 0)
    VAR_12 = VAR_36;




  if (VAR_12 > VAR_36)
    VAR_12 = VAR_36;

  VAR_26->symtab = FUNC_11 (VAR_36 + VAR_37, VAR_33, FUNC_7 (VAR_33));

  FUNC_10 ();
}
