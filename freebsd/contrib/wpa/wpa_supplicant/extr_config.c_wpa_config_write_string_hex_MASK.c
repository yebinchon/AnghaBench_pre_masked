
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,int const*,size_t) ;

__attribute__((used)) static char * FUNC_2(const u8 *VAR_0, size_t VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(2 * VAR_1 + 1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_2, 2 * VAR_1 + 1, VAR_0, VAR_1);

 return VAR_2;
}
