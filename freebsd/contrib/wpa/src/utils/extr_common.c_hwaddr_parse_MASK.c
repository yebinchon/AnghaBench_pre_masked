
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static const char * FUNC_1(const char *VAR_1, u8 *VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   return ((void*)0);
  VAR_1 += 2;
  VAR_2[VAR_3] = VAR_4;
  if (VAR_3 < VAR_0 - 1 && *VAR_1++ != ':')
   return ((void*)0);
 }
 return VAR_1;
}
