
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int* _p; scalar_t__ _r; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;

__attribute__((used)) static __inline int
FUNC_2(FILE *VAR_5, char * __restrict VAR_6, int VAR_7, int VAR_8, int VAR_9)
{

 static const short VAR_10[17] =
  { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
 char *VAR_11;
 int VAR_12;

 VAR_9 |= VAR_4 | VAR_1 | VAR_2;
 for (VAR_11 = VAR_6; VAR_7; VAR_7--) {
  VAR_12 = *VAR_5->_p;




  switch (VAR_12) {
  case '0':
   if (VAR_8 == 0) {
    VAR_8 = 8;
    VAR_9 |= VAR_3;
   }
   if (VAR_9 & VAR_2)
    VAR_9 &= ~(VAR_4|VAR_2|VAR_1);
   else
    VAR_9 &= ~(VAR_4|VAR_3|VAR_1);
   goto ok;


  case '1': case '2': case '3':
  case '4': case '5': case '6': case '7':
   VAR_8 = VAR_10[VAR_8];
   VAR_9 &= ~(VAR_4 | VAR_3 | VAR_1);
   goto ok;


  case '8': case '9':
   VAR_8 = VAR_10[VAR_8];
   if (VAR_8 <= 8)
    break;
   VAR_9 &= ~(VAR_4 | VAR_3 | VAR_1);
   goto ok;


  case 'A': case 'B': case 'C':
  case 'D': case 'E': case 'F':
  case 'a': case 'b': case 'c':
  case 'd': case 'e': case 'f':

   if (VAR_8 <= 10)
    break;
   VAR_9 &= ~(VAR_4 | VAR_3 | VAR_1);
   goto ok;


  case '+': case '-':
   if (VAR_9 & VAR_4) {
    VAR_9 &= ~VAR_4;
    VAR_9 |= VAR_0;
    goto ok;
   }
   break;





  case 'x': case 'X':
   if (VAR_9 & VAR_3 && VAR_11 ==
       VAR_6 + 1 + !!(VAR_9 & VAR_0)) {
    VAR_8 = 16;
    VAR_9 &= ~VAR_3;
    goto ok;
   }
   break;
  }





  break;
 ok:



  *VAR_11++ = VAR_12;
  if (--VAR_5->_r > 0)
   VAR_5->_p++;
  else if (FUNC_0(VAR_5))
   break;
 }





 if (VAR_9 & VAR_1) {
  if (VAR_11 > VAR_6)
   (void) FUNC_1(*(u_char *)--VAR_11, VAR_5);
  return (0);
 }
 VAR_12 = ((u_char *)VAR_11)[-1];
 if (VAR_12 == 'x' || VAR_12 == 'X') {
  --VAR_11;
  (void) FUNC_1(VAR_12, VAR_5);
 }
 return (VAR_11 - VAR_6);
}
