
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {char const* string; unsigned long hash; struct hash_entry* next; int data; } ;
struct hash_control {int memory; int insertions; } ;
typedef int PTR ;


 struct hash_entry* FUNC_0 (struct hash_control*,char const*,int ,struct hash_entry***,unsigned long*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (char const*) ;

const char *
FUNC_3 (struct hash_control *VAR_0, const char *VAR_1, PTR VAR_2)
{
  struct hash_entry *VAR_3;
  struct hash_entry **VAR_4;
  unsigned long VAR_5;

  VAR_3 = FUNC_0 (VAR_0, VAR_1, FUNC_2 (VAR_1), &VAR_4, &VAR_5);
  if (VAR_3 != ((void*)0))
    return "exists";





  VAR_3 = (struct hash_entry *) FUNC_1 (&VAR_0->memory, sizeof (*VAR_3));
  VAR_3->string = VAR_1;
  VAR_3->hash = VAR_5;
  VAR_3->data = VAR_2;

  VAR_3->next = *VAR_4;
  *VAR_4 = VAR_3;

  return ((void*)0);
}
