
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* page; int large_p; int pch_p; struct alloc_zone* zone; scalar_t__ survived; } ;
struct large_page_entry {int mark_p; size_t bytes; TYPE_1__ common; int * prev; int * next; } ;
struct alloc_zone {char* name; } ;
struct TYPE_4__ {int debug_file; } ;
typedef int PTR ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int ,char*,char*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static struct large_page_entry *
FUNC_3 (size_t VAR_3, struct alloc_zone *VAR_4)
{
  struct large_page_entry *VAR_5;
  char *VAR_6;
  size_t VAR_7;

  VAR_7 = VAR_3 + sizeof (struct large_page_entry);
  VAR_6 = FUNC_2 (VAR_7);

  VAR_5 = (struct large_page_entry *) VAR_6;

  VAR_5->next = ((void*)0);
  VAR_5->common.page = VAR_6 + sizeof (struct large_page_entry);
  VAR_5->common.large_p = 1;
  VAR_5->common.pch_p = 0;
  VAR_5->common.zone = VAR_4;



  VAR_5->mark_p = 0;
  VAR_5->bytes = VAR_3;
  VAR_5->prev = ((void*)0);

  FUNC_1 (VAR_5->common.page, &VAR_5->common);

  if (VAR_1 >= 2)
    FUNC_0 (VAR_0.debug_file,
      "Allocating %s large page at %d, data %p-%p\n",
      VAR_5->common.zone->name, (PTR) VAR_5, VAR_5->common.page,
      VAR_5->common.page + VAR_2 - 1);

  return VAR_5;
}
