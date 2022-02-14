
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_zone {char* name; int was_collected; scalar_t__ allocated; scalar_t__ allocated_last_gc; struct alloc_chunk** free_chunks; } ;
struct alloc_chunk {struct alloc_chunk* next_free; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (struct alloc_zone*) ;
 int VAR_2 ;
 int FUNC_4 (struct alloc_zone*) ;
 int FUNC_5 () ;

__attribute__((used)) static bool
FUNC_6 (struct alloc_zone *VAR_3, bool VAR_4)
{
  if (!VAR_1)
    FUNC_0 (VAR_2, " {%s GC %luk -> ",
      VAR_3->name, (unsigned long) VAR_3->allocated / 1024);



  VAR_3->allocated = 0;



  FUNC_3 (VAR_3);

  if (VAR_4)
    {
      FUNC_5 ();
      FUNC_1 ();



    }

  FUNC_4 (VAR_3);
  VAR_3->was_collected = 1;
  VAR_3->allocated_last_gc = VAR_3->allocated;

  if (!VAR_1)
    FUNC_0 (VAR_2, "%luk}", (unsigned long) VAR_3->allocated / 1024);
  return 1;
}
