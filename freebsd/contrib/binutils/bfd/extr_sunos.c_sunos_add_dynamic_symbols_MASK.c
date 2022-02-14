
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {unsigned long ld_need; } ;
struct sunos_dynamic_info {int dynsym_count; char* dynstr; TYPE_2__ dyninfo; struct external_nlist* dynsym; } ;
struct external_nlist {int dummy; } ;
struct bfd_link_needed_list {char* name; struct bfd_link_needed_list* next; TYPE_3__* by; } ;
struct bfd_link_info {TYPE_1__* hash; scalar_t__ relocatable; } ;
typedef int flagword ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef char bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_24__ {scalar_t__ xvec; int flags; TYPE_4__* sections; } ;
typedef TYPE_3__ bfd ;
struct TYPE_25__ {int flags; struct TYPE_25__* next; } ;
typedef TYPE_4__ asection ;
struct TYPE_26__ {struct bfd_link_needed_list* needed; TYPE_3__* dynobj; } ;
struct TYPE_22__ {scalar_t__ creator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*,int,TYPE_3__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;
 unsigned long FUNC_3 (TYPE_3__*,char*) ;
 int * FUNC_4 (TYPE_3__*,char*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,char*,int) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (char*,char*,unsigned short) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_3__*,struct bfd_link_info*,int) ;
 TYPE_6__* FUNC_19 (struct bfd_link_info*) ;
 int FUNC_20 (TYPE_3__*) ;

__attribute__((used)) static bfd_boolean
FUNC_21 (bfd *VAR_11,
      struct bfd_link_info *VAR_12,
      struct external_nlist **VAR_13,
      bfd_size_type *VAR_14,
      char **VAR_15)
{
  bfd *VAR_16;
  struct sunos_dynamic_info *VAR_17;
  unsigned long VAR_18;


  if (VAR_12->hash->creator == VAR_11->xvec)
    {
      if (! FUNC_18 (VAR_11, VAR_12,
        ((VAR_11->flags & VAR_0) != 0
         && !VAR_12->relocatable)))
 return VAR_1;
    }


  if ((VAR_11->flags & VAR_0) == 0)
    return VAR_9;

  VAR_16 = FUNC_19 (VAR_12)->dynobj;
  if (VAR_11 != VAR_16)
    VAR_11->sections = ((void*)0);
  else
    {
      asection *VAR_19;

      for (VAR_19 = VAR_11->sections; VAR_19 != ((void*)0); VAR_19 = VAR_19->next)
 {
   if ((VAR_19->flags & VAR_5) == 0)
     FUNC_8 (VAR_11, VAR_19);
 }
    }



  if (VAR_12->relocatable)
    return VAR_9;



  if (VAR_12->hash->creator != VAR_11->xvec)
    {
      FUNC_10 (VAR_10);
      return VAR_1;
    }




  if (FUNC_4 (VAR_16, ".need") == ((void*)0))
    {



      flagword VAR_20 = (VAR_2 | VAR_6 | VAR_3
   | VAR_4 | VAR_7);
      asection *VAR_21 = FUNC_5 (VAR_16, ".need", VAR_20);
      if (VAR_21 == ((void*)0)
   || ! FUNC_11 (VAR_16, VAR_21, 2))
 return VAR_1;
    }

  if (FUNC_4 (VAR_16, ".rules") == ((void*)0))
    {



      flagword VAR_22 = (VAR_2 | VAR_6 | VAR_3
   | VAR_4 | VAR_7);
      asection *VAR_23 = FUNC_5 (VAR_16, ".rules", VAR_22);
      if (VAR_23 == ((void*)0)
   || ! FUNC_11 (VAR_16, VAR_23, 2))
 return VAR_1;
    }


  if (! FUNC_20 (VAR_11))
    return VAR_1;

  VAR_17 = (struct sunos_dynamic_info *) FUNC_13 (VAR_11);
  *VAR_13 = VAR_17->dynsym;
  *VAR_14 = VAR_17->dynsym_count;
  *VAR_15 = VAR_17->dynstr;


  VAR_18 = VAR_17->dyninfo.ld_need;
  while (VAR_18 != 0)
    {
      bfd_byte VAR_24[16];
      unsigned long VAR_25, VAR_26;
      unsigned short VAR_27, VAR_28;
      struct bfd_link_needed_list *VAR_29, **VAR_30;
      char *VAR_31, *VAR_32;
      bfd_size_type VAR_33;
      bfd_byte VAR_34;
      char *VAR_35;

      if (FUNC_9 (VAR_11, (file_ptr) VAR_18, VAR_8) != 0
   || FUNC_1 (VAR_24, (bfd_size_type) 16, VAR_11) != 16)
 return VAR_1;



      VAR_25 = FUNC_3 (VAR_11, VAR_24);
      VAR_26 = FUNC_3 (VAR_11, VAR_24 + 4);
      VAR_27 = (unsigned short) FUNC_2 (VAR_11, VAR_24 + 8);
      VAR_28 = (unsigned short) FUNC_2 (VAR_11, VAR_24 + 10);
      VAR_18 = FUNC_3 (VAR_11, VAR_24 + 12);

      VAR_33 = sizeof (struct bfd_link_needed_list);
      VAR_29 = FUNC_0 (VAR_11, VAR_33);
      if (VAR_29 == ((void*)0))
 return VAR_1;
      VAR_29->by = VAR_11;


      VAR_33 = 30;
      VAR_31 = FUNC_6 (VAR_33 + 1);
      if (VAR_31 == ((void*)0))
 return VAR_1;
      VAR_32 = VAR_31;

      if ((VAR_26 & 0x80000000) != 0)
 {
   *VAR_32++ = '-';
   *VAR_32++ = 'l';
 }
      if (FUNC_9 (VAR_11, (file_ptr) VAR_25, VAR_8) != 0)
 {
   FUNC_12 (VAR_31);
   return VAR_1;
 }

      do
 {
   if (FUNC_1 (&VAR_34, (bfd_size_type) 1, VAR_11) != 1)
     {
       FUNC_12 (VAR_31);
       return VAR_1;
     }

   if ((bfd_size_type) (VAR_32 - VAR_31) >= VAR_33)
     {
       char *VAR_36;

       VAR_33 *= 2;
       VAR_36 = FUNC_7 (VAR_31, VAR_33 + 1);
       if (VAR_36 == ((void*)0))
  {
    FUNC_12 (VAR_31);
    return VAR_1;
  }
       VAR_32 = VAR_36 + (VAR_32 - VAR_31);
       VAR_31 = VAR_36;
     }

   *VAR_32++ = VAR_34;
 }
      while (VAR_34 != '\0');

      if (VAR_27 == 0)
 *VAR_32 = '\0';
      else
 {
   char VAR_37[30];
   char VAR_38[30];

   FUNC_14 (VAR_37, ".%d", VAR_27);
   if (VAR_28 == 0)
     VAR_38[0] = '\0';
   else
     FUNC_14 (VAR_38, ".%d", VAR_28);

   if ((VAR_32 - VAR_31) + FUNC_17 (VAR_37) + FUNC_17 (VAR_38) >= VAR_33)
     {
       char *VAR_39;

       VAR_33 = (VAR_32 - VAR_31) + FUNC_17 (VAR_37) + FUNC_17 (VAR_38);
       VAR_39 = FUNC_7 (VAR_31, VAR_33 + 1);
       if (VAR_39 == ((void*)0))
  {
    FUNC_12 (VAR_31);
    return VAR_1;
  }
       VAR_32 = VAR_39 + (VAR_32 - VAR_31);
       VAR_31 = VAR_39;
     }

   FUNC_16 (VAR_32, VAR_37);
   FUNC_15 (VAR_32, VAR_38);
 }

      VAR_35 = FUNC_0 (VAR_11, (bfd_size_type) FUNC_17 (VAR_31) + 1);
      if (VAR_35 == ((void*)0))
 {
   FUNC_12 (VAR_31);
   return VAR_1;
 }
      FUNC_16 (VAR_35, VAR_31);
      FUNC_12 (VAR_31);
      VAR_29->name = VAR_35;

      VAR_29->next = ((void*)0);

      for (VAR_30 = &FUNC_19 (VAR_12)->needed;
    *VAR_30 != ((void*)0);
    VAR_30 = &(*VAR_30)->next)
 ;
      *VAR_30 = VAR_29;
    }

  return VAR_9;
}
