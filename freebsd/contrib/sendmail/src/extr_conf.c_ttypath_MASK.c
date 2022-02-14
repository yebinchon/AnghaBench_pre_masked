
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

char *
FUNC_2()
{
 struct stat VAR_2;
 register char *VAR_3;
 extern char *FUNC_3();
 extern char *FUNC_4();


 if ((VAR_3 = FUNC_3(2)) == ((void*)0) && (VAR_3 = FUNC_3(1)) == ((void*)0) &&
     (VAR_3 = FUNC_3(0)) == ((void*)0))
 {
  VAR_1 = 0;
  return ((void*)0);
 }


 if (FUNC_1(VAR_3, &VAR_2) < 0 || !FUNC_0(VAR_0, VAR_2.st_mode))
 {
  VAR_1 = 0;
  return ((void*)0);
 }


 if (FUNC_4() == ((void*)0))
  return ((void*)0);


 return VAR_3;
}
