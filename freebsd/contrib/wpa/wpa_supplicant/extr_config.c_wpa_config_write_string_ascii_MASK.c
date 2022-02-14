
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,int const*,size_t) ;

__attribute__((used)) static char * FUNC_2(const u8 *VAR_0, size_t VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_1 + 3);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2[0] = '"';
 FUNC_1(VAR_2 + 1, VAR_0, VAR_1);
 VAR_2[VAR_1 + 1] = '"';
 VAR_2[VAR_1 + 2] = '\0';

 return VAR_2;
}
