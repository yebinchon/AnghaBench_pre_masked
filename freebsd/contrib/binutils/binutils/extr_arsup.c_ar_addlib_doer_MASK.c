
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* archive_next; } ;
typedef TYPE_1__ bfd ;
struct TYPE_6__ {TYPE_1__* archive_head; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (bfd *VAR_1, bfd *VAR_2)
{

  if (VAR_2 != ((void*)0))
    VAR_2->archive_next = VAR_1->archive_next;

  VAR_1->archive_next = VAR_0->archive_head;
  VAR_0->archive_head = VAR_1;
}
