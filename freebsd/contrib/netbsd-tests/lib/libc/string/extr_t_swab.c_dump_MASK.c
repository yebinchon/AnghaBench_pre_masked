
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, char *VAR_1, size_t VAR_2)
{

 FUNC_0("%s ", VAR_0);
 while (VAR_2--)
  FUNC_0("%.2x ", (unsigned char)*VAR_1++);
 FUNC_0("\n");
}
