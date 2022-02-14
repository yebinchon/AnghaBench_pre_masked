
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_hash_entry {int index; struct string_hash_entry* next; } ;
struct stab_write_handle {int strings_size; int symbols_size; int symbols_alloc; int * symbols; int abfd; struct string_hash_entry* last_string; struct string_hash_entry* strings; int strhash; } ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,int ) ;
 struct string_hash_entry* FUNC_8 (int *,char const*,int ,int ) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int *,int) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (struct stab_write_handle *VAR_3, int VAR_4, int VAR_5,
     bfd_vma VAR_6, const char *VAR_7)
{
  bfd_size_type VAR_8;
  bfd_byte VAR_9[VAR_1];

  if (VAR_7 == ((void*)0))
    VAR_8 = 0;
  else
    {
      struct string_hash_entry *VAR_10;

      VAR_10 = FUNC_8 (&VAR_3->strhash, VAR_7, VAR_2, VAR_2);
      if (VAR_10 == ((void*)0))
 {
   FUNC_7 (FUNC_0("string_hash_lookup failed: %s"),
       FUNC_1 (FUNC_2 ()));
   return VAR_0;
 }
      if (VAR_10->index != -1)
 VAR_8 = VAR_10->index;
      else
 {
   VAR_8 = VAR_3->strings_size;
   VAR_10->index = VAR_8;
   if (VAR_3->last_string == ((void*)0))
     VAR_3->strings = VAR_10;
   else
     VAR_3->last_string->next = VAR_10;
   VAR_3->last_string = VAR_10;
   VAR_3->strings_size += FUNC_9 (VAR_7) + 1;
 }
    }


  FUNC_4 (VAR_3->abfd, VAR_8, VAR_9);
  FUNC_5 (VAR_3->abfd, VAR_4, VAR_9 + 4);
  FUNC_5 (VAR_3->abfd, 0, VAR_9 + 5);
  FUNC_3 (VAR_3->abfd, VAR_5, VAR_9 + 6);
  FUNC_4 (VAR_3->abfd, VAR_6, VAR_9 + 8);

  if (VAR_3->symbols_size + VAR_1 > VAR_3->symbols_alloc)
    {
      VAR_3->symbols_alloc *= 2;
      VAR_3->symbols = (bfd_byte *) FUNC_10 (VAR_3->symbols,
          VAR_3->symbols_alloc);
    }

  FUNC_6 (VAR_3->symbols + VAR_3->symbols_size, VAR_9, VAR_1);

  VAR_3->symbols_size += VAR_1;

  return VAR_2;
}
