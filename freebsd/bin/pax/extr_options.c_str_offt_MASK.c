
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char**,int ) ;
 scalar_t__ FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static off_t
FUNC_2(char *VAR_2)
{
 char *VAR_3;
 off_t VAR_4, VAR_5;





 VAR_4 = FUNC_1(VAR_2, &VAR_3, 0);
 if ((VAR_4 == VAR_1) || (VAR_4 <= 0) || (VAR_3 == VAR_2))

  return(0);

 switch(*VAR_3) {
 case 'b':
  VAR_5 = VAR_4;
  VAR_4 *= 512;
  if (VAR_5 > VAR_4)
   return(0);
  ++VAR_3;
  break;
 case 'k':
  VAR_5 = VAR_4;
  VAR_4 *= 1024;
  if (VAR_5 > VAR_4)
   return(0);
  ++VAR_3;
  break;
 case 'm':
  VAR_5 = VAR_4;
  VAR_4 *= 1048576;
  if (VAR_5 > VAR_4)
   return(0);
  ++VAR_3;
  break;
 case 'w':
  VAR_5 = VAR_4;
  VAR_4 *= sizeof(int);
  if (VAR_5 > VAR_4)
   return(0);
  ++VAR_3;
  break;
 }

 switch(*VAR_3) {
  case '\0':
   break;
  case '*':
  case 'x':
   VAR_5 = VAR_4;
   VAR_4 *= FUNC_2(VAR_3 + 1);
   if (VAR_5 > VAR_4)
    return(0);
   break;
  default:
   return(0);
 }
 return(VAR_4);
}
