
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc {int dummy; } ;
struct bfd_hash_table {unsigned int size; unsigned int entsize; struct bfd_hash_entry* (* newfunc ) (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;scalar_t__ frozen; scalar_t__ count; int * table; int * memory; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,unsigned int) ;
 int * FUNC_2 (struct objalloc*,unsigned int) ;
 scalar_t__ FUNC_3 () ;

bfd_boolean
FUNC_4 (struct bfd_hash_table *VAR_3,
         struct bfd_hash_entry *(*VAR_4) (struct bfd_hash_entry *,
         struct bfd_hash_table *,
         const char *),
         unsigned int VAR_5,
         unsigned int VAR_6)
{
  unsigned int VAR_7;

  VAR_7 = VAR_6 * sizeof (struct bfd_hash_entry *);

  VAR_3->memory = (void *) FUNC_3 ();
  if (VAR_3->memory == ((void*)0))
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }
  VAR_3->table = FUNC_2 ((struct objalloc *) VAR_3->memory, VAR_7);
  if (VAR_3->table == ((void*)0))
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }
  FUNC_1 ((void *) VAR_3->table, 0, VAR_7);
  VAR_3->size = VAR_6;
  VAR_3->entsize = VAR_5;
  VAR_3->count = 0;
  VAR_3->frozen = 0;
  VAR_3->newfunc = VAR_4;
  return VAR_1;
}
