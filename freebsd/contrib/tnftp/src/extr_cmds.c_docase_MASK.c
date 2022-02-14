
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char FUNC_2 (unsigned char) ;

__attribute__((used)) static const char *
FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 int VAR_4 = 1;

 for (VAR_3 = 0; VAR_2[VAR_3] != '\0' && VAR_3 < VAR_1 - 1; VAR_3++) {
  VAR_0[VAR_3] = VAR_2[VAR_3];
  if (FUNC_0((unsigned char)VAR_0[VAR_3]))
   VAR_4 = 0;
 }
 VAR_0[VAR_3] = '\0';

 if (VAR_4) {
  for (VAR_3 = 0; VAR_0[VAR_3] != '\0'; VAR_3++)
   if (FUNC_1((unsigned char)VAR_0[VAR_3]))
    VAR_0[VAR_3] = FUNC_2((unsigned char)VAR_0[VAR_3]);
 }
 return VAR_0;
}
