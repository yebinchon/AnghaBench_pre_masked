
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshcipher {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sshcipher* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,int ) ;

int
FUNC_5(const char *VAR_2)
{
 const struct sshcipher *VAR_3;
 char *VAR_4, *VAR_5;
 char *VAR_6;

 if (VAR_2 == ((void*)0) || FUNC_2(VAR_2, "") == 0)
  return 0;
 if ((VAR_4 = VAR_5 = FUNC_3(VAR_2)) == ((void*)0))
  return 0;
 for ((VAR_6 = FUNC_4(&VAR_5, VAR_1)); VAR_6 && *VAR_6 != '\0';
     (VAR_6 = FUNC_4(&VAR_5, VAR_1))) {
  VAR_3 = FUNC_0(VAR_6);
  if (VAR_3 == ((void*)0) || (VAR_3->flags & VAR_0) != 0) {
   FUNC_1(VAR_4);
   return 0;
  }
 }
 FUNC_1(VAR_4);
 return 1;
}
