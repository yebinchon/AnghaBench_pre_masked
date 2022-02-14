
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int * data; } ;
struct hash_control {int dummy; } ;
typedef int * PTR ;


 struct hash_entry* FUNC_0 (struct hash_control*,char const*,int ,int *,int *) ;
 int FUNC_1 (char const*) ;

PTR
FUNC_2 (struct hash_control *VAR_0, const char *VAR_1)
{
  struct hash_entry *VAR_2;

  VAR_2 = FUNC_0 (VAR_0, VAR_1, FUNC_1 (VAR_1), ((void*)0), ((void*)0));
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  return VAR_2->data;
}
