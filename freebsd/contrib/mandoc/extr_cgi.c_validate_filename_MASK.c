
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{

 if ('.' == VAR_0[0] && '/' == VAR_0[1])
  VAR_0 += 2;

 return ! (FUNC_1(VAR_0, "../") || FUNC_1(VAR_0, "/..") ||
     (FUNC_0(VAR_0, "man", 3) && FUNC_0(VAR_0, "cat", 3)));
}
