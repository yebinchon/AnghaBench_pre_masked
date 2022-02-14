
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct small_page_entry {int* mark_bits; } ;
struct page_entry {scalar_t__ large_p; scalar_t__ pch_p; } ;
struct large_page_entry {int mark_p; } ;
typedef int mark_type ;
struct TYPE_2__ {char const* page; int* mark_bits; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (void const*) ;
 size_t FUNC_1 (void const*) ;
 struct page_entry* FUNC_2 (void const*) ;

int
FUNC_3 (const void *VAR_2)
{
  struct page_entry *VAR_3;
  const char *VAR_4 = VAR_2;

  VAR_3 = FUNC_2 (VAR_2);

  if (VAR_3->pch_p)
    {
      size_t VAR_5, VAR_6, VAR_7;
      VAR_7 = (VAR_4 - VAR_1.page) / VAR_0;
      VAR_5 = VAR_7 / (8 * sizeof (mark_type));
      VAR_6 = VAR_7 % (8 * sizeof (mark_type));

      return (VAR_1.mark_bits[VAR_5] & (1 << VAR_6)) != 0;
    }

  if (VAR_3->large_p)
    {
      struct large_page_entry *VAR_8
 = (struct large_page_entry *) VAR_3;

      return VAR_8->mark_p;
    }
  else
    {
      struct small_page_entry *VAR_9
 = (struct small_page_entry *) VAR_3;

      return 0 != (VAR_9->mark_bits[FUNC_1 (VAR_2)]
     & (1 << FUNC_0 (VAR_2)));
    }
}
