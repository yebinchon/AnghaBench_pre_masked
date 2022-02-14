
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gstr {scalar_t__ len; int s; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

struct gstr FUNC_2(const char *VAR_0)
{
 struct gstr VAR_1;
 VAR_1.s = FUNC_0(VAR_0);
 VAR_1.len = FUNC_1(VAR_0) + 1;
 return VAR_1;
}
