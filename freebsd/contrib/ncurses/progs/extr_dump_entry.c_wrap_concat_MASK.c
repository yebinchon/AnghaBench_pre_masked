
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 char const* VAR_3 ;
 int FUNC_1 (int *,char const*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_5)
{
    size_t VAR_6 = FUNC_2(VAR_5);
    size_t VAR_7 = FUNC_2(VAR_3) + VAR_6;

    if (VAR_1 > VAR_0
 && VAR_1 + (int) VAR_7 > VAR_4) {
 FUNC_0();
    }
    FUNC_1(&VAR_2, VAR_5);
    FUNC_1(&VAR_2, VAR_3);
    VAR_1 += (int) VAR_6;
}
