
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int linkage_ptr; } ;
struct so_list {TYPE_2__ pa64_solib_desc; TYPE_5__* objfile; int abfd; } ;
struct section_addr_info {TYPE_1__* other; } ;
struct cleanup {int dummy; } ;
struct TYPE_11__ {int dp; struct so_list* so_info; int * unwind_info; } ;
typedef TYPE_3__ obj_private_data_t ;
typedef int bfd ;
struct TYPE_12__ {scalar_t__ filepos; } ;
typedef TYPE_4__ asection ;
struct TYPE_13__ {TYPE_3__* obj_private; int objfile_obstack; int flags; int obfd; } ;
struct TYPE_9__ {char* name; int addr; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 struct section_addr_info* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_4__* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,TYPE_4__**) ;
 int VAR_1 ;
 int * FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (struct cleanup*) ;
 int FUNC_11 (char*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cleanup* FUNC_12 (int ,struct section_addr_info*) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 (char*) ;
 TYPE_5__* FUNC_15 (char*,int,struct section_addr_info*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_16 (struct so_list *VAR_5, char *VAR_6, int VAR_7,
         CORE_ADDR VAR_8)
{
  bfd *VAR_9;
  asection *VAR_10;
  obj_private_data_t *VAR_11;
  struct section_addr_info *VAR_12;
  struct cleanup *VAR_13;



  VAR_9 = FUNC_8 (VAR_6, VAR_3);
  if (VAR_9 == ((void*)0))
    {
      FUNC_14 (VAR_6);
      return;
    }

  if (!FUNC_1 (VAR_9, VAR_1))
    {
      FUNC_2 (VAR_9);
      FUNC_11 ("\"%s\" is not an object file: %s", VAR_6,
      FUNC_4 (FUNC_5 ()));
    }






  VAR_10 = FUNC_6 (VAR_9, ".text");
  VAR_8 += FUNC_9 (VAR_9, VAR_10);


  VAR_10 = ((void*)0);
  FUNC_7 (VAR_9, VAR_2, &VAR_10);

  if (VAR_10)
    {

      VAR_8 -= FUNC_9 (VAR_9, VAR_10);


      VAR_8 += VAR_10->filepos;
    }

  VAR_12 = FUNC_0 (FUNC_3 (VAR_9));
  VAR_13 = FUNC_12 (VAR_4, VAR_12);



  FUNC_2 (VAR_9);
  VAR_9 = ((void*)0);


  VAR_12->other[0].addr = VAR_8;
  VAR_12->other[0].name = ".text";
  VAR_5->objfile = FUNC_15 (VAR_6, VAR_7, VAR_12, 0, VAR_0);
  VAR_5->abfd = VAR_5->objfile->obfd;


  VAR_5->objfile->flags |= VAR_0;

  if (VAR_5->objfile->obj_private == ((void*)0))
    {
      VAR_11 = (obj_private_data_t *)
 FUNC_13 (&VAR_5->objfile->objfile_obstack,
         sizeof (obj_private_data_t));
      VAR_11->unwind_info = ((void*)0);
      VAR_11->so_info = ((void*)0);
      VAR_5->objfile->obj_private = VAR_11;
    }

  VAR_11 = (obj_private_data_t *) VAR_5->objfile->obj_private;
  VAR_11->so_info = VAR_5;
  VAR_11->dp = VAR_5->pa64_solib_desc.linkage_ptr;
  FUNC_10 (VAR_13);
}
