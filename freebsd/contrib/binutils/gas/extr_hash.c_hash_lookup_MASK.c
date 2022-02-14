
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {unsigned long hash; char* string; struct hash_entry* next; } ;
struct hash_control {unsigned long size; int string_compares; int hash_compares; struct hash_entry** table; int lookups; } ;


 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static struct hash_entry *
FUNC_1 (struct hash_control *VAR_0, const char *VAR_1, size_t VAR_2,
      struct hash_entry ***VAR_3, unsigned long *VAR_4)
{
  unsigned long VAR_5;
  size_t VAR_6;
  unsigned int VAR_7;
  unsigned int VAR_8;
  struct hash_entry **VAR_9;
  struct hash_entry *VAR_10;
  struct hash_entry *VAR_11;





  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_7 = VAR_1[VAR_6];
      VAR_5 += VAR_7 + (VAR_7 << 17);
      VAR_5 ^= VAR_5 >> 2;
    }
  VAR_5 += VAR_2 + (VAR_2 << 17);
  VAR_5 ^= VAR_5 >> 2;

  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_5;

  VAR_8 = VAR_5 % VAR_0->size;
  VAR_9 = VAR_0->table + VAR_8;

  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_9;

  VAR_11 = ((void*)0);
  for (VAR_10 = *VAR_9; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {




      if (VAR_10->hash == VAR_5)
 {




   if (FUNC_0 (VAR_10->string, VAR_1, VAR_2) == 0 && VAR_10->string[VAR_2] == '\0')
     {
       if (VAR_11 != ((void*)0))
  {
    VAR_11->next = VAR_10->next;
    VAR_10->next = *VAR_9;
    *VAR_9 = VAR_10;
  }

       return VAR_10;
     }
 }

      VAR_11 = VAR_10;
    }

  return ((void*)0);
}
