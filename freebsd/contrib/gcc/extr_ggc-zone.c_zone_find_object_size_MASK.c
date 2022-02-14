
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* page; } ;
struct small_page_entry {int alloc_bits; TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char const*) ;
 unsigned int FUNC_1 (char const*) ;
 size_t FUNC_2 (int ,unsigned int,unsigned int,size_t) ;

__attribute__((used)) static inline size_t
FUNC_3 (struct small_page_entry *VAR_2,
         const void *VAR_3)
{
  const char *VAR_4 = (const char *) VAR_3 + VAR_0;
  unsigned int VAR_5 = FUNC_1 (VAR_4);
  unsigned int VAR_6 = FUNC_0 (VAR_4);
  size_t VAR_7 = (VAR_2->common.page + VAR_1
       - (char *) VAR_3);

  return FUNC_2 (VAR_2->alloc_bits, VAR_5, VAR_6,
        VAR_7);
}
