
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct section_table {scalar_t__ endaddr; scalar_t__ addr; TYPE_1__* bfd; struct bfd_section* the_bfd_section; } ;
struct bfd_section {int dummy; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ bfd ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,struct bfd_section*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct bfd_section*) ;

__attribute__((used)) static void
FUNC_3 (struct section_table *VAR_2, CORE_ADDR *VAR_3)
{
 struct bfd_section *VAR_4 = VAR_2->the_bfd_section;
 bfd *VAR_5 = VAR_2->bfd;

 if ((VAR_5->flags & (VAR_1 | VAR_0)) != 0) {
  VAR_2->addr += *VAR_3;
  VAR_2->endaddr += *VAR_3;
  return;
 }

 *VAR_3 = FUNC_0(*VAR_3,
     FUNC_1(VAR_5, VAR_4));
 VAR_2->addr = *VAR_3;
 VAR_2->endaddr = VAR_2->addr + FUNC_2(VAR_5, VAR_4);
 *VAR_3 = VAR_2->endaddr;
}
