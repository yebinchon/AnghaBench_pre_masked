
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* data_start; void* text_link_addr; void* text_addr; int name; } ;
struct so_list {struct so_list* next; TYPE_1__ som_solib; } ;
struct section_offsets {void** offsets; } ;
struct objfile {int obfd; int name; } ;
struct TYPE_5__ {void* vma; } ;
typedef TYPE_2__ asection ;


 void* FUNC_0 (struct section_offsets*,size_t) ;
 size_t FUNC_1 (struct objfile*) ;
 size_t FUNC_2 (struct objfile*) ;
 size_t FUNC_3 (struct objfile*) ;
 size_t FUNC_4 (struct objfile*) ;
 TYPE_2__* FUNC_5 (int ,char*) ;
 struct so_list* VAR_0 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

int
FUNC_8 (struct objfile *VAR_1,
      struct section_offsets *VAR_2)
{
  struct so_list *VAR_3 = VAR_0;

  while (VAR_3)
    {


      if (FUNC_6 (VAR_1->name, VAR_3->som_solib.name))
 {
   asection *VAR_4;


   VAR_2->offsets[FUNC_4 (VAR_1)]
     = (VAR_3->som_solib.text_addr
        - VAR_3->som_solib.text_link_addr);
   VAR_2->offsets[FUNC_3 (VAR_1)]
     = FUNC_0 (VAR_2, FUNC_4 (VAR_1));



   VAR_4 = FUNC_5 (VAR_1->obfd,
           "$PRIVATE$");
   if (!VAR_4)
     {
       FUNC_7 ("Unable to find $PRIVATE$ in shared library!");
       VAR_2->offsets[FUNC_2 (VAR_1)] = 0;
       VAR_2->offsets[FUNC_1 (VAR_1)] = 0;
       return 1;
     }
   VAR_2->offsets[FUNC_2 (VAR_1)]
     = (VAR_3->som_solib.data_start - VAR_4->vma);
   VAR_2->offsets[FUNC_1 (VAR_1)]
     = FUNC_0 (VAR_2, FUNC_2 (VAR_1));
   return 1;
 }
      VAR_3 = VAR_3->next;
    }
  return 0;
}
