
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

extern bool
FUNC_2(const char *VAR_0)
{
 if (VAR_0[0] == '\0') {
  FUNC_1(FUNC_0("Empty filename, skipping"));
  return 1;
 }

 return 0;
}
