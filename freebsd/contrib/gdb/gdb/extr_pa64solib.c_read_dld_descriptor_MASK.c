
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct target_ops {int dummy; } ;
typedef int asection ;
struct TYPE_5__ {int have_read_dld_descriptor; int dld_desc; int load_map; int load_map_addr; int is_valid; } ;
struct TYPE_4__ {int obfd; } ;


 int FUNC_0 (int ,char*,int,int *,int ,struct target_ops*) ;
 int * FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_2 (int,int *,int,int ,int ,int ) ;
 char* FUNC_3 (int *,int,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *,TYPE_2__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7 (struct target_ops *VAR_3, int VAR_4)
{
  char *VAR_5;
  asection *VAR_6;



  if (!VAR_0.is_valid)
    {
      if (VAR_2 == ((void*)0))
 FUNC_4 ("No object file symbols.");

      VAR_6 = FUNC_1 (VAR_2->obfd,
           ".dynamic");
      if (!VAR_6)
 {
   return 0;
 }

      if (!FUNC_5 (VAR_6, &VAR_0))
 FUNC_4 ("Unable to read in .dynamic section information.");
    }


  if (FUNC_6 (VAR_0.load_map_addr,
     (char*) &VAR_0.load_map,
     sizeof(VAR_0.load_map))
      != 0)
    {
      FUNC_4 ("Error while reading in load map pointer.");
    }


  if (FUNC_2 (-1,
      &VAR_0.dld_desc,
      sizeof(VAR_0.dld_desc),
      VAR_1,
      0,
      VAR_0.load_map)
      == 0)
    {
      FUNC_4 ("Error trying to get information about dynamic linker.");
    }


  VAR_0.have_read_dld_descriptor = 1;
  VAR_5 = FUNC_3 (&VAR_0.dld_desc,
   sizeof(VAR_0.dld_desc),
   VAR_1,
   0,
   VAR_0.load_map);
  FUNC_0(0, VAR_5, VAR_4, &VAR_0.dld_desc, 0, VAR_3);

  return 1;
}
