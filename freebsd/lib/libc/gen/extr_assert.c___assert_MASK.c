
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*,char const*,...) ;
 int VAR_0 ;

void
FUNC_2(const char *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4)
{
 if (VAR_1 == ((void*)0))
  (void)FUNC_1(VAR_0,
       "Assertion failed: (%s), file %s, line %d.\n", VAR_4,
       VAR_2, VAR_3);
 else
  (void)FUNC_1(VAR_0,
       "Assertion failed: (%s), function %s, file %s, line %d.\n",
       VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_0();

}
