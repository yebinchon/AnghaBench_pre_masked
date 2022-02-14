
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;







 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;

 int * VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int const,int *,int *) ;
 int VAR_5 ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;

Node *FUNC_8(void)
{
 Node *VAR_10;
 int VAR_11;

 switch (VAR_8) {
 case 131:
  VAR_3 = VAR_9;
  VAR_10 = FUNC_3(131, VAR_1, FUNC_2(VAR_7));
  VAR_8 = FUNC_5();
  return (FUNC_7(VAR_10));
 case 133:
  VAR_8 = FUNC_5();
  return (FUNC_7(FUNC_3(133, VAR_1, VAR_1)));
 case 129:
  VAR_8 = FUNC_5();
  return (FUNC_7(FUNC_3(129, VAR_1, VAR_1)));
 case 130:
  VAR_3 = VAR_9;
  VAR_8 = FUNC_5();
  return (FUNC_7(FUNC_3(130, VAR_1, VAR_1)));
 case 132:
  VAR_10 = FUNC_3(132, VAR_1, (Node*) FUNC_1((char *) VAR_6));
  VAR_3 = VAR_9;
  VAR_8 = FUNC_5();
  return (FUNC_7(VAR_10));
 case 128:
  VAR_10 = FUNC_3(128, VAR_1, (Node *) FUNC_1((char *) VAR_6));
  VAR_3 = VAR_9;
  VAR_8 = FUNC_5();
  return (FUNC_7(VAR_10));
 case '^':
  VAR_8 = FUNC_5();
  return (FUNC_7(FUNC_3(131, VAR_1, FUNC_2(VAR_0))));
 case '$':
  VAR_8 = FUNC_5();
  return (FUNC_7(FUNC_3(131, VAR_1, VAR_1)));
 case '(':
  VAR_3 = VAR_9;
  VAR_11 = VAR_9 - VAR_2;
  VAR_8 = FUNC_5();
  if (VAR_8 == ')') {
   VAR_8 = FUNC_5();
   return FUNC_7(FUNC_3(132, VAR_1, (Node *) FUNC_6("")));
  }
  VAR_10 = FUNC_4();
  if (VAR_8 == ')') {
   VAR_3 = VAR_2 + VAR_11;
   VAR_8 = FUNC_5();
   return (FUNC_7(VAR_10));
  }
  else
   FUNC_0("syntax error in regular expression %s at %s", VAR_4, VAR_5);
 default:
  FUNC_0("illegal primary in regular expression %s at %s", VAR_4, VAR_5);
 }
 return 0;
}
