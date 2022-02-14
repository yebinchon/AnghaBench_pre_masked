
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int dummy; } ;


 int FUNC_0 (struct req const*,char const*) ;
 int FUNC_1 (struct req const*,char const*) ;

__attribute__((used)) static void
FUNC_2(const struct req *VAR_0, const char *VAR_1)
{

 if ('.' == VAR_1[0] && '/' == VAR_1[1])
  VAR_1 += 2;

 if ('c' == *VAR_1)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
