
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_table {scalar_t__ addr; scalar_t__ endaddr; struct bfd_section* the_bfd_section; int * bfd; } ;
struct bfd_section {int dummy; } ;
typedef int flagword ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bfd_section*) ;
 scalar_t__ FUNC_1 (int *,struct bfd_section*) ;
 scalar_t__ FUNC_2 (int *,struct bfd_section*) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_1, struct bfd_section *VAR_2,
        void *VAR_3)
{
  struct section_table **VAR_4 = (struct section_table **) VAR_3;
  flagword VAR_5;

  VAR_5 = FUNC_0 (VAR_1, VAR_2);
  if (!(VAR_5 & VAR_0))
    return;
  if (0 == FUNC_1 (VAR_1, VAR_2))
    return;
  (*VAR_4)->bfd = VAR_1;
  (*VAR_4)->the_bfd_section = VAR_2;
  (*VAR_4)->addr = FUNC_2 (VAR_1, VAR_2);
  (*VAR_4)->endaddr = (*VAR_4)->addr + FUNC_1 (VAR_1, VAR_2);
  (*VAR_4)++;
}
