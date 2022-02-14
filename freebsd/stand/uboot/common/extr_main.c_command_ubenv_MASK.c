
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ubenv_action { ____Placeholder_ubenv_action } ubenv_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int,char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(int VAR_6, char *VAR_7[])
{
 enum ubenv_action VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_8 = VAR_4;
 if (VAR_6 > 1) {
  if (FUNC_1(VAR_7[1], "import") == 0)
   VAR_8 = VAR_2;
  else if (FUNC_1(VAR_7[1], "show") == 0)
   VAR_8 = VAR_3;
 }
 if (VAR_8 == VAR_4) {
  VAR_5 = "usage: 'ubenv <import|show> [var ...]";
  return (VAR_0);
 }

 if (VAR_6 > 2) {
  for (VAR_10 = 2; VAR_10 < VAR_6; VAR_10++)
   FUNC_0(VAR_8, VAR_7[VAR_10]);
 } else {
  VAR_9 = ((void*)0);
  for (;;) {
   if ((VAR_9 = FUNC_2(VAR_9)) == ((void*)0))
    break;
   FUNC_0(VAR_8, VAR_9);
  }
 }

 return (VAR_1);
}
