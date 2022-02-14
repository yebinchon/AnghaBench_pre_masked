
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;


 int FUNC_0 (struct strlist*,char const*) ;
 int FUNC_1 (struct strlist*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct strlist *VAR_0, const char *VAR_1)
{
 if (FUNC_2(VAR_1, "file://", 7) == 0)
  return FUNC_1(VAR_0, VAR_1 + 7);

 return FUNC_0(VAR_0, VAR_1);
}
