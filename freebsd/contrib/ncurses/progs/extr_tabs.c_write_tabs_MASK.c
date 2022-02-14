
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(int *VAR_2)
{
    int VAR_3;

    while ((VAR_3 = *VAR_2++) > 0 && VAR_3 <= VAR_0) {
 FUNC_0((VAR_3 == 1) ? "*" : "\t*", VAR_1);
    };

    if (VAR_3 < VAR_0)
 FUNC_0("\t+", VAR_1);
    FUNC_1('\n');
}
