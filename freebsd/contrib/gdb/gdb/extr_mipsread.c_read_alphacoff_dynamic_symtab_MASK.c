
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section_offsets {int dummy; } ;
struct objfile {int * obfd; } ;
struct cleanup {int dummy; } ;
struct alphacoff_dynsecinfo {int * got_sect; int * dyninfo_sect; int * str_sect; int * sym_sect; } ;
typedef int si ;
typedef int file_ptr ;
typedef enum minimal_symbol_type { ____Placeholder_minimal_symbol_type } minimal_symbol_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ d_val; } ;
struct TYPE_6__ {TYPE_1__ d_un; scalar_t__ d_tag; } ;
struct TYPE_5__ {scalar_t__ st_shndx; scalar_t__ st_info; scalar_t__ st_value; scalar_t__ st_name; } ;
typedef TYPE_2__ Elfalpha_External_Sym ;
typedef TYPE_3__ Elfalpha_External_Dyn ;


 scalar_t__ FUNC_0 (struct section_offsets*,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (struct objfile*) ;
 int FUNC_4 (struct objfile*) ;
 int FUNC_5 (struct objfile*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*,int ,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 unsigned int FUNC_10 (int *,int *) ;
 void* FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 unsigned char FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ,void*) ;
 int FUNC_15 (struct cleanup*) ;
 int VAR_12 ;
 struct cleanup* FUNC_16 (int ,char*) ;
 int FUNC_17 (char*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_18 (char*,scalar_t__,int,struct objfile*) ;
 char* FUNC_19 (int) ;

__attribute__((used)) static void
FUNC_20 (struct section_offsets *VAR_21,
          struct objfile *VAR_22)
{
  bfd *VAR_23 = VAR_22->obfd;
  struct alphacoff_dynsecinfo VAR_24;
  char *VAR_25;
  char *VAR_26;
  char *VAR_27;
  char *VAR_28;
  bfd_size_type VAR_29;
  bfd_size_type VAR_30;
  bfd_size_type VAR_31;
  bfd_size_type VAR_32;
  int VAR_33;
  int VAR_34;
  int VAR_35;
  Elfalpha_External_Sym *VAR_36;
  char *VAR_37;
  char *VAR_38;
  int VAR_39 = 8;
  int VAR_40 = -1;
  int VAR_41 = -1;
  struct cleanup *VAR_42;



  if (FUNC_6 (VAR_23) != VAR_11)
    return;


  FUNC_17 ((char *) &VAR_24, 0, sizeof (VAR_24));
  FUNC_14 (VAR_23, VAR_10, (void *) & VAR_24);
  if (VAR_24.sym_sect == ((void*)0)
      || VAR_24.str_sect == ((void*)0)
      || VAR_24.dyninfo_sect == ((void*)0)
      || VAR_24.got_sect == ((void*)0))
    return;

  VAR_29 = FUNC_8 (VAR_24.sym_sect);
  VAR_30 = FUNC_8 (VAR_24.str_sect);
  VAR_31 = FUNC_8 (VAR_24.dyninfo_sect);
  VAR_32 = FUNC_8 (VAR_24.got_sect);
  VAR_25 = FUNC_19 (VAR_29);
  VAR_42 = FUNC_16 (VAR_12, VAR_25);
  VAR_26 = FUNC_19 (VAR_30);
  FUNC_16 (VAR_12, VAR_26);
  VAR_27 = FUNC_19 (VAR_31);
  FUNC_16 (VAR_12, VAR_27);
  VAR_28 = FUNC_19 (VAR_32);
  FUNC_16 (VAR_12, VAR_28);

  if (!FUNC_7 (VAR_23, VAR_24.sym_sect, VAR_25,
     (file_ptr) 0, VAR_29))
    return;
  if (!FUNC_7 (VAR_23, VAR_24.str_sect, VAR_26,
     (file_ptr) 0, VAR_30))
    return;
  if (!FUNC_7 (VAR_23, VAR_24.dyninfo_sect, VAR_27,
     (file_ptr) 0, VAR_31))
    return;
  if (!FUNC_7 (VAR_23, VAR_24.got_sect, VAR_28,
     (file_ptr) 0, VAR_32))
    return;



  for (VAR_37 = VAR_27, VAR_38 = VAR_37 + VAR_31;
       VAR_37 < VAR_38;
       VAR_37 += sizeof (Elfalpha_External_Dyn))
    {
      Elfalpha_External_Dyn *VAR_43 = (Elfalpha_External_Dyn *) VAR_37;
      long VAR_44;

      VAR_44 = FUNC_11 (VAR_23, (bfd_byte *) VAR_43->d_tag);
      if (VAR_44 == VAR_2)
 break;
      else if (VAR_44 == VAR_1)
 {
   if (VAR_40 < 0)
     VAR_40
       = FUNC_11 (VAR_23, (bfd_byte *) VAR_43->d_un.d_val);
 }
      else if (VAR_44 == VAR_0)
 {
   if (VAR_41 < 0)
     VAR_41
       = FUNC_11 (VAR_23, (bfd_byte *) VAR_43->d_un.d_val);
 }
    }
  if (VAR_40 < 0 || VAR_41 < 0)
    return;



  VAR_33 = VAR_29 / sizeof (Elfalpha_External_Sym);
  VAR_35 = (FUNC_9 (VAR_23) == 0);


  for (VAR_34 = 1, VAR_36 = (Elfalpha_External_Sym *) VAR_25 + 1;
       VAR_34 < VAR_33;
       VAR_34++, VAR_36++)
    {
      unsigned long VAR_45;
      char *VAR_46;
      bfd_vma VAR_47;
      unsigned char VAR_48;
      unsigned int VAR_49;
      int VAR_50;
      enum minimal_symbol_type VAR_51;

      VAR_45 = FUNC_11 (VAR_23, (bfd_byte *) VAR_36->st_name);
      if (VAR_45 >= VAR_30)
 continue;
      VAR_46 = VAR_26 + VAR_45;
      if (*VAR_46 == '\0' || *VAR_46 == '.')
 continue;

      VAR_47 = FUNC_12 (VAR_23, (bfd_byte *) VAR_36->st_value);
      VAR_48 = FUNC_13 (VAR_23, (bfd_byte *) VAR_36->st_info);
      VAR_49 = FUNC_10 (VAR_23, (bfd_byte *) VAR_36->st_shndx);
      VAR_50 = (FUNC_1 (VAR_48) == VAR_8);

      if (VAR_49 == VAR_7)
 {


   if (FUNC_2 (VAR_48) != VAR_9
       || FUNC_1 (VAR_48) != VAR_8)
     continue;

   VAR_51 = VAR_19;
   if (VAR_47 == 0)
     {
       int VAR_52 =
       (VAR_34 - VAR_41 + VAR_40) * VAR_39;

       if (VAR_52 < 0 || VAR_52 >= VAR_32)
  continue;
       VAR_47 =
  FUNC_12 (VAR_23,
         (bfd_byte *) (VAR_28 + VAR_52));
       if (VAR_47 == 0)
  continue;
     }
 }
      else
 {



   if (!VAR_35)
     continue;

   if (VAR_49 == VAR_6)
     {
       if (VAR_50)
  VAR_51 = VAR_20;
       else
  VAR_51 = VAR_18;
       VAR_47 += FUNC_0 (VAR_21, FUNC_5 (VAR_22));
     }
   else if (VAR_49 == VAR_5)
     {
       if (VAR_50)
  VAR_51 = VAR_15;
       else
  VAR_51 = VAR_17;
       VAR_47 += FUNC_0 (VAR_21, FUNC_4 (VAR_22));
     }
   else if (VAR_49 == VAR_4)
     {
       if (VAR_50)
  VAR_51 = VAR_14;
       else
  VAR_51 = VAR_16;
       VAR_47 += FUNC_0 (VAR_21, FUNC_3 (VAR_22));
     }
   else if (VAR_49 == VAR_3)
     {
       VAR_51 = VAR_13;
     }
   else
     {
       continue;
     }
 }

      FUNC_18 (VAR_46, VAR_47, VAR_51, VAR_22);
    }

  FUNC_15 (VAR_42);
}
