
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct internal_reloc {unsigned short r_type; long r_symndx; } ;
struct coff_link_hash_entry {int class; } ;
struct coff_arm_link_hash_table {int support_old_code; int * bfd_of_glue_owner; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef int bfd_boolean ;
struct TYPE_10__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_11__ {scalar_t__ reloc_count; struct TYPE_11__* next; } ;
typedef TYPE_2__ asection ;




 int FUNC_0 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct internal_reloc* FUNC_3 (TYPE_1__*,TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*,long) ;
 struct coff_arm_link_hash_table* FUNC_5 (struct bfd_link_info*) ;
 struct coff_link_hash_entry** FUNC_6 (TYPE_1__*) ;
 long FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct bfd_link_info*,struct coff_link_hash_entry*) ;
 int FUNC_9 (struct bfd_link_info*,struct coff_link_hash_entry*) ;

bfd_boolean
FUNC_10 (bfd * VAR_2,
       struct bfd_link_info * VAR_3,
       int VAR_4)
{
  asection * VAR_5;
  struct coff_arm_link_hash_table * VAR_6;



  if (VAR_3->relocatable)
    return VAR_1;



  FUNC_2 (VAR_2);

  VAR_6 = FUNC_5 (VAR_3);

  FUNC_0 (VAR_6 != ((void*)0));
  FUNC_0 (VAR_6->bfd_of_glue_owner != ((void*)0));

  VAR_6->support_old_code = VAR_4;


  VAR_5 = VAR_2->sections;

  if (VAR_5 == ((void*)0))
    return VAR_1;

  for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      struct internal_reloc * VAR_7;
      struct internal_reloc * VAR_8;

      if (VAR_5->reloc_count == 0)
 continue;



      VAR_7 = FUNC_3 (VAR_2, VAR_5, 1, 0, 0, 0);

      FUNC_0 (VAR_7 != 0);

      for (VAR_8 = VAR_7; VAR_8 < VAR_7 + VAR_5->reloc_count; ++VAR_8)
 {
   unsigned short VAR_9 = VAR_8->r_type;
   long VAR_10;
   struct coff_link_hash_entry * VAR_11;

   VAR_10 = VAR_8->r_symndx;


   if (VAR_10 == -1)
     continue;


   if (VAR_10 >= FUNC_7 (VAR_2))
     {
       FUNC_4 (FUNC_1("%B: illegal symbol index in reloc: %d"),
      VAR_2, VAR_10);
       continue;
     }

   VAR_11 = FUNC_6 (VAR_2)[VAR_10];



   if (VAR_11 == ((void*)0))
     continue;

   switch (VAR_9)
     {
     case 132:




       if (VAR_11->class == VAR_0)
  FUNC_8 (VAR_3, VAR_11);
       break;


     case 131:
       switch (VAR_11->class)
  {
  case 130:
  case 128:
  case 129:
    FUNC_9 (VAR_3, VAR_11);
    break;
  default:
    ;
  }
       break;


     default:
       break;
     }
 }
    }

  return VAR_1;
}
