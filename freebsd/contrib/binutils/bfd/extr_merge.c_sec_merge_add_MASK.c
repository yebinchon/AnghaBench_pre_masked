
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_merge_sec_info {int dummy; } ;
struct sec_merge_hash_entry {struct sec_merge_hash_entry* next; struct sec_merge_sec_info* secinfo; } ;
struct sec_merge_hash {struct sec_merge_hash_entry* last; struct sec_merge_hash_entry* first; int size; } ;


 int VAR_0 ;
 struct sec_merge_hash_entry* FUNC_0 (struct sec_merge_hash*,char const*,unsigned int,int ) ;

__attribute__((used)) static struct sec_merge_hash_entry *
FUNC_1 (struct sec_merge_hash *VAR_1, const char *VAR_2,
        unsigned int VAR_3, struct sec_merge_sec_info *VAR_4)
{
  register struct sec_merge_hash_entry *VAR_5;

  VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_0);
  if (VAR_5 == ((void*)0))
    return ((void*)0);

  if (VAR_5->secinfo == ((void*)0))
    {
      VAR_1->size++;
      VAR_5->secinfo = VAR_4;
      if (VAR_1->first == ((void*)0))
 VAR_1->first = VAR_5;
      else
 VAR_1->last->next = VAR_5;
      VAR_1->last = VAR_5;
    }

  return VAR_5;
}
