
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned char) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{

 unsigned char VAR_3, VAR_4;

 VAR_3 = VAR_4 = 0;
 if (VAR_2) {
  do {
   VAR_3 = *VAR_0;
   VAR_4 = *VAR_1;
   VAR_0++;
   VAR_1++;
   if (!VAR_3)
    break;
   if (!VAR_4)
    break;
   if (VAR_3 == VAR_4)
    continue;
   VAR_3 = FUNC_0(VAR_3);
   VAR_4 = FUNC_0(VAR_4);
   if (VAR_3 != VAR_4)
    break;
  } while (--VAR_2);
 }
 return (int)VAR_3 - (int)VAR_4;
}
