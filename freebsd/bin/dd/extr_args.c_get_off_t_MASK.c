
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,int ,...) ;
 int VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static off_t
FUNC_5(const char *VAR_3)
{
 intmax_t VAR_4, VAR_5, VAR_6;
 char *VAR_7;

 VAR_1 = 0;
 VAR_4 = FUNC_4(VAR_3, &VAR_7, 0);
 if (VAR_7 == VAR_3)
  FUNC_1(1, "%s: invalid numeric value", VAR_2);
 if (VAR_1 != 0)
  FUNC_0(1, "%s", VAR_2);

 VAR_5 = FUNC_2(*VAR_7);

 if (VAR_5 != 0) {
  VAR_6 = VAR_4;
  VAR_4 *= VAR_5;

  if ((VAR_6 > 0) != (VAR_4 > 0) || VAR_4 / VAR_5 != VAR_6)
   goto erange;
  VAR_7++;
 }

 switch (*VAR_7) {
  case '\0':
   break;
  case '*':
  case 'X':
  case 'x':
   VAR_5 = (intmax_t)FUNC_5(VAR_7 + 1);
   VAR_6 = VAR_4;
   VAR_4 *= VAR_5;
   if ((VAR_6 > 0) == (VAR_4 > 0) && VAR_4 / VAR_5 == VAR_6)
    break;
erange:
   FUNC_1(1, "%s: %s", VAR_2, FUNC_3(VAR_0));
  default:
   FUNC_1(1, "%s: illegal numeric value", VAR_2);
 }
 return (VAR_4);
}
