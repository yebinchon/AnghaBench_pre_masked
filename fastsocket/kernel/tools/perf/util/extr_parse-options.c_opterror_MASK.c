
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int long_name; int short_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char const*) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_2, const char *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_0)
  return FUNC_0("switch `%c' %s", VAR_2->short_name, VAR_3);
 if (VAR_4 & VAR_1)
  return FUNC_0("option `no-%s' %s", VAR_2->long_name, VAR_3);
 return FUNC_0("option `%s' %s", VAR_2->long_name, VAR_3);
}
