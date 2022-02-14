
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct repl_map_d {int * set; int name; } ;
typedef int * bitmap ;


 int VAR_0 ;
 void** FUNC_0 (int ,void*,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline bitmap
FUNC_1 (tree VAR_2)
{
  struct repl_map_d VAR_3;
  void **VAR_4;

  VAR_3.name = VAR_2;
  VAR_4 = FUNC_0 (VAR_1, (void *) &VAR_3, VAR_0);


  if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0))
    return ((void*)0);

  return ((struct repl_map_d *) *VAR_4)->set;
}
