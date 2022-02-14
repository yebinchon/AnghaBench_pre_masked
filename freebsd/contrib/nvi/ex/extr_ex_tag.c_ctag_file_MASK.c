
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ TAGF ;
typedef int SCR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 size_t FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(SCR *VAR_1, TAGF *VAR_2, char *VAR_3, char **VAR_4, size_t *VAR_5)
{
 struct stat VAR_6;
 char *VAR_7, *VAR_8;
 *VAR_5 = 0;
 if (VAR_3[0] != '/' &&
     FUNC_3(VAR_3, &VAR_6) && (VAR_7 = FUNC_5(VAR_2->name, '/')) != ((void*)0)) {
  *VAR_7 = '\0';
  if ((VAR_8 = FUNC_1(VAR_2->name, VAR_3)) == ((void*)0)) {
   FUNC_2(VAR_1, VAR_0, ((void*)0));
   return;
  }
  if (FUNC_3(VAR_8, &VAR_6) == 0) {
   *VAR_4 = VAR_2->name;
   *VAR_5 = FUNC_4(*VAR_4);
  }
  FUNC_0(VAR_8);
  *VAR_7 = '/';
 }
}
