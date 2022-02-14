
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*,void*,size_t) ;
 scalar_t__ FUNC_2 (void*,size_t*,void*,size_t,int) ;

size_t
FUNC_3(void *VAR_1, void *VAR_2, size_t VAR_3, size_t VAR_4, int VAR_5)
{
 size_t VAR_6 = VAR_4;

 FUNC_0(VAR_4 <= VAR_3);

 if (FUNC_2(VAR_2, &VAR_6, VAR_1, VAR_3, VAR_5) != VAR_0) {
  if (VAR_4 != VAR_3)
   return (VAR_3);

  FUNC_1(VAR_1, VAR_2, VAR_3);
  return (VAR_3);
 }

 return (VAR_6);
}
