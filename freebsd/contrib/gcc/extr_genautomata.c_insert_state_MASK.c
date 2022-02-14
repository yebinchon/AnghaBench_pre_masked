
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ state_t ;


 void** FUNC_0 (int ,void*,int) ;
 int VAR_0 ;

__attribute__((used)) static state_t
FUNC_1 (state_t VAR_1)
{
  void **VAR_2;

  VAR_2 = FUNC_0 (VAR_0, (void *) VAR_1, 1);
  if (*VAR_2 == ((void*)0))
    *VAR_2 = (void *) VAR_1;
  return (state_t) *VAR_2;
}
