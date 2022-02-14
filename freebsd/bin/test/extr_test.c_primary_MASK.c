
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum token { ____Placeholder_token } token ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (scalar_t__) ;
 int ** VAR_7 ;

__attribute__((used)) static int
FUNC_9(enum token VAR_8)
{
 enum token VAR_9;
 int VAR_10;

 if (VAR_8 == VAR_1)
  return 0;
 if (VAR_8 == VAR_2) {
  VAR_6++;
  if ((VAR_9 = FUNC_8(VAR_5 > 0 ? (--VAR_5, *++VAR_7) : ((void*)0))) ==
      VAR_3) {
   VAR_6--;
   return 0;
  }
  VAR_10 = FUNC_5(VAR_9);
  if (FUNC_8(VAR_5 > 0 ? (--VAR_5, *++VAR_7) : ((void*)0)) != VAR_3)
   FUNC_7(((void*)0), "closing paren expected");
  VAR_6--;
  return VAR_10;
 }
 if (FUNC_0(VAR_8) == VAR_4) {

  if (--VAR_5 == 0)
   FUNC_7(((void*)0), "argument expected");
  switch (VAR_8) {
  case 129:
   return FUNC_6(*++VAR_7) == 0;
  case 128:
   return FUNC_6(*++VAR_7) != 0;
  case 130:
   return FUNC_4(FUNC_3(*++VAR_7));
  default:
   return FUNC_2(*++VAR_7, VAR_8);
  }
 }

 VAR_9 = FUNC_8(VAR_5 > 0 ? VAR_7[1] : ((void*)0));
 if (FUNC_0(VAR_9) == VAR_0)
  return FUNC_1(VAR_9);

 return FUNC_6(*VAR_7) > 0;
}
