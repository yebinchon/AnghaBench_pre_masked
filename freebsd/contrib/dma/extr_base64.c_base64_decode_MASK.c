
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const) ;
 unsigned int FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_2, void *VAR_3)
{
 const char *VAR_4;
 unsigned char *VAR_5;

 VAR_5 = VAR_3;
 for (VAR_4 = VAR_2; *VAR_4 && (*VAR_4 == '=' || FUNC_0(VAR_1, *VAR_4)); VAR_4 += 4) {
  unsigned int VAR_6 = FUNC_1(VAR_4);
  unsigned int VAR_7 = (VAR_6 >> 24) & 0xff;
  if (VAR_6 == VAR_0)
   return -1;
  *VAR_5++ = (VAR_6 >> 16) & 0xff;
  if (VAR_7 < 2)
   *VAR_5++ = (VAR_6 >> 8) & 0xff;
  if (VAR_7 < 1)
   *VAR_5++ = VAR_6 & 0xff;
 }
 return VAR_5 - (unsigned char *) VAR_3;
}
