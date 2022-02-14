
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long hash; char const* string; struct bfd_hash_entry* next; } ;
struct sec_merge_hash_entry {unsigned int len; unsigned int alignment; TYPE_1__ root; } ;
struct TYPE_4__ {unsigned long size; struct bfd_hash_entry** table; } ;
struct sec_merge_hash {int entsize; TYPE_2__ table; scalar_t__ strings; } ;
struct bfd_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ FUNC_0 (char const*,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,char const*) ;

__attribute__((used)) static struct sec_merge_hash_entry *
FUNC_2 (struct sec_merge_hash *VAR_0, const char *VAR_1,
         unsigned int VAR_2, bfd_boolean VAR_3)
{
  register const unsigned char *VAR_4;
  register unsigned long VAR_5;
  register unsigned int VAR_6;
  struct sec_merge_hash_entry *VAR_7;
  unsigned int VAR_8, VAR_9;
  unsigned int VAR_10;

  VAR_5 = 0;
  VAR_8 = 0;
  VAR_4 = (const unsigned char *) VAR_1;
  if (VAR_0->strings)
    {
      if (VAR_0->entsize == 1)
 {
   while ((VAR_6 = *VAR_4++) != '\0')
     {
       VAR_5 += VAR_6 + (VAR_6 << 17);
       VAR_5 ^= VAR_5 >> 2;
       ++VAR_8;
     }
   VAR_5 += VAR_8 + (VAR_8 << 17);
 }
      else
 {
   for (;;)
     {
       for (VAR_9 = 0; VAR_9 < VAR_0->entsize; ++VAR_9)
  if (VAR_4[VAR_9] != '\0')
    break;
       if (VAR_9 == VAR_0->entsize)
  break;
       for (VAR_9 = 0; VAR_9 < VAR_0->entsize; ++VAR_9)
  {
    VAR_6 = *VAR_4++;
    VAR_5 += VAR_6 + (VAR_6 << 17);
    VAR_5 ^= VAR_5 >> 2;
  }
       ++VAR_8;
     }
   VAR_5 += VAR_8 + (VAR_8 << 17);
   VAR_8 *= VAR_0->entsize;
 }
      VAR_5 ^= VAR_5 >> 2;
      VAR_8 += VAR_0->entsize;
    }
  else
    {
      for (VAR_9 = 0; VAR_9 < VAR_0->entsize; ++VAR_9)
 {
   VAR_6 = *VAR_4++;
   VAR_5 += VAR_6 + (VAR_6 << 17);
   VAR_5 ^= VAR_5 >> 2;
 }
      VAR_8 = VAR_0->entsize;
    }

  VAR_10 = VAR_5 % VAR_0->table.size;
  for (VAR_7 = (struct sec_merge_hash_entry *) VAR_0->table.table[VAR_10];
       VAR_7 != ((void*)0);
       VAR_7 = (struct sec_merge_hash_entry *) VAR_7->root.next)
    {
      if (VAR_7->root.hash == VAR_5
   && VAR_8 == VAR_7->len
   && FUNC_0 (VAR_7->root.string, VAR_1, VAR_8) == 0)
 {


   if (VAR_7->alignment < VAR_2)
     {
       if (VAR_3)
  {

    VAR_7->len = 0;
    VAR_7->alignment = 0;
  }
       break;
     }
   return VAR_7;
 }
    }

  if (! VAR_3)
    return ((void*)0);

  VAR_7 = ((struct sec_merge_hash_entry *)
    FUNC_1 (((void*)0), &VAR_0->table, VAR_1));
  if (VAR_7 == ((void*)0))
    return ((void*)0);
  VAR_7->root.string = VAR_1;
  VAR_7->root.hash = VAR_5;
  VAR_7->len = VAR_8;
  VAR_7->alignment = VAR_2;
  VAR_7->root.next = VAR_0->table.table[VAR_10];
  VAR_0->table.table[VAR_10] = (struct bfd_hash_entry *) VAR_7;

  return VAR_7;
}
