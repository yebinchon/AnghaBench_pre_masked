
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct load_module_desc {int dummy; } ;
typedef int dll_desc ;
typedef int asection ;
struct TYPE_4__ {int dld_flags; int load_map; int have_read_dld_descriptor; } ;
struct TYPE_3__ {int obfd; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,struct load_module_desc*,int ,struct target_ops*) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_3 (int,struct load_module_desc*,int,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct load_module_desc*,int,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (struct target_ops*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (char*) ;

void
FUNC_9 (char *VAR_4, int VAR_5, struct target_ops *VAR_6, int VAR_7)
{
  struct minimal_symbol *VAR_8;
  CORE_ADDR VAR_9;
  asection *VAR_10;
  int VAR_11;
  unsigned int VAR_12;
  char VAR_13[4], *VAR_14;
  int VAR_15 = 0;
  int VAR_16;
  struct load_module_desc VAR_17;
  char *VAR_18;


  if ((VAR_14 = FUNC_6 (VAR_4 ? VAR_4 : ".")) != ((void*)0))
    {
      FUNC_5 ("Invalid regexp: %s", VAR_14);
    }
  if (VAR_3 == ((void*)0))
    return;


  VAR_10 = FUNC_1 (VAR_3->obfd, ".dynamic");
  if (!VAR_10)
    return;


  if (FUNC_2 (VAR_3->obfd, VAR_10) == 0)
    return;


  if (! VAR_1.have_read_dld_descriptor)
    if (! FUNC_7 (VAR_6, VAR_7))
      return;


  if ((VAR_1.dld_flags & VAR_0) == 0)
    FUNC_8 ("The shared libraries were not privately mapped; setting a\nbreakpoint in a shared library will not work until you rerun the program.\n");


  for (VAR_16 = 1; ; VAR_16++)
    {

      if (FUNC_3 (VAR_16, &VAR_17, sizeof (VAR_17),
   VAR_2, 0, VAR_1.load_map)
   == 0)
 return;


      VAR_18 = (char *)FUNC_4 (&VAR_17, sizeof (VAR_17),
       VAR_2,
       0, VAR_1.load_map);

      if (!VAR_18)
 FUNC_5 ("pa64_solib_add, unable to read shared library path.");

      FUNC_0 (VAR_5, VAR_18, VAR_7, &VAR_17, 0, VAR_6);
    }
}
