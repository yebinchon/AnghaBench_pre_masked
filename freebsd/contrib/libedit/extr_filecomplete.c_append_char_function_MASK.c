
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,struct stat*) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0)
{
 struct stat VAR_1;
 char *VAR_2 = *VAR_0 == '~' ? FUNC_2(VAR_0) : ((void*)0);
 const char *VAR_3 = " ";

 if (FUNC_3(VAR_2 ? VAR_2 : VAR_0, &VAR_1) == -1)
  goto out;
 if (FUNC_0(VAR_1.st_mode))
  VAR_3 = "/";
out:
 if (VAR_2)
  FUNC_1(VAR_2);
 return VAR_3;
}
