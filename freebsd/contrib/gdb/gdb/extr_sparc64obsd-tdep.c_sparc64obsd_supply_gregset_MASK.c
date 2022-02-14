
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int descr; } ;
struct regcache {int dummy; } ;


 int FUNC_0 (struct regcache*,int,char const*) ;
 int FUNC_1 (int ,struct regcache*,int,char const*) ;

__attribute__((used)) static void
FUNC_2 (const struct regset *VAR_0,
       struct regcache *VAR_1,
       int VAR_2, const void *VAR_3, size_t VAR_4)
{
  const char *VAR_5 = VAR_3;

  FUNC_1 (VAR_0->descr, VAR_1, VAR_2, VAR_5);
  FUNC_0 (VAR_1, VAR_2, VAR_5 + 288);
}
