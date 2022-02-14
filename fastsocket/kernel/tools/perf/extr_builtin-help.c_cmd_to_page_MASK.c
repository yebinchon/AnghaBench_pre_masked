
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 char const* FUNC_1 (char*,char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0)
{
 if (!VAR_0)
  return "perf";
 else if (!FUNC_0(VAR_0, "perf"))
  return VAR_0;
 else
  return FUNC_1("perf-", VAR_0);
}
