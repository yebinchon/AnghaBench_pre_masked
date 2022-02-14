
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (char const*,char*,scalar_t__) ;
 int FUNC_1 (char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, ssize_t VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 while (VAR_1 > 0 && *VAR_0) {
  int VAR_6 = 0;


  while (VAR_1 >0 && (*VAR_0 == ' ' || *VAR_0 == '\t')) {
   ++VAR_0;
   --VAR_1;
   VAR_6 = 1;
  }
  if (*VAR_0 == '\n' || *VAR_0 == '\r')
   break;
  if (VAR_0[0] == '\\' && (VAR_0[1] == '\n' || VAR_0[1] == '\r'))
   break;
  if (!VAR_6 && !VAR_3)
   return (-1);
  if (VAR_3 && VAR_1 == 0)
    return (VAR_5);

  if (VAR_2) {
   VAR_4 = FUNC_0(VAR_0, "all", VAR_1);
   if (VAR_4 > 0)
    return (1);
  }

  VAR_4 = FUNC_1(VAR_0, VAR_1);
  if (VAR_4 == 0)
   return (-1);
  VAR_0 += VAR_4;
  VAR_1 -= VAR_4;
  VAR_5++;


  if (*VAR_0 == '=') {
   int VAR_7 = 0;
   ++VAR_0;
   --VAR_1;
   while (VAR_1 > 0 && *VAR_0 != ' ' && *VAR_0 != '\t') {
    ++VAR_0;
    --VAR_1;
    VAR_7 = 1;
   }


   if (!VAR_2 && VAR_7 == 0)
    return (-1);
  }
 }
 return (VAR_5);
}
