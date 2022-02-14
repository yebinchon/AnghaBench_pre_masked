
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alloc_zone {size_t high_free_bin; struct alloc_chunk** free_chunks; } ;
struct alloc_chunk {size_t size; struct alloc_chunk* next_free; } ;
struct TYPE_2__ {int debug_file; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct alloc_chunk*,int) ;
 int FUNC_4 (int ,char*,void*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline void
FUNC_6 (char *VAR_3, size_t VAR_4, struct alloc_zone *VAR_5)
{
  struct alloc_chunk *VAR_6 = (struct alloc_chunk *) VAR_3;
  size_t VAR_7 = 0;

  VAR_7 = FUNC_0 (VAR_4);
  FUNC_5 (VAR_7 != 0);
  if (VAR_7 > VAR_2)
    {
      VAR_7 = 0;
      FUNC_1 (FUNC_3 (VAR_6, sizeof (struct alloc_chunk)));
      VAR_6->size = VAR_4;
      VAR_6->next_free = VAR_5->free_chunks[VAR_7];
      FUNC_1 (FUNC_2 (VAR_3 + sizeof (struct alloc_chunk),
      VAR_4 - sizeof (struct alloc_chunk)));
    }
  else
    {
      FUNC_1 (FUNC_3 (VAR_6, sizeof (struct alloc_chunk *)));
      VAR_6->next_free = VAR_5->free_chunks[VAR_7];
      FUNC_1 (FUNC_2 (VAR_3 + sizeof (struct alloc_chunk *),
      VAR_4 - sizeof (struct alloc_chunk *)));
    }

  VAR_5->free_chunks[VAR_7] = VAR_6;
  if (VAR_7 > VAR_5->high_free_bin)
    VAR_5->high_free_bin = VAR_7;
  if (VAR_1 >= 3)
    FUNC_4 (VAR_0.debug_file, "Deallocating object, chunk=%p\n", (void *)VAR_6);
}
