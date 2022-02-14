
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (char*,char) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_1, char *VAR_2)
{
    if (FUNC_1(VAR_2, '|') == 0) {
 size_t VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 > VAR_0)
     VAR_3 = VAR_0;
 (void) FUNC_3(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1 + VAR_3, "|", VAR_0);
 VAR_2 = VAR_1;
    }
    return VAR_2;
}
