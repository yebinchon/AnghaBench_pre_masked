
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,size_t,char*,char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_8, int *VAR_9, size_t VAR_10, char *VAR_11)
{
 int VAR_12;

 *VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_8); VAR_12++) {
  switch (VAR_8[VAR_12]) {
  case 'r':
  case '-':
   *VAR_9 |= VAR_6;
   break;
  case 'd':
   *VAR_9 |= VAR_3;
   break;
  case 'b':
   *VAR_9 |= VAR_1;
   break;
  case 'c':
   *VAR_9 |= VAR_2;
   break;
  case 'l':
   *VAR_9 |= VAR_5;
   break;
  case 's':
   *VAR_9 |= VAR_7;
   break;
  case 'p':
   *VAR_9 |= VAR_4;
   break;
  case 'a':
   *VAR_9 |= VAR_0;
   break;
  default:
   FUNC_0(VAR_11, VAR_10, "Unknown type code: %c",
       VAR_8[VAR_12]);
   return (-1);
  }
 }

 return (0);
}
