
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int * FUNC_0 (int const*,size_t) ;

__attribute__((used)) static int FUNC_1(u8 **VAR_0, size_t *VAR_1,
        const u8 *VAR_2, size_t VAR_3)
{
 if (VAR_2) {
  *VAR_0 = FUNC_0(VAR_2, VAR_3);
  if (*VAR_0 == ((void*)0))
   return -1;
  *VAR_1 = VAR_3;
 }
 return 0;
}
