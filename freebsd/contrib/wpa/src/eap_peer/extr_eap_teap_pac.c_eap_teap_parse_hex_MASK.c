
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (char const*,int *,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static u8 * FUNC_4(const char *VAR_0, size_t *VAR_1)
{
 int VAR_2;
 u8 *VAR_3;

 if (!VAR_0)
  return ((void*)0);
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 & 1)
  return ((void*)0);
 *VAR_1 = VAR_2 / 2;
 VAR_3 = FUNC_2(*VAR_1);
 if (!VAR_3)
  return ((void*)0);
 if (FUNC_0(VAR_0, VAR_3, *VAR_1)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
