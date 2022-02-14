
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int string; } ;
struct string_hash_entry {TYPE_3__ root; struct string_hash_entry* next; } ;
struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int table; } ;
struct stab_write_handle {int symbols_size; int symbols_alloc; int strings_size; int type_index; int so_offset; int fun_offset; scalar_t__ pending_lbrac; struct string_hash_entry* strings; int * symbols; scalar_t__ last_text_address; scalar_t__ fnaddr; scalar_t__ nesting; int type_cache; int * type_stack; TYPE_2__ typedef_hash; TYPE_1__ strhash; int * last_string; int * abfd; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 char const* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (void*,int *,void*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (char*,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct stab_write_handle*,int ,int ,scalar_t__,char const*) ;
 int FUNC_10 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;

bfd_boolean
FUNC_13 (bfd *VAR_5, void *VAR_6,
     bfd_byte **VAR_7,
     bfd_size_type *VAR_8,
     bfd_byte **VAR_9,
     bfd_size_type *VAR_10)
{
  struct stab_write_handle VAR_11;
  struct string_hash_entry *VAR_12;
  bfd_byte *VAR_13;

  VAR_11.abfd = VAR_5;

  VAR_11.symbols_size = 0;
  VAR_11.symbols_alloc = 500;
  VAR_11.symbols = (bfd_byte *) FUNC_12 (VAR_11.symbols_alloc);

  VAR_11.strings = ((void*)0);
  VAR_11.last_string = ((void*)0);

  VAR_11.strings_size = 1;

  if (!FUNC_4 (&VAR_11.strhash.table, VAR_4,
       sizeof (struct string_hash_entry))
      || !FUNC_4 (&VAR_11.typedef_hash.table, VAR_4,
          sizeof (struct string_hash_entry)))
    {
      FUNC_8 ("bfd_hash_table_init_failed: %s",
   FUNC_1 (FUNC_2 ()));
      return VAR_0;
    }

  VAR_11.type_stack = ((void*)0);
  VAR_11.type_index = 1;
  FUNC_7 (&VAR_11.type_cache, 0, sizeof VAR_11.type_cache);
  VAR_11.so_offset = -1;
  VAR_11.fun_offset = -1;
  VAR_11.last_text_address = 0;
  VAR_11.nesting = 0;
  VAR_11.fnaddr = 0;
  VAR_11.pending_lbrac = (bfd_vma) -1;


  if (! FUNC_9 (&VAR_11, 0, 0, 0, (const char *) ((void*)0)))
    return VAR_0;


  VAR_11.so_offset = VAR_11.symbols_size;
  if (! FUNC_9 (&VAR_11, VAR_1, 0, 0, FUNC_3 (VAR_5)))
    return VAR_0;

  if (! FUNC_6 (VAR_6, &VAR_3, (void *) &VAR_11))
    return VAR_0;

  FUNC_0 (VAR_11.pending_lbrac == (bfd_vma) -1);


  if (! FUNC_9 (&VAR_11, VAR_1, 0, VAR_11.last_text_address,
      (const char *) ((void*)0)))
    return VAR_0;


  FUNC_5 (VAR_5, VAR_11.strings_size, VAR_11.symbols + 8);

  *VAR_7 = VAR_11.symbols;
  *VAR_8 = VAR_11.symbols_size;

  *VAR_10 = VAR_11.strings_size;
  *VAR_9 = (bfd_byte *) FUNC_12 (VAR_11.strings_size);

  VAR_13 = *VAR_9;
  *VAR_13++ = '\0';
  for (VAR_12 = VAR_11.strings; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
    {
      FUNC_10 ((char *) VAR_13, VAR_12->root.string);
      VAR_13 += FUNC_11 ((char *) VAR_13) + 1;
    }

  return VAR_2;
}
