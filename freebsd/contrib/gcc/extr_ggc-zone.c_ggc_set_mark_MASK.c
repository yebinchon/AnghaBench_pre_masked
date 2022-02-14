
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct small_page_entry {int* mark_bits; } ;
struct page_entry {scalar_t__ large_p; scalar_t__ pch_p; } ;
struct large_page_entry {int mark_p; } ;
typedef int mark_type ;
struct TYPE_4__ {int debug_file; } ;
struct TYPE_3__ {char const* page; int* mark_bits; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,void const*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (void const*) ;
 size_t FUNC_2 (void const*) ;
 struct page_entry* FUNC_3 (void const*) ;

int
FUNC_4 (const void *VAR_4)
{
  struct page_entry *VAR_5;
  const char *VAR_6 = (const char *) VAR_4;

  VAR_5 = FUNC_3 (VAR_4);

  if (VAR_5->pch_p)
    {
      size_t VAR_7, VAR_8, VAR_9;
      VAR_9 = (VAR_6 - VAR_3.page) / VAR_0;
      VAR_7 = VAR_9 / (8 * sizeof (mark_type));
      VAR_8 = VAR_9 % (8 * sizeof (mark_type));

      if (VAR_3.mark_bits[VAR_7] & (1 << VAR_8))
 return 1;
      VAR_3.mark_bits[VAR_7] |= (1 << VAR_8);
    }
  else if (VAR_5->large_p)
    {
      struct large_page_entry *VAR_10
 = (struct large_page_entry *) VAR_5;

      if (VAR_10->mark_p)
 return 1;
      VAR_10->mark_p = 1;
    }
  else
    {
      struct small_page_entry *VAR_11
 = (struct small_page_entry *) VAR_5;

      if (VAR_11->mark_bits[FUNC_2 (VAR_4)]
   & (1 << FUNC_1 (VAR_4)))
 return 1;
      VAR_11->mark_bits[FUNC_2 (VAR_4)]
 |= (1 << FUNC_1 (VAR_4));
    }

  if (VAR_2 >= 4)
    FUNC_0 (VAR_1.debug_file, "Marking %p\n", VAR_4);

  return 0;
}
