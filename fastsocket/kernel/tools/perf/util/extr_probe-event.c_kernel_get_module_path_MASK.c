
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char const* long_name; } ;


 struct dso* FUNC_0 (char const*) ;

const char *FUNC_1(const char *VAR_0)
{
 struct dso *VAR_1 = FUNC_0(VAR_0);
 return (VAR_1) ? VAR_1->long_name : ((void*)0);
}
