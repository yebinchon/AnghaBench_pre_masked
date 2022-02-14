
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char const*) ;

__attribute__((used)) static inline int
FUNC_1 (const char *VAR_0, bool *VAR_1, char *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0 (VAR_2, "%s%s", *VAR_1 ? "|" : "", VAR_0);

 *VAR_1 |= 1;

 return VAR_3;
}
