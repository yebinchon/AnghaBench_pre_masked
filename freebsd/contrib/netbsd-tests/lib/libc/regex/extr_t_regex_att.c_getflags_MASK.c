
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(char *VAR_1)
{
 int VAR_2 = 0;

 for (;; VAR_1++)
  switch (*VAR_1) {
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   *VAR_1 = '\0';
   break;
  case '\0':
   return VAR_2;
  case 'B':
  case 'E':
  case 'F':
  case 'L':
   break;
  case 'i':
   VAR_2 |= VAR_0;
   *VAR_1 = '\0';
   break;
  case '$':
   *VAR_1 = '\0';
   break;
  case 'n':
   *VAR_1 = '\0';
   break;
  default:
   FUNC_0(0, "Unknown char %c", *VAR_1);
   break;
  }
}
