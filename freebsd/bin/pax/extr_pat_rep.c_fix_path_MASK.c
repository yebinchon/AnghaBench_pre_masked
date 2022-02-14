
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1( char *VAR_1, int *VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;
 int VAR_8;







 VAR_7 = VAR_1;
 VAR_5 = VAR_7 + *VAR_2;
 VAR_6 = VAR_5 + VAR_4;
 if (*VAR_7 == '/') {
  ++VAR_7;
  --VAR_6;
 }
 if ((VAR_8 = VAR_6 - VAR_1) > VAR_0) {
  FUNC_0(1, "File name %s/%s, too long", VAR_3, VAR_7);
  return(-1);
 }
 *VAR_2 = VAR_8;




 while (VAR_5 >= VAR_7)
  *VAR_6-- = *VAR_5--;
 VAR_5 = VAR_3 + VAR_4 - 1;




 while (VAR_5 >= VAR_3)
  *VAR_6-- = *VAR_5--;

 *(VAR_1 + VAR_8) = '\0';
 return(0);
}
