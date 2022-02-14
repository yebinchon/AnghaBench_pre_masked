
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,size_t) ;
 unsigned char* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_3, int VAR_4)
{
 int VAR_5;
 const unsigned char *VAR_6;
 size_t VAR_7;

 if (VAR_3 == ((void*)0)) {
  if (VAR_4) {

   FUNC_3("Current option settings\n");
   for (VAR_5 = 0, VAR_6 = VAR_1; VAR_5 < VAR_0; VAR_5++, VAR_6 += *VAR_6 + 1)
    FUNC_2("%-16.*s%s\n", *VAR_6, VAR_6 + 1,
     VAR_2[VAR_5] ? "on" : "off");
  } else {

   for (VAR_5 = 0, VAR_6 = VAR_1; VAR_5 < VAR_0; VAR_5++, VAR_6 += *VAR_6 + 1)
    FUNC_2("%s %co %.*s%s",
        VAR_5 % 6 == 0 ? "set" : "",
        VAR_2[VAR_5] ? '-' : '+',
        *VAR_6, VAR_6 + 1,
        VAR_5 % 6 == 5 || VAR_5 == VAR_0 - 1 ? "\n" : "");
  }
 } else {
  VAR_7 = FUNC_5(VAR_3);
  for (VAR_5 = 0, VAR_6 = VAR_1; VAR_5 < VAR_0; VAR_5++, VAR_6 += *VAR_6 + 1)
   if (*VAR_6 == VAR_7 && FUNC_1(VAR_6 + 1, VAR_3, VAR_7) == 0) {
    FUNC_4(VAR_5, VAR_4);
    return;
   }
  FUNC_0("Illegal option -o %s", VAR_3);
 }
}
