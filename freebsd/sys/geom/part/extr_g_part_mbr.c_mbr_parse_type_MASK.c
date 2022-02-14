
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ typ; int alias; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 long FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, u_char *VAR_3)
{
 const char *VAR_4;
 char *VAR_5;
 long VAR_6;
 int VAR_7;

 if (VAR_2[0] == '!') {
  VAR_6 = FUNC_3(VAR_2 + 1, &VAR_5, 0);
  if (VAR_2[1] == '\0' || *VAR_5 != '\0' || VAR_6 <= 0 || VAR_6 >= 256)
   return (VAR_0);
  *VAR_3 = (u_char)VAR_6;
  return (0);
 }
 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_1); VAR_7++) {
  VAR_4 = FUNC_0(VAR_1[VAR_7].alias);
  if (FUNC_2(VAR_2, VAR_4) == 0) {
   *VAR_3 = VAR_1[VAR_7].typ;
   return (0);
  }
 }
 return (VAR_0);
}
