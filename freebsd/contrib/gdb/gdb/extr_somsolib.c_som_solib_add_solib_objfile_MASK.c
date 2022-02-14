
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_start; scalar_t__ text_link_addr; scalar_t__ text_addr; } ;
struct so_list {int abfd; TYPE_3__* objfile; TYPE_1__ som_solib; } ;
struct obj_section {int endaddr; int addr; int the_bfd_section; } ;
struct TYPE_5__ {struct so_list* so_info; int * unwind_info; } ;
typedef TYPE_2__ obj_private_data_t ;
typedef int flagword ;
struct TYPE_6__ {TYPE_2__* obj_private; int objfile_obstack; int flags; struct obj_section* sections_end; struct obj_section* sections; int obfd; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 TYPE_3__* FUNC_6 (char*,int,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (struct so_list *VAR_4, char *VAR_5, int VAR_6,
        CORE_ADDR VAR_7)
{
  obj_private_data_t *VAR_8;
  struct obj_section *VAR_9;

  VAR_4->objfile = FUNC_6 (VAR_5, VAR_6, ((void*)0), 0, VAR_0);
  VAR_4->abfd = VAR_4->objfile->obfd;



  for (VAR_9 = VAR_4->objfile->sections; VAR_9 < VAR_4->objfile->sections_end; VAR_9++)
    {
      flagword VAR_10 = FUNC_3(VAR_4->abfd, VAR_9->the_bfd_section);
      if (VAR_10 & VAR_1)
 {
   VAR_9->addr += VAR_4->som_solib.text_addr - VAR_4->som_solib.text_link_addr;
   VAR_9->endaddr += VAR_4->som_solib.text_addr - VAR_4->som_solib.text_link_addr;
 }
      else if (VAR_10 & VAR_2)
 {
   VAR_9->addr += VAR_4->som_solib.data_start;
   VAR_9->endaddr += VAR_4->som_solib.data_start;
 }
      else
 ;
    }



  VAR_4->objfile->flags |= VAR_0;

  if (VAR_4->objfile->obj_private == ((void*)0))
    {
      VAR_8 = (obj_private_data_t *)
 FUNC_5 (&VAR_4->objfile->objfile_obstack,
         sizeof (obj_private_data_t));
      VAR_8->unwind_info = ((void*)0);
      VAR_8->so_info = ((void*)0);
      VAR_4->objfile->obj_private = VAR_8;
    }

  VAR_8 = (obj_private_data_t *) VAR_4->objfile->obj_private;
  VAR_8->so_info = VAR_4;

  if (!FUNC_0 (VAR_4->abfd, VAR_3))
    {
      FUNC_4 ("\"%s\": not in executable format: %s.",
      VAR_5, FUNC_1 (FUNC_2 ()));
    }
}
