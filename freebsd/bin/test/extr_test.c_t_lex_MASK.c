
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum token { ____Placeholder_token } token ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static enum token
FUNC_5(char *VAR_6)
{
 int VAR_7;

 if (VAR_6 == ((void*)0)) {
  return VAR_1;
 }
 VAR_7 = FUNC_1(VAR_6);
 if (((FUNC_0(VAR_7) == VAR_5 || FUNC_0(VAR_7) == VAR_0)
    && FUNC_4()) ||
     (VAR_7 == VAR_2 && FUNC_2()) ||
     (VAR_7 == VAR_4 && FUNC_3()))
  return VAR_3;
 return VAR_7;
}
