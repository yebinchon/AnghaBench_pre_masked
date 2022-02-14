
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int,char*,char const*) ;

int
FUNC_3(const char *VAR_0, int VAR_1, int VAR_2,
    const char *VAR_3, void *VAR_4)
{
 FUNC_0(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_2(VAR_0, VAR_1, "Assertion failed: %s", VAR_3);
  FUNC_1(VAR_4);
 }
 return (VAR_2);
}
