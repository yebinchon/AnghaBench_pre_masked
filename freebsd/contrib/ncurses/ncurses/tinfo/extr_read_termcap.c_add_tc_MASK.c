
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(char *VAR_4[], char *VAR_5, int VAR_6)
{
    char *VAR_7 = FUNC_2(VAR_5, VAR_1);
    if (VAR_7 != 0)
 *VAR_7 = '\0';
    if (VAR_6 < VAR_0
 && FUNC_1(VAR_5, VAR_2) == 0) {
 VAR_4[VAR_6++] = VAR_5;
 FUNC_0(VAR_3, ("Adding termpath %s", VAR_5));
    }
    VAR_4[VAR_6] = 0;
    if (VAR_7 != 0)
 *VAR_7 = VAR_1;
    return VAR_6;
}
