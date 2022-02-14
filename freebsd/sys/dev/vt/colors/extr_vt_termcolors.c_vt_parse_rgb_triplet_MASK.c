
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, unsigned char *VAR_1,
    unsigned char *VAR_2, unsigned char *VAR_3)
{
 unsigned long VAR_4;
 const char *VAR_5;
 char *VAR_6;

 VAR_5 = VAR_0;


 if (*VAR_5 == '#') {
  if (FUNC_0(VAR_5) != 7)
   return (-1);
  VAR_4 = FUNC_1(VAR_5 + 1, &VAR_6, 16);
  if (*VAR_6 != '\0')
   return (-1);

  *VAR_1 = (VAR_4 >> 16) & 0xff;
  *VAR_2 = (VAR_4 >> 8) & 0xff;
  *VAR_3 = VAR_4 & 0xff;

  return (0);
 }


 VAR_4 = FUNC_1(VAR_5, &VAR_6, 10);
 if (VAR_5 == VAR_6)
  return (-1);
 if (VAR_4 > 255)
  return (-1);
 *VAR_1 = VAR_4 & 0xff;
 VAR_5 = VAR_6;


 while (*VAR_5 == ',' || *VAR_5 == ' ')
  VAR_5++;

 VAR_4 = FUNC_1(VAR_5, &VAR_6, 10);
 if (VAR_5 == VAR_6)
  return (-1);
 if (VAR_4 > 255)
  return (-1);
 *VAR_2 = VAR_4 & 0xff;
 VAR_5 = VAR_6;


 while (*VAR_5 == ',' || *VAR_5 == ' ')
  VAR_5++;

 VAR_4 = FUNC_1(VAR_5, &VAR_6, 10);
 if (VAR_5 == VAR_6)
  return (-1);
 if (VAR_4 > 255)
  return (-1);
 *VAR_3 = VAR_4 & 0xff;
 VAR_5 = VAR_6;


 while (*VAR_5 == ' ')
  VAR_5++;


 if (*VAR_5 != 0)
  return (-1);

 return (0);
}
