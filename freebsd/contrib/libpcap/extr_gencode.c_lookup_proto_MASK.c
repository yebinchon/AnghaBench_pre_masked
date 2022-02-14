
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(compiler_state_t *VAR_4, const char *VAR_5, int VAR_6)
{
 register int VAR_7;

 switch (VAR_6) {

 case 132:
 case 131:
 case 130:
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7 == VAR_3)
   FUNC_0(VAR_4, "unknown ip proto '%s'", VAR_5);
  break;

 case 128:

  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 == VAR_3) {
   VAR_7 = FUNC_2(VAR_5);
   if (VAR_7 == VAR_3)
    FUNC_0(VAR_4, "unknown ether proto '%s'", VAR_5);
  }
  break;

 case 129:
  if (FUNC_4(VAR_5, "esis") == 0)
   VAR_7 = VAR_2;
  else if (FUNC_4(VAR_5, "isis") == 0)
   VAR_7 = VAR_0;
  else if (FUNC_4(VAR_5, "clnp") == 0)
   VAR_7 = VAR_1;
  else
   FUNC_0(VAR_4, "unknown osi proto '%s'", VAR_5);
  break;

 default:
  VAR_7 = VAR_3;
  break;
 }
 return VAR_7;
}
