
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
struct passwd {char* pw_dir; } ;
typedef int buf ;
struct TYPE_3__ {struct passwd* pw; } ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,int,char*,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;

int
FUNC_3(Session *VAR_1, const char *VAR_2)
{
 char VAR_3[256];
 struct passwd *VAR_4 = VAR_1->pw;
 struct stat VAR_5;


 if (VAR_2 != ((void*)0))
  return 1;
 FUNC_1(VAR_3, sizeof(VAR_3), "%.200s/.hushlogin", VAR_4->pw_dir);




 if (FUNC_2(VAR_3, &VAR_5) >= 0)
  return 1;

 return 0;
}
