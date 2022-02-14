
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * automata_list_el_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 void** FUNC_1 (int ,void*,int) ;

__attribute__((used)) static automata_list_el_t
FUNC_2 (void)
{
  void **VAR_2;

  if (VAR_1 == ((void*)0))
    return ((void*)0);
  VAR_2 = FUNC_1 (VAR_0,
         (void *) VAR_1, 1);
  if (*VAR_2 == ((void*)0))
    *VAR_2 = (void *) VAR_1;
  else
    FUNC_0 (VAR_1);
  VAR_1 = ((void*)0);
  return (automata_list_el_t) *VAR_2;
}
