
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int
FUNC_1(const char *VAR_0, size_t VAR_1, unsigned int VAR_2,
    size_t *VAR_3)
{
 size_t VAR_4;
 unsigned int VAR_5, VAR_6;
 const unsigned char *VAR_7, *VAR_8;

 FUNC_0(VAR_2 <= 10);

 VAR_8 = (const unsigned char *) VAR_0;
 VAR_7 = VAR_8 + VAR_1;


 for (;VAR_8 < VAR_7 && (VAR_5 = *VAR_8) == ' '; VAR_8++)
  ;

 VAR_4 = 0L;
 for (;VAR_8 < VAR_7; VAR_8++) {
  if ((VAR_5 = *VAR_8) == ' ')
   break;
  if (VAR_5 < '0' || VAR_5 > '9')
   return (0);
  VAR_6 = VAR_5 - '0';
  if (VAR_6 >= VAR_2)
   break;
  VAR_4 *= VAR_2;
  VAR_4 += VAR_6;
 }

 *VAR_3 = VAR_4;

 return (1);
}
