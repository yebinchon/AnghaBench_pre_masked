
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct passwd {scalar_t__ pw_uid; int pw_name; } ;
typedef int buf ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,char*,int ) ;
 char* FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (char*,int ,char const*) ;
 int FUNC_8 (char const*,struct stat*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(struct passwd *VAR_3)
{
 FILE *VAR_4 = ((void*)0);
 const char *VAR_5;
 char VAR_6[1024], *VAR_7 = VAR_0;
 struct stat VAR_8;






 if (VAR_3->pw_uid == 0)
  return;
 VAR_5 = VAR_7;

 if (FUNC_8(VAR_5, &VAR_8) == -1)
  return;


 FUNC_7("User %.100s not allowed because %s exists", VAR_3->pw_name, VAR_5);
 if ((VAR_4 = FUNC_3(VAR_5, "r")) != ((void*)0)) {
  while (FUNC_2(VAR_6, sizeof(VAR_6), VAR_4))
   FUNC_4(VAR_6, VAR_2);
  FUNC_1(VAR_4);
 }
 FUNC_0(254);
}
