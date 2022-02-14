
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char *
FUNC_5(const char *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3 == VAR_1)
  VAR_6 = VAR_0 ? FUNC_2(VAR_4) : FUNC_1(VAR_4);
 else
  VAR_6 = FUNC_0(VAR_4);

 if (VAR_6 == -1) {
  switch (VAR_2) {
  case 129:
   if (VAR_5 == 0)
    FUNC_4("%s: Device already in use", VAR_4);
   break;
  case 128:
   if (VAR_3 == VAR_1)
    FUNC_4("%s: NSWAPDEV limit reached", VAR_4);
   else if (VAR_5 == 0)
    FUNC_3("%s", VAR_4);
   break;
  default:
   FUNC_3("%s", VAR_4);
   break;
  }
  return (((void*)0));
 }
 return (VAR_4);
}
