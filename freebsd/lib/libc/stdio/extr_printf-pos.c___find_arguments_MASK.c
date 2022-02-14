
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef union arg {int dummy; } arg ;
typedef int u_int ;
struct typetable {int nextarg; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct typetable*,char**) ;
 int FUNC_1 (struct typetable*,int) ;
 int FUNC_2 (struct typetable*,int ) ;
 int FUNC_3 (struct typetable*,int) ;
 int FUNC_4 (struct typetable*,int ,union arg**) ;
 int FUNC_5 (struct typetable*) ;
 int FUNC_6 (struct typetable*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

int
FUNC_9 (const char *VAR_24, va_list VAR_25, union arg **VAR_26)
{
 char *VAR_27;
 int VAR_28;
 u_int VAR_29;
 int VAR_30;
 int VAR_31;
 struct typetable VAR_32;

 VAR_27 = (char *)VAR_24;
 FUNC_6(&VAR_32);
 VAR_30 = 0;




 for (;;) {
  while ((VAR_28 = *VAR_27) != '\0' && VAR_28 != '%')
   VAR_27++;
  if (VAR_28 == '\0')
   goto done;
  VAR_27++;

  VAR_31 = 0;

rflag: VAR_28 = *VAR_27++;
reswitch: switch (VAR_28) {
  case ' ':
  case '#':
   goto rflag;
  case '*':
   if ((VAR_30 = FUNC_0(&VAR_32, &VAR_27)))
    goto error;
   goto rflag;
  case '-':
  case '+':
  case '\'':
   goto rflag;
  case '.':
   if ((VAR_28 = *VAR_27++) == '*') {
    if ((VAR_30 = FUNC_0(&VAR_32, &VAR_27)))
     goto error;
    goto rflag;
   }
   while (FUNC_7(VAR_28)) {
    VAR_28 = *VAR_27++;
   }
   goto reswitch;
  case '0':
   goto rflag;
  case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   VAR_29 = 0;
   do {
    VAR_29 = 10 * VAR_29 + FUNC_8(VAR_28);

    if (VAR_29 > VAR_5) {
     VAR_30 = -1;
     goto error;
    }
    VAR_28 = *VAR_27++;
   } while (FUNC_7(VAR_28));
   if (VAR_28 == '$') {
    VAR_32.nextarg = VAR_29;
    goto rflag;
   }
   goto reswitch;

  case 'L':
   VAR_31 |= VAR_3;
   goto rflag;

  case 'h':
   if (VAR_31 & VAR_7) {
    VAR_31 &= ~VAR_7;
    VAR_31 |= VAR_0;
   } else
    VAR_31 |= VAR_7;
   goto rflag;
  case 'j':
   VAR_31 |= VAR_1;
   goto rflag;
  case 'l':
   if (VAR_31 & VAR_4) {
    VAR_31 &= ~VAR_4;
    VAR_31 |= VAR_2;
   } else
    VAR_31 |= VAR_4;
   goto rflag;
  case 'q':
   VAR_31 |= VAR_2;
   goto rflag;
  case 't':
   VAR_31 |= VAR_6;
   goto rflag;
  case 'z':
   VAR_31 |= VAR_8;
   goto rflag;
  case 'C':
   VAR_31 |= VAR_4;

  case 'c':
   VAR_30 = FUNC_2(&VAR_32,
     (VAR_31 & VAR_4) ? VAR_23 : VAR_21);
   if (VAR_30)
    goto error;
   break;
  case 'D':
   VAR_31 |= VAR_4;

  case 'd':
  case 'i':
   if ((VAR_30 = FUNC_1(&VAR_32, VAR_31)))
    goto error;
   break;

  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'f':
  case 'g':
  case 'G':
   VAR_30 = FUNC_2(&VAR_32,
       (VAR_31 & VAR_3) ? VAR_22 : VAR_20);
   if (VAR_30)
    goto error;
   break;

  case 'n':
   if (VAR_31 & VAR_1)
    VAR_30 = FUNC_2(&VAR_32, VAR_11);
   else if (VAR_31 & VAR_6)
    VAR_30 = FUNC_2(&VAR_32, VAR_14);
   else if (VAR_31 & VAR_8)
    VAR_30 = FUNC_2(&VAR_32, VAR_17);
   else if (VAR_31 & VAR_2)
    VAR_30 = FUNC_2(&VAR_32, VAR_12);
   else if (VAR_31 & VAR_4)
    VAR_30 = FUNC_2(&VAR_32, VAR_13);
   else if (VAR_31 & VAR_7)
    VAR_30 = FUNC_2(&VAR_32, VAR_16);
   else if (VAR_31 & VAR_0)
    VAR_30 = FUNC_2(&VAR_32, VAR_15);
   else
    VAR_30 = FUNC_2(&VAR_32, VAR_10);
   if (VAR_30)
    goto error;
   continue;
  case 'O':
   VAR_31 |= VAR_4;

  case 'o':
   if ((VAR_30 = FUNC_3(&VAR_32, VAR_31)))
    goto error;
   break;
  case 'p':
   if ((VAR_30 = FUNC_2(&VAR_32, VAR_18)))
    goto error;
   break;
  case 'S':
   VAR_31 |= VAR_4;

  case 's':
   VAR_30 = FUNC_2(&VAR_32,
     (VAR_31 & VAR_4) ? VAR_19 : VAR_9);
   if (VAR_30)
    goto error;
   break;
  case 'U':
   VAR_31 |= VAR_4;

  case 'u':
  case 'X':
  case 'x':
   if ((VAR_30 = FUNC_3(&VAR_32, VAR_31)))
    goto error;
   break;
  default:
   if (VAR_28 == '\0')
    goto done;
   break;
  }
 }
done:
 FUNC_4(&VAR_32, VAR_25, VAR_26);
error:
 FUNC_5(&VAR_32);
 return (VAR_30 || *VAR_26 == ((void*)0));
}
