
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ string; } ;
struct sec_merge_hash_entry {unsigned int len; TYPE_1__ root; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  struct sec_merge_hash_entry *VAR_2 = *(struct sec_merge_hash_entry **) VAR_0;
  struct sec_merge_hash_entry *VAR_3 = *(struct sec_merge_hash_entry **) VAR_1;
  unsigned int VAR_4 = VAR_2->len;
  unsigned int VAR_5 = VAR_3->len;
  const unsigned char *VAR_6 = (const unsigned char *) VAR_2->root.string + VAR_4 - 1;
  const unsigned char *VAR_7 = (const unsigned char *) VAR_3->root.string + VAR_5 - 1;
  int VAR_8 = VAR_4 < VAR_5 ? VAR_4 : VAR_5;

  while (VAR_8)
    {
      if (*VAR_6 != *VAR_7)
 return (int) *VAR_6 - (int) *VAR_7;
      VAR_6--;
      VAR_7--;
      VAR_8--;
    }
  return VAR_4 - VAR_5;
}
