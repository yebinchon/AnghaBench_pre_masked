
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_3__ {char* name; } ;
typedef int SCR ;
typedef TYPE_1__ FREF ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (char*,struct stat*) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(
 SCR *VAR_2,
 FREF *VAR_3,
 struct stat *VAR_4,
 int *VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 int VAR_8;
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;





 VAR_9 = VAR_3->name;
 if (VAR_9 == ((void*)0)) {
  *VAR_5 = 0;
  return (0);
 }
 if (VAR_9[0] == '/' || (VAR_9[0] == '.' &&
     (VAR_9[1] == '/' || (VAR_9[1] == '.' && VAR_9[2] == '/')))) {
  *VAR_5 = !FUNC_4(VAR_9, VAR_4);
  return (0);
 }


 if (!FUNC_4(VAR_9, VAR_4)) {
  *VAR_5 = 1;
  return (0);
 }


 for (VAR_8 = 0, VAR_10 = VAR_11 = FUNC_0(VAR_2, VAR_1);; ++VAR_10)
  if (*VAR_10 == ':' || *VAR_10 == '\0') {




   if (VAR_11 < VAR_10 && (VAR_10 - VAR_11 != 1 || *VAR_11 != '.')) {
    VAR_6 = *VAR_10;
    *VAR_10 = '\0';
    if ((VAR_12 = FUNC_2(VAR_11, VAR_9)) == ((void*)0)) {
     FUNC_3(VAR_2, VAR_0, ((void*)0));
     break;
    }
    VAR_7 = FUNC_5(VAR_12);
    *VAR_10 = VAR_6;
    if (!FUNC_4(VAR_12, VAR_4)) {
     VAR_8 = 1;
     break;
    }
    FUNC_1(VAR_12);
   }
   VAR_11 = VAR_10 + 1;
   if (*VAR_10 == '\0')
    break;
  }


 if (VAR_8) {
  FUNC_1(VAR_3->name);
  VAR_3->name = VAR_12;
 }
 *VAR_5 = VAR_8;
 return (0);
}
