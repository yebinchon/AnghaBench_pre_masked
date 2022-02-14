
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (((void*)0) == VAR_4)
  VAR_4 = &VAR_6;

 VAR_9 = *VAR_3;
 VAR_8 = VAR_2[VAR_9] == '-';
 if (VAR_8 || VAR_2[VAR_9] == '+')
  VAR_9++;

 if (VAR_5 & VAR_1)
  while (FUNC_1((unsigned char)VAR_2[VAR_9]))
   VAR_9++;

 for (*VAR_4 = 0; FUNC_0((unsigned char)VAR_2[VAR_9]); VAR_9++)
  *VAR_4 = 10 * *VAR_4 + VAR_2[VAR_9] - '0';
 if (VAR_9 == *VAR_3 + VAR_8)
  return 0;

 if (VAR_8)
  *VAR_4 = -*VAR_4;



 switch (VAR_2[VAR_9]) {
 case 'f':
  VAR_7 = *VAR_4 * 65536;
  break;
 case 'i':
  VAR_7 = *VAR_4 * 240;
  break;
 case 'c':
  VAR_7 = *VAR_4 * 240 / 2.54;
  break;
 case 'v':
 case 'P':
  VAR_7 = *VAR_4 * 40;
  break;
 case 'm':
 case 'n':
  VAR_7 = *VAR_4 * 24;
  break;
 case 'p':
  VAR_7 = *VAR_4 * 10 / 3;
  break;
 case 'u':
  VAR_7 = *VAR_4;
  break;
 case 'M':
  VAR_7 = *VAR_4 * 6 / 25;
  break;
 default:
  VAR_7 = *VAR_4;
  VAR_9--;
  break;
 }
 if (VAR_5 & VAR_0)
  *VAR_4 = VAR_7;

 *VAR_3 = VAR_9 + 1;
 return 1;
}
