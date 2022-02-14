
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(u8 **VAR_0, size_t *VAR_1,
    const u8 *VAR_2, size_t VAR_3)
{
 if (VAR_2 == ((void*)0))
  return -1;

 FUNC_0(*VAR_0);
 *VAR_0 = FUNC_1(VAR_3);
 if (*VAR_0) {
  FUNC_2(*VAR_0, VAR_2, VAR_3);
  *VAR_1 = VAR_3;
  return 0;
 } else {
  *VAR_1 = 0;
  return -1;
 }
}
