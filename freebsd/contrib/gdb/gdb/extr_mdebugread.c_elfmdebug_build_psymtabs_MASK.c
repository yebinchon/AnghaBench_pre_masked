
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int objfile_obstack; int * obfd; } ;
struct ecoff_debug_swap {int (* read_debug_info ) (int *,int *,struct ecoff_debug_info*) ;} ;
struct ecoff_debug_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
typedef int asection ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct objfile*) ;
 struct cleanup* FUNC_6 () ;
 int FUNC_7 (struct objfile*,struct ecoff_debug_swap const*,struct ecoff_debug_info*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *,struct ecoff_debug_info*) ;

void
FUNC_10 (struct objfile *VAR_0,
     const struct ecoff_debug_swap *VAR_1, asection *VAR_2)
{
  bfd *VAR_3 = VAR_0->obfd;
  struct ecoff_debug_info *VAR_4;
  struct cleanup *VAR_5;





  FUNC_4 ();
  VAR_5 = FUNC_6 ();

  VAR_4 = ((struct ecoff_debug_info *)
   FUNC_8 (&VAR_0->objfile_obstack,
    sizeof (struct ecoff_debug_info)));

  if (!(*VAR_1->read_debug_info) (VAR_3, VAR_2, VAR_4))
    FUNC_3 ("Error reading ECOFF debugging information: %s",
    FUNC_0 (FUNC_1 ()));

  FUNC_7 (VAR_0, VAR_1, VAR_4);

  FUNC_5 (VAR_0);
  FUNC_2 (VAR_5);
}
