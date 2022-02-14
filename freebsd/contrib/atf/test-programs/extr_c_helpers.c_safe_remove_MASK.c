
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static
void
FUNC_2(const char* VAR_0)
{
    if (FUNC_1(VAR_0) == -1)
        FUNC_0("unlink(2) of %s failed", VAR_0);
}
