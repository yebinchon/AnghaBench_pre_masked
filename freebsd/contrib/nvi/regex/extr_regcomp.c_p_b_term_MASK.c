
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int dummy; } ;
typedef int cset ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char,char) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct parse*,int *) ;
 int FUNC_13 (struct parse*,int *) ;
 char FUNC_14 (struct parse*) ;

__attribute__((used)) static void
FUNC_15(struct parse *VAR_4, cset *VAR_5)
{
 char VAR_6;
 char VAR_7, VAR_8;
 int VAR_9;


 switch ((FUNC_3()) ? FUNC_7() : '\0') {
 case '[':
  VAR_6 = (FUNC_4()) ? FUNC_8() : '\0';
  break;
 case '-':
  FUNC_11(VAR_3);
  return;
  break;
 default:
  VAR_6 = '\0';
  break;
 }

 switch (VAR_6) {
 case ':':
  FUNC_6();
  (void)FUNC_9(FUNC_3(), VAR_0);
  VAR_6 = FUNC_7();
  (void)FUNC_9(VAR_6 != '-' && VAR_6 != ']', VAR_2);
  FUNC_12(VAR_4, VAR_5);
  (void)FUNC_9(FUNC_3(), VAR_0);
  (void)FUNC_9(FUNC_2(':', ']'), VAR_2);
  break;
 case '=':
  FUNC_6();
  (void)FUNC_9(FUNC_3(), VAR_0);
  VAR_6 = FUNC_7();
  (void)FUNC_9(VAR_6 != '-' && VAR_6 != ']', VAR_1);
  FUNC_13(VAR_4, VAR_5);
  (void)FUNC_9(FUNC_3(), VAR_0);
  (void)FUNC_9(FUNC_2('=', ']'), VAR_1);
  break;
 default:

  VAR_7 = FUNC_14(VAR_4);
  if (FUNC_10('-') && FUNC_4() && FUNC_8() != ']') {

   FUNC_5();
   if (FUNC_1('-'))
    VAR_8 = '-';
   else
    VAR_8 = FUNC_14(VAR_4);
  } else
   VAR_8 = VAR_7;

  (void)FUNC_9(VAR_7 <= VAR_8, VAR_3);
  for (VAR_9 = VAR_7; VAR_9 <= VAR_8; VAR_9++)
   FUNC_0(VAR_5, VAR_9);
  break;
 }
}
