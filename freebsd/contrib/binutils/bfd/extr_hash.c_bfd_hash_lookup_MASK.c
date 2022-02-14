
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc {int dummy; } ;
struct bfd_hash_table {unsigned long size; int count; int frozen; struct bfd_hash_entry** table; scalar_t__ memory; struct bfd_hash_entry* (* newfunc ) (int *,struct bfd_hash_table*,char const*) ;} ;
struct bfd_hash_entry {unsigned long hash; char const* string; struct bfd_hash_entry* next; } ;
typedef scalar_t__ bfd_boolean ;
typedef int PTR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned long) ;
 char* FUNC_4 (struct objalloc*,unsigned long) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 struct bfd_hash_entry* FUNC_6 (int *,struct bfd_hash_table*,char const*) ;

struct bfd_hash_entry *
FUNC_7 (struct bfd_hash_table *VAR_1,
   const char *VAR_2,
   bfd_boolean VAR_3,
   bfd_boolean VAR_4)
{
  const unsigned char *VAR_5;
  unsigned long VAR_6;
  unsigned int VAR_7;
  struct bfd_hash_entry *VAR_8;
  unsigned int VAR_9;
  unsigned int VAR_10;

  VAR_6 = 0;
  VAR_9 = 0;
  VAR_5 = (const unsigned char *) VAR_2;
  while ((VAR_7 = *VAR_5++) != '\0')
    {
      VAR_6 += VAR_7 + (VAR_7 << 17);
      VAR_6 ^= VAR_6 >> 2;
    }
  VAR_9 = (VAR_5 - (const unsigned char *) VAR_2) - 1;
  VAR_6 += VAR_9 + (VAR_9 << 17);
  VAR_6 ^= VAR_6 >> 2;

  VAR_10 = VAR_6 % VAR_1->size;
  for (VAR_8 = VAR_1->table[VAR_10];
       VAR_8 != ((void*)0);
       VAR_8 = VAR_8->next)
    {
      if (VAR_8->hash == VAR_6
   && FUNC_5 (VAR_8->string, VAR_2) == 0)
 return VAR_8;
    }

  if (! VAR_3)
    return ((void*)0);

  VAR_8 = (*VAR_1->newfunc) (((void*)0), VAR_1, VAR_2);
  if (VAR_8 == ((void*)0))
    return ((void*)0);
  if (VAR_4)
    {
      char *VAR_11;

      VAR_11 = FUNC_4 ((struct objalloc *) VAR_1->memory, VAR_9 + 1);
      if (!VAR_11)
 {
   FUNC_0 (VAR_0);
   return ((void*)0);
 }
      FUNC_2 (VAR_11, VAR_2, VAR_9 + 1);
      VAR_2 = VAR_11;
    }
  VAR_8->string = VAR_2;
  VAR_8->hash = VAR_6;
  VAR_8->next = VAR_1->table[VAR_10];
  VAR_1->table[VAR_10] = VAR_8;
  VAR_1->count++;

  if (!VAR_1->frozen && VAR_1->count > VAR_1->size * 3 / 4)
    {
      unsigned long VAR_12 = FUNC_1 (VAR_1->size);
      struct bfd_hash_entry **VAR_13;
      unsigned int VAR_14;
      unsigned long VAR_15 = VAR_12 * sizeof (struct bfd_hash_entry *);



      if (VAR_12 == 0 || VAR_15 / sizeof (struct bfd_hash_entry *) != VAR_12)
 {
   VAR_1->frozen = 1;
   return VAR_8;
 }

      VAR_13 = ((struct bfd_hash_entry **)
    FUNC_4 ((struct objalloc *) VAR_1->memory, VAR_15));
      FUNC_3 ((PTR) VAR_13, 0, VAR_15);

      for (VAR_14 = 0; VAR_14 < VAR_1->size; VAR_14 ++)
 while (VAR_1->table[VAR_14])
   {
     struct bfd_hash_entry *VAR_16 = VAR_1->table[VAR_14];
     struct bfd_hash_entry *VAR_17 = VAR_16;
     int VAR_18;

     while (VAR_17->next && VAR_17->next->hash == VAR_16->hash)
       VAR_17 = VAR_17->next;

     VAR_1->table[VAR_14] = VAR_17->next;
     VAR_18 = VAR_16->hash % VAR_12;
     VAR_17->next = VAR_13[VAR_18];
     VAR_13[VAR_18] = VAR_16;
   }
      VAR_1->table = VAR_13;
      VAR_1->size = VAR_12;
    }

  return VAR_8;
}
