
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_2)
{
    bool VAR_3 = VAR_0;
    int VAR_4 = (int) FUNC_0(VAR_2);
    int VAR_5;
    bool VAR_6 = VAR_0;
    bool VAR_7 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_4 - 1; ++VAR_5) {
 if (!FUNC_1(VAR_2 + VAR_5, "%p", (size_t) 2)) {
     VAR_7 = VAR_1;
 } else if (!FUNC_1(VAR_2 + VAR_5, "%;", (size_t) 2)) {
     VAR_6 = VAR_1;
     VAR_3 = VAR_7;
     break;
 }
    }
    if (!VAR_6) {
 VAR_3 = ((VAR_4 > 50) && VAR_7);
    }
    return VAR_3;
}
