
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_type; } ;


 scalar_t__ VAR_0 ;
 struct entry* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static struct entry *
FUNC_3(char *VAR_1)
{
 struct entry *VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_1, '/');
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 *VAR_3 = '\0';
 VAR_2 = FUNC_0(VAR_1);
 *VAR_3 = '/';
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 if (VAR_2->e_type != VAR_0)
  FUNC_1("%s is not a directory\n", VAR_1);
 return (VAR_2);
}
