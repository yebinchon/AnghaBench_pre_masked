
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,int,char const*,char*,char*) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_0, size_t VAR_1, int VAR_2, const char *VAR_3, int VAR_4)
{
    return FUNC_0 (VAR_0, VAR_1, "%u %s%s%s",
       VAR_2, VAR_3,
       VAR_2 == 1 ? "" : "s",
       VAR_4 > 0 ? " " : "");
}
