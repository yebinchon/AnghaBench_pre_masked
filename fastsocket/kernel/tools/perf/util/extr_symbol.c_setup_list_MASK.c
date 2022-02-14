
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 struct strlist* FUNC_1 (int,char const*) ;

__attribute__((used)) static int FUNC_2(struct strlist **VAR_0, const char *VAR_1,
        const char *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return 0;

 *VAR_0 = FUNC_1(1, VAR_1);
 if (!*VAR_0) {
  FUNC_0("problems parsing %s list\n", VAR_2);
  return -1;
 }
 return 0;
}
