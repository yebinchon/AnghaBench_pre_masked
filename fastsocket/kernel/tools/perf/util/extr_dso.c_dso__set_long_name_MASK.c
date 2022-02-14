
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char* long_name; int long_name_len; } ;


 int FUNC_0 (char*) ;

void FUNC_1(struct dso *VAR_0, char *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 VAR_0->long_name = VAR_1;
 VAR_0->long_name_len = FUNC_0(VAR_1);
}
