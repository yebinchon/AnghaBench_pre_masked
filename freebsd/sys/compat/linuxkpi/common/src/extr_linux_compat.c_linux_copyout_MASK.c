
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void const*,void*,size_t) ;
 scalar_t__ FUNC_1 (void**,size_t) ;
 int FUNC_2 (void*,void const*,size_t) ;

int
FUNC_3(const void *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (FUNC_1(&VAR_2, VAR_3)) {
  if (VAR_2 == ((void*)0))
   return (-VAR_0);
  FUNC_2(VAR_2, VAR_1, VAR_3);
  return (0);
 }
 return (-FUNC_0(VAR_1, VAR_2, VAR_3));
}
