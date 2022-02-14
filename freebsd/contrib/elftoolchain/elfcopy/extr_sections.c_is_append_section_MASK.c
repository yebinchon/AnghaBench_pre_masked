
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_action {scalar_t__ append; int * string; } ;
struct elfcopy {int dummy; } ;


 struct sec_action* FUNC_0 (struct elfcopy*,char const*,int ) ;

__attribute__((used)) static int
FUNC_1(struct elfcopy *VAR_0, const char *VAR_1)
{
 struct sec_action *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
 if (VAR_2 != ((void*)0) && VAR_2->append != 0 && VAR_2->string != ((void*)0))
  return (1);

 return (0);
}
