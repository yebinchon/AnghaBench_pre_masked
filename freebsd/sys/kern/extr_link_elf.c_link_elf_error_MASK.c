
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 if (VAR_0 == ((void*)0))
  FUNC_0("kldload: %s\n", VAR_1);
 else
  FUNC_0("kldload: %s: %s\n", VAR_0, VAR_1);
}
