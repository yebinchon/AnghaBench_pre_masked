
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct small_page_entry {int dummy; } ;
struct page_entry {scalar_t__ large_p; scalar_t__ pch_p; } ;
struct large_page_entry {size_t bytes; } ;
typedef int alloc_type ;
struct TYPE_2__ {char const* page; int bytes; int alloc_bits; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_0 (struct small_page_entry*,void const*) ;
 struct page_entry* FUNC_1 (void const*) ;
 size_t FUNC_2 (int ,size_t,size_t,size_t) ;

size_t
FUNC_3 (const void *VAR_2)
{
  struct page_entry *VAR_3;
  const char *VAR_4 = (const char *) VAR_2;

  VAR_3 = FUNC_1 (VAR_2);

  if (VAR_3->pch_p)
    {
      size_t VAR_5, VAR_6, VAR_7, VAR_8;
      VAR_7 = (VAR_4 - VAR_1.page) / VAR_0 + 1;
      VAR_5 = VAR_7 / (8 * sizeof (alloc_type));
      VAR_6 = VAR_7 % (8 * sizeof (alloc_type));
      VAR_8 = VAR_1.bytes - (VAR_4 - VAR_1.page);
      return FUNC_2 (VAR_1.alloc_bits, VAR_5, VAR_6,
     VAR_8);
    }

  if (VAR_3->large_p)
    return ((struct large_page_entry *)VAR_3)->bytes;
  else
    return FUNC_0 ((struct small_page_entry *) VAR_3, VAR_2);
}
