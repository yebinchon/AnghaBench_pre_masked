
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static u_int
FUNC_2(const char *VAR_1, u_int VAR_2, u_int VAR_3, const char *VAR_4)
{
    char *VAR_5;
    u_long VAR_6;

    VAR_0 = 0;
    VAR_6 = FUNC_1(VAR_1, &VAR_5, 0);
    if (VAR_0 || !*VAR_1 || *VAR_5 || VAR_6 < VAR_2 || VAR_6 > VAR_3)
 FUNC_0(1, "%s: bad %s", VAR_1, VAR_4);
    return VAR_6;
}
