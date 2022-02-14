
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int locale_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int *,int ) ;

__attribute__((used)) static __inline int
FUNC_2(FILE *VAR_6, wchar_t *VAR_7, int VAR_8, int VAR_9, int VAR_10,
    locale_t VAR_11)
{

 static const short VAR_12[17] =
  { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
 wchar_t *VAR_13;
 int VAR_14;

 VAR_10 |= VAR_4 | VAR_1 | VAR_2;
 for (VAR_13 = VAR_7; VAR_8; VAR_8--) {
  VAR_14 = FUNC_0(VAR_6, VAR_11);




  switch (VAR_14) {
  case '0':
   if (VAR_9 == 0) {
    VAR_9 = 8;
    VAR_10 |= VAR_3;
   }
   if (VAR_10 & VAR_2)
    VAR_10 &= ~(VAR_4|VAR_2|VAR_1);
   else
    VAR_10 &= ~(VAR_4|VAR_3|VAR_1);
   goto ok;


  case '1': case '2': case '3':
  case '4': case '5': case '6': case '7':
   VAR_9 = VAR_12[VAR_9];
   VAR_10 &= ~(VAR_4 | VAR_3 | VAR_1);
   goto ok;


  case '8': case '9':
   VAR_9 = VAR_12[VAR_9];
   if (VAR_9 <= 8)
    break;
   VAR_10 &= ~(VAR_4 | VAR_3 | VAR_1);
   goto ok;


  case 'A': case 'B': case 'C':
  case 'D': case 'E': case 'F':
  case 'a': case 'b': case 'c':
  case 'd': case 'e': case 'f':

   if (VAR_9 <= 10)
    break;
   VAR_10 &= ~(VAR_4 | VAR_3 | VAR_1);
   goto ok;


  case '+': case '-':
   if (VAR_10 & VAR_4) {
    VAR_10 &= ~VAR_4;
    VAR_10 |= VAR_0;
    goto ok;
   }
   break;





  case 'x': case 'X':
   if (VAR_10 & VAR_3 && VAR_13 ==
       VAR_7 + 1 + !!(VAR_10 & VAR_0)) {
    VAR_9 = 16;
    VAR_10 &= ~VAR_3;
    goto ok;
   }
   break;
  }





  if (VAR_14 != VAR_5)
   FUNC_1(VAR_14, VAR_6, VAR_11);
  break;
 ok:



  *VAR_13++ = (wchar_t)VAR_14;
 }





 if (VAR_10 & VAR_1) {
  if (VAR_13 > VAR_7)
   FUNC_1(*--VAR_13, VAR_6, VAR_11);
  return (0);
 }
 VAR_14 = VAR_13[-1];
 if (VAR_14 == 'x' || VAR_14 == 'X') {
  --VAR_13;
  FUNC_1(VAR_14, VAR_6, VAR_11);
 }
 return (VAR_13 - VAR_7);
}
