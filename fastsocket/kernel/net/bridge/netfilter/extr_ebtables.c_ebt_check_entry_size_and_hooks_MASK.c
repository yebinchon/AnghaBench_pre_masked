
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebt_table_info {scalar_t__* hook_entry; } ;
struct ebt_entry_target {int dummy; } ;
struct ebt_entry {int watchers_offset; int target_offset; int next_offset; int bitmask; } ;
struct ebt_entries {scalar_t__ policy; unsigned int counter_offset; unsigned int nentries; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int
FUNC_1(struct ebt_entry *VAR_5,
   struct ebt_table_info *VAR_6,
   unsigned int *VAR_7, unsigned int *VAR_8,
   unsigned int *VAR_9, unsigned int *VAR_10)
{
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if ((void *)VAR_5 == (void *)VAR_6->hook_entry[VAR_11])
   break;
 }


 if (VAR_11 != VAR_4 || !VAR_5->bitmask) {


  if (*VAR_7 != *VAR_8) {
   FUNC_0("nentries does not equal the nr of entries "
     "in the chain\n");
   return -VAR_3;
  }
  if (((struct ebt_entries *)VAR_5)->policy != VAR_1 &&
     ((struct ebt_entries *)VAR_5)->policy != VAR_0) {

   if (VAR_11 != VAR_4 ||
      ((struct ebt_entries *)VAR_5)->policy != VAR_2) {
    FUNC_0("bad policy\n");
    return -VAR_3;
   }
  }
  if (VAR_11 == VAR_4)
   (*VAR_10)++;
  if (((struct ebt_entries *)VAR_5)->counter_offset != *VAR_9) {
   FUNC_0("counter_offset != totalcnt");
   return -VAR_3;
  }
  *VAR_7 = ((struct ebt_entries *)VAR_5)->nentries;
  *VAR_8 = 0;
  return 0;
 }

 if (sizeof(struct ebt_entry) > VAR_5->watchers_offset ||
    VAR_5->watchers_offset > VAR_5->target_offset ||
    VAR_5->target_offset >= VAR_5->next_offset) {
  FUNC_0("entry offsets not in right order\n");
  return -VAR_3;
 }

 if (VAR_5->next_offset - VAR_5->target_offset < sizeof(struct ebt_entry_target)) {
  FUNC_0("target size too small\n");
  return -VAR_3;
 }
 (*VAR_8)++;
 (*VAR_9)++;
 return 0;
}
