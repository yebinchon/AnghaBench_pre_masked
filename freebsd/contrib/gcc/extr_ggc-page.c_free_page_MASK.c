
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index_by_depth; scalar_t__ context_depth; struct TYPE_4__* next; scalar_t__ page; int group; scalar_t__ bytes; } ;
typedef TYPE_1__ page_entry ;
struct TYPE_5__ {int by_depth_in_use; TYPE_1__* free_pages; int * save_in_use; TYPE_1__** by_depth; int debug_file; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*,void*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_7 (page_entry *VAR_2)
{
  if (VAR_1 >= 2)
    FUNC_4 (VAR_0.debug_file,
      "Deallocating page at %p, data %ld-%ld\n", (void *) VAR_2,
      VAR_2->page, VAR_2->page + VAR_2->bytes - 1);



  FUNC_0 (FUNC_1 (VAR_2->page, VAR_2->bytes));

  FUNC_6 (VAR_2->page, ((void*)0));





  if (VAR_0.by_depth_in_use > 1)
    {
      page_entry *VAR_3 = VAR_0.by_depth[VAR_0.by_depth_in_use-1];
      int VAR_4 = VAR_2->index_by_depth;



      FUNC_5 (VAR_2->context_depth == VAR_3->context_depth);


      VAR_0.by_depth[VAR_4] = VAR_3;
      VAR_0.save_in_use[VAR_4] = VAR_0.save_in_use[VAR_0.by_depth_in_use-1];
      VAR_3->index_by_depth = VAR_4;
    }
  --VAR_0.by_depth_in_use;

  FUNC_2 ();

  VAR_2->next = VAR_0.free_pages;
  VAR_0.free_pages = VAR_2;
}
