
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_merge_sec_info {unsigned char* contents; int ** psecinfo; struct sec_merge_sec_info* next; TYPE_1__* sec; } ;
struct sec_merge_info {struct sec_merge_sec_info* chain; int htab; } ;
struct sec_merge_hash_entry {int len; } ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {unsigned int alignment_power; int size; int flags; int entsize; } ;
typedef TYPE_1__ asection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sec_merge_hash_entry* FUNC_0 (int ,char*,int,struct sec_merge_sec_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct sec_merge_info *VAR_3,
  struct sec_merge_sec_info *VAR_4)
{
  asection *VAR_5 = VAR_4->sec;
  struct sec_merge_hash_entry *VAR_6;
  bfd_boolean VAR_7;
  unsigned char *VAR_8, *VAR_9;
  bfd_vma VAR_10, VAR_11;
  unsigned int VAR_12, VAR_13;

  VAR_12 = VAR_5->alignment_power;
  VAR_9 = VAR_4->contents + VAR_5->size;
  VAR_7 = VAR_0;
  VAR_10 = ((bfd_vma) 1 << VAR_12) - 1;
  if (VAR_5->flags & VAR_1)
    {
      for (VAR_8 = VAR_4->contents; VAR_8 < VAR_9; )
 {
   VAR_11 = VAR_8 - VAR_4->contents;
   VAR_11 = ((VAR_11 ^ (VAR_11 - 1)) + 1) >> 1;
   if (!VAR_11 || VAR_11 > VAR_10)
     VAR_11 = VAR_10 + 1;
   VAR_6 = FUNC_0 (VAR_3->htab, (char *) VAR_8, (unsigned) VAR_11,
     VAR_4);
   if (! VAR_6)
     goto error_return;
   VAR_8 += VAR_6->len;
   if (VAR_5->entsize == 1)
     {
       while (VAR_8 < VAR_9 && *VAR_8 == 0)
  {
    if (!VAR_7 && !((VAR_8 - VAR_4->contents) & VAR_10))
      {
        VAR_7 = VAR_2;
        VAR_6 = FUNC_0 (VAR_3->htab, "",
          (unsigned) VAR_10 + 1, VAR_4);
        if (! VAR_6)
   goto error_return;
      }
    VAR_8++;
  }
     }
   else
     {
       while (VAR_8 < VAR_9)
  {
    for (VAR_13 = 0; VAR_13 < VAR_5->entsize; VAR_13++)
      if (VAR_8[VAR_13] != '\0')
        break;
    if (VAR_13 != VAR_5->entsize)
      break;
    if (!VAR_7 && !((VAR_8 - VAR_4->contents) & VAR_10))
      {
        VAR_7 = VAR_2;
        VAR_6 = FUNC_0 (VAR_3->htab, (char *) VAR_8,
          (unsigned) VAR_10 + 1, VAR_4);
        if (! VAR_6)
   goto error_return;
      }
    VAR_8 += VAR_5->entsize;
  }
     }
 }
    }
  else
    {
      for (VAR_8 = VAR_4->contents; VAR_8 < VAR_9; VAR_8 += VAR_5->entsize)
 {
   VAR_6 = FUNC_0 (VAR_3->htab, (char *) VAR_8, 1, VAR_4);
   if (! VAR_6)
     goto error_return;
 }
    }

  return VAR_2;

error_return:
  for (VAR_4 = VAR_3->chain; VAR_4; VAR_4 = VAR_4->next)
    *VAR_4->psecinfo = ((void*)0);
  return VAR_0;
}
