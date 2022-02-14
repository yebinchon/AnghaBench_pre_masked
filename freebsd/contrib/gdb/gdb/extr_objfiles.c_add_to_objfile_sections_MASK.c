
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {struct obj_section* sections_end; int objfile_obstack; } ;
struct obj_section {scalar_t__ addr; scalar_t__ endaddr; scalar_t__ ovly_mapped; struct bfd_section* the_bfd_section; struct objfile* objfile; scalar_t__ offset; } ;
struct bfd_section {int dummy; } ;
struct bfd {int dummy; } ;
typedef int section ;
typedef int flagword ;


 int VAR_0 ;
 int FUNC_0 (struct bfd_section*) ;
 int FUNC_1 (struct bfd*,struct bfd_section*) ;
 scalar_t__ FUNC_2 (struct bfd*,struct bfd_section*) ;
 scalar_t__ FUNC_3 (struct bfd*,struct bfd_section*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_5 (struct bfd *VAR_1, struct bfd_section *VAR_2,
    void *VAR_3)
{
  struct objfile *VAR_4 = (struct objfile *) VAR_3;
  struct obj_section VAR_5;
  flagword VAR_6;

  VAR_6 = FUNC_1 (VAR_1, VAR_2);

  if (!(VAR_6 & VAR_0) && !(FUNC_0 (VAR_2)))
    return;

  if (0 == FUNC_2 (VAR_1, VAR_2))
    return;
  VAR_5.offset = 0;
  VAR_5.objfile = VAR_4;
  VAR_5.the_bfd_section = VAR_2;
  VAR_5.ovly_mapped = 0;
  VAR_5.addr = FUNC_3 (VAR_1, VAR_2);
  VAR_5.endaddr = VAR_5.addr + FUNC_2 (VAR_1, VAR_2);
  FUNC_4 (&VAR_4->objfile_obstack, (char *) &VAR_5, sizeof (VAR_5));
  VAR_4->sections_end = (struct obj_section *) (((unsigned long) VAR_4->sections_end) + 1);
}
