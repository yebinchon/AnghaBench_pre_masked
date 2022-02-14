
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,...) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, u_int VAR_2, const char *VAR_3)
{
    if (!VAR_2) {
 FUNC_0("%s: no default %s", VAR_1, VAR_3);
 return -1;
    }
    if (VAR_2 > VAR_0) {
 FUNC_0("%s: illegal %s %d", VAR_1, VAR_3, VAR_2);
 return -1;
    }
    return 0;
}
