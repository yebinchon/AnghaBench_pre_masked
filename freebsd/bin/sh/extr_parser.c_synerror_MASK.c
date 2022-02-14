
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_4)
{
 if (VAR_1)
  FUNC_1(VAR_2, "%s: %d: ", VAR_1, VAR_3);
 else if (VAR_0)
  FUNC_1(VAR_2, "%s: ", VAR_0);
 FUNC_1(VAR_2, "Syntax error: %s\n", VAR_4);
 FUNC_0((char *)((void*)0));
}
