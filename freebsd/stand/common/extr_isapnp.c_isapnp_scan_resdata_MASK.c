
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef size_t u_char ;
struct pnpinfo {char* pi_desc; } ;
typedef int ssize_t ;





 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t*) ;
 scalar_t__ FUNC_5 (size_t*,int) ;
 size_t* FUNC_6 (size_t) ;
 int FUNC_7 (struct pnpinfo*,int ) ;
 int FUNC_8 (size_t*) ;

__attribute__((used)) static int
FUNC_9(struct pnpinfo *VAR_0)
{
    u_char VAR_1, VAR_2[8];
    u_int VAR_3;
    size_t VAR_4;
    u_char *VAR_5;

    VAR_3 = 1000;
    while ((VAR_3-- > 0) && !FUNC_5(&VAR_1, 1)) {
 if (FUNC_1(VAR_1) == 0) {

     switch (FUNC_3(VAR_1)) {

  case 130:

      if (FUNC_5(VAR_2, FUNC_2(VAR_1)))
   return(1);
      FUNC_7(VAR_0, FUNC_8(VAR_2));

  case 129:
      return(0);
      break;

  default:

      if (FUNC_5(((void*)0), FUNC_2(VAR_1)))
   return(1);
      break;
     }
 } else {

     if (FUNC_5(VAR_2, 2))
  return(1);

     VAR_4 = VAR_2[1];
     VAR_4 = (VAR_4 << 8) + VAR_2[0];

     switch(FUNC_0(VAR_1)) {

     case 128:
  VAR_5 = FUNC_6(VAR_4 + 1);
  if (FUNC_5(VAR_5, (ssize_t)VAR_4)) {
      FUNC_4(VAR_5);
      return(1);
  }
  VAR_5[VAR_4] = 0;
  if (VAR_0->pi_desc == ((void*)0)) {
      VAR_0->pi_desc = (char *)VAR_5;
  } else {
      FUNC_4(VAR_5);
  }
  break;

     default:

  if (FUNC_5(((void*)0), (ssize_t)VAR_4))
      return(1);
     }
 }
    }
    return(1);
}
