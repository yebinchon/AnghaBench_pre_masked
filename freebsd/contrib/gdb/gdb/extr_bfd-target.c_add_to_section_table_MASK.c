
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_closure {TYPE_1__* end; } ;
struct bfd_section {int dummy; } ;
struct bfd {int dummy; } ;
typedef int flagword ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ endaddr; struct bfd_section* the_bfd_section; struct bfd* bfd; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfd*,struct bfd_section*) ;
 scalar_t__ FUNC_1 (struct bfd*,struct bfd_section*) ;
 scalar_t__ FUNC_2 (struct bfd*,struct bfd_section*) ;

__attribute__((used)) static void
FUNC_3 (struct bfd *VAR_1, struct bfd_section *VAR_2,
        void *VAR_3)
{
  struct section_closure *VAR_4 = VAR_3;
  flagword VAR_5;


  VAR_5 = FUNC_0 (VAR_1, VAR_2);
  if (!(VAR_5 & VAR_0))
    return;
  if (FUNC_1 (VAR_1, VAR_2) == 0)
    return;
  VAR_4->end->bfd = VAR_1;
  VAR_4->end->the_bfd_section = VAR_2;
  VAR_4->end->addr = FUNC_2 (VAR_1, VAR_2);
  VAR_4->end->endaddr = VAR_4->end->addr + FUNC_1 (VAR_1, VAR_2);
  VAR_4->end++;
}
