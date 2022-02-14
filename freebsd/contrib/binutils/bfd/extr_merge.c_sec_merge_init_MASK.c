
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_merge_hash_entry {int dummy; } ;
struct sec_merge_hash {unsigned int entsize; int strings; int * last; int * first; scalar_t__ size; int table; } ;
typedef int bfd_boolean ;


 int FUNC_0 (int *,int ,int,int) ;
 struct sec_merge_hash* FUNC_1 (int) ;
 int FUNC_2 (struct sec_merge_hash*) ;
 int VAR_0 ;

__attribute__((used)) static struct sec_merge_hash *
FUNC_3 (unsigned int VAR_1, bfd_boolean VAR_2)
{
  struct sec_merge_hash *VAR_3;

  VAR_3 = FUNC_1 (sizeof (struct sec_merge_hash));
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  if (! FUNC_0 (&VAR_3->table, VAR_0,
          sizeof (struct sec_merge_hash_entry), 16699))
    {
      FUNC_2 (VAR_3);
      return ((void*)0);
    }

  VAR_3->size = 0;
  VAR_3->first = ((void*)0);
  VAR_3->last = ((void*)0);
  VAR_3->entsize = VAR_1;
  VAR_3->strings = VAR_2;

  return VAR_3;
}
