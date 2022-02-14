
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int * data; struct hash_entry* next; } ;
struct hash_control {int deletions; } ;
typedef int * PTR ;


 int FUNC_0 () ;
 struct hash_entry* FUNC_1 (struct hash_control*,char const*,int ,struct hash_entry***,int *) ;
 int FUNC_2 (char const*) ;

PTR
FUNC_3 (struct hash_control *VAR_0, const char *VAR_1)
{
  struct hash_entry *VAR_2;
  struct hash_entry **VAR_3;

  VAR_2 = FUNC_1 (VAR_0, VAR_1, FUNC_2 (VAR_1), &VAR_3, ((void*)0));
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (VAR_2 != *VAR_3)
    FUNC_0 ();





  *VAR_3 = VAR_2->next;





  return VAR_2->data;
}
