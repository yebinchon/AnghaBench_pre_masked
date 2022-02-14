
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
    bool VAR_4 = VAR_0;
    if (FUNC_2(VAR_1, VAR_2, VAR_3) == 0) {
 VAR_4 = !FUNC_1(FUNC_0(VAR_2[VAR_3]));
    }
    return VAR_4;
}
