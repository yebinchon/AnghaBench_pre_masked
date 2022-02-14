
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char) ;
 int * FUNC_2 (char*,char const) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_13)
{

 if ((VAR_3 | VAR_8 | VAR_5 | VAR_7) & VAR_12) {



  if (VAR_3 & VAR_12) {
   if (VAR_8 & VAR_12) {
    if (VAR_2 & VAR_12) {
     FUNC_0("\n.PD");
     VAR_12 &= ~VAR_2;
    }
   } else if ( ! (VAR_2 & VAR_12)) {
    FUNC_0("\n.PD 0");
    VAR_12 |= VAR_2;
   }
   FUNC_0("\n.PP\n");
  } else if (VAR_8 & VAR_12)
   FUNC_0("\n.sp\n");
  else if (VAR_5 & VAR_12)
   FUNC_0("\n.br\n");
  else if (VAR_7 & VAR_12)
   FUNC_1('\n');
  VAR_12 &= ~(VAR_3|VAR_8|VAR_5|VAR_7|VAR_9);
  if (1 == VAR_11)
   FUNC_0(".br\n");
  VAR_11 = 0;
 } else if (VAR_9 & VAR_12) {






  if (VAR_10 & VAR_12 || '\0' == VAR_13[0] ||
      ((void*)0) == FUNC_2(".,:;)]?!", VAR_13[0]) || '\0' != VAR_13[1]) {
   if (VAR_0 & VAR_12 &&
       ! (VAR_1 & VAR_12))
    FUNC_1('\\');
   FUNC_1(' ');
   if (VAR_11)
    VAR_11--;
  }
 }





 if (VAR_4 & VAR_12 && ('\0' == VAR_13[0] ||
     (('(' != VAR_13[0] && '[' != VAR_13[0]) || '\0' != VAR_13[1])))
  VAR_12 |= VAR_9;
 else
  VAR_12 &= ~VAR_9;
 VAR_12 &= ~(VAR_10 | VAR_1);

 for ( ; *VAR_13; VAR_13++) {
  switch (*VAR_13) {
  case 128:
   FUNC_0("\\ ");
   break;
  case 129:
   FUNC_1('-');
   break;
  case 130:
   FUNC_0("\\:");
   break;
  case ' ':
   if (VAR_6 & VAR_12) {
    FUNC_0("\\ ");
    break;
   }

  default:
   FUNC_1((unsigned char)*VAR_13);
   break;
  }
  if (VAR_11)
   VAR_11--;
 }
 VAR_12 &= ~VAR_6;
}
