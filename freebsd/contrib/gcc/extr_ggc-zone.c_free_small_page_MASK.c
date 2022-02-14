
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* zone; scalar_t__ page; int large_p; } ;
struct small_page_entry {TYPE_2__ common; struct small_page_entry* next; } ;
struct TYPE_6__ {int debug_file; } ;
struct TYPE_4__ {char* name; int n_small_pages; struct small_page_entry* free_pages; } ;
typedef int PTR ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void
FUNC_4 (struct small_page_entry *VAR_3)
{
  if (VAR_1 >= 2)
    FUNC_2 (VAR_0.debug_file,
      "Deallocating %s page at %d, data %ld-%ld\n",
      VAR_3->common.zone->name, (PTR) VAR_3,
      VAR_3->common.page, VAR_3->common.page + VAR_2 - 1);

  FUNC_3 (!VAR_3->common.large_p);



  FUNC_0 (FUNC_1 (VAR_3->common.page,
         VAR_2));

  VAR_3->next = VAR_3->common.zone->free_pages;
  VAR_3->common.zone->free_pages = VAR_3;
  VAR_3->common.zone->n_small_pages--;
}
