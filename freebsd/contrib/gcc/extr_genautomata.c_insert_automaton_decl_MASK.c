
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ decl_t ;


 int VAR_0 ;
 void** FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static decl_t
FUNC_1 (decl_t VAR_1)
{
  void **VAR_2;

  VAR_2 = FUNC_0 (VAR_0, VAR_1, 1);
  if (*VAR_2 == ((void*)0))
    *VAR_2 = (void *) VAR_1;
  return (decl_t) *VAR_2;
}
