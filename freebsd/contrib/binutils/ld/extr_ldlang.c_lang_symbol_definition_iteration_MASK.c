
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lang_definedness_hash_entry {int iteration; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int ) ;
 int VAR_1 ;

int
FUNC_2 (const char *VAR_2)
{
  struct lang_definedness_hash_entry *VAR_3
    = (struct lang_definedness_hash_entry *)
    FUNC_1 (&VAR_1, VAR_2, VAR_0, VAR_0);




  if (VAR_3 == ((void*)0))
    FUNC_0 ();

  return VAR_3->iteration;
}
