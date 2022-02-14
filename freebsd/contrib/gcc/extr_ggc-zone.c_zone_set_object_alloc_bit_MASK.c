
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct small_page_entry {long* alloc_bits; } ;


 unsigned int FUNC_0 (void const*) ;
 unsigned int FUNC_1 (void const*) ;
 scalar_t__ FUNC_2 (void const*) ;

__attribute__((used)) static inline void
FUNC_3 (const void *VAR_0)
{
  struct small_page_entry *VAR_1
    = (struct small_page_entry *) FUNC_2 (VAR_0);
  unsigned int VAR_2 = FUNC_1 (VAR_0);
  unsigned int VAR_3 = FUNC_0 (VAR_0);

  VAR_1->alloc_bits[VAR_2] |= 1L << VAR_3;
}
