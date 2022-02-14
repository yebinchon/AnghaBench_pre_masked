
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const* const,size_t) ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ) ;
 size_t VAR_1 ;
 char* VAR_2 ;
 size_t FUNC_3 (char const* const) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_3, const char *const VAR_4)
{
    size_t VAR_5 = (size_t) (VAR_3 - VAR_2);
    size_t VAR_6 = VAR_5 + FUNC_3(VAR_4) + 2;
    if (VAR_6 > VAR_1) {
 VAR_2 = (char *) FUNC_1(VAR_2, VAR_1 = (VAR_6 + VAR_6));
 if (VAR_2 == 0)
     FUNC_2(VAR_0);
 VAR_3 = VAR_2 + VAR_5;
    }
    FUNC_0(VAR_3, VAR_4, VAR_1 - VAR_5);
    return VAR_3 + FUNC_3(VAR_3);
}
