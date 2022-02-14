
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_1)
{
    bool VAR_2 = VAR_0;

    if (VAR_1 != 0) {
 size_t VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 != 0)
     VAR_2 = (VAR_1[VAR_3 - 1] != ',');
    } else {
 VAR_2 = VAR_0;
    }
    return VAR_2;
}
