
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,size_t,char*,char const*) ;

ssize_t
FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2, const void *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 int VAR_7;
 const unsigned char *VAR_8 = VAR_3;
 const unsigned char *VAR_9 = VAR_8 + VAR_4;

 VAR_7 = FUNC_0(VAR_0, VAR_1, "%s: ", VAR_2);
 if (VAR_7 == -1)
  return -1;
 if ((VAR_6 = VAR_5 = (size_t)VAR_7) >= VAR_1)
  VAR_6 = VAR_1;

 while (VAR_8 < VAR_9) {
  VAR_7 = FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, "%.2x", *VAR_8++);
  if (VAR_7 == -1)
   return -1;
  if ((VAR_6 = (VAR_5 += (size_t)VAR_7)) >= VAR_1)
   VAR_6 = VAR_1;
 }
 return (ssize_t)VAR_5;
}
