
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char const* short_name; int short_name_len; } ;


 int FUNC_0 (char const*) ;

void FUNC_1(struct dso *VAR_0, const char *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 VAR_0->short_name = VAR_1;
 VAR_0->short_name_len = FUNC_0(VAR_1);
}
