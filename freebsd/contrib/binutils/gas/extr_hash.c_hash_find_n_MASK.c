
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int * data; } ;
struct hash_control {int dummy; } ;
typedef int * PTR ;


 struct hash_entry* FUNC_0 (struct hash_control*,char const*,size_t,int *,int *) ;

PTR
FUNC_1 (struct hash_control *VAR_0, const char *VAR_1, size_t VAR_2)
{
  struct hash_entry *VAR_3;

  VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2, ((void*)0), ((void*)0));
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  return VAR_3->data;
}
