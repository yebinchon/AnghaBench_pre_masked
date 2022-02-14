
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (long,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_3 () ;
 long FUNC_4 (int ) ;
 long FUNC_5 (int ,int) ;
 int* VAR_6 ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 (unsigned char) ;
 int VAR_7 ;

long
FUNC_8(void)
{
 const char *VAR_8;
 long VAR_9 = VAR_4;
 long VAR_10;
 int VAR_11 = 1;
 int VAR_12;

 FUNC_1();
 for (VAR_8 = VAR_6;; VAR_11 = 0)
  switch (VAR_12 = *VAR_6) {
  case '+':
  case '\t':
  case ' ':
  case '-':
  case '^':
   VAR_6++;
   FUNC_1();
   if (FUNC_6((unsigned char)*VAR_6)) {
    FUNC_2(VAR_10, VAR_6);
    VAR_9 += (VAR_12 == '-' || VAR_12 == '^') ? -VAR_10 : VAR_10;
   } else if (!FUNC_7((unsigned char)VAR_12))
    VAR_9 += (VAR_12 == '-' || VAR_12 == '^') ? -1 : 1;
   break;
  case '0': case '1': case '2':
  case '3': case '4': case '5':
  case '6': case '7': case '8': case '9':
   FUNC_0();
   FUNC_2(VAR_9, VAR_6);
   break;
  case '.':
  case '$':
   FUNC_0();
   VAR_6++;
   VAR_9 = (VAR_12 == '.') ? VAR_4 : VAR_3;
   break;
  case '/':
  case '?':
   FUNC_0();
   if ((VAR_9 = FUNC_5(
       FUNC_3(), VAR_12 == '/')) < 0)
    return VAR_1;
   else if (VAR_12 == *VAR_6)
    VAR_6++;
   break;
  case '\'':
   FUNC_0();
   VAR_6++;
   if ((VAR_9 = FUNC_4(*VAR_6++)) < 0)
    return VAR_1;
   break;
  case '%':
  case ',':
  case ';':
   if (VAR_11) {
    VAR_6++;
    VAR_2++;
    VAR_7 = (VAR_12 == ';') ? VAR_4 : 1;
    if ((VAR_9 = FUNC_8()) < 0)
     VAR_9 = VAR_3;
    break;
   }

  default:
   if (VAR_6 == VAR_8)
    return VAR_0;
   else if (VAR_9 < 0 || VAR_3 < VAR_9) {
    VAR_5 = "invalid address";
    return VAR_1;
   } else
    return VAR_9;
  }

}
