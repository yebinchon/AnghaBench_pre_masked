
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_5()
{
    uint32_t VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    register_t VAR_12;

    VAR_10 = VAR_0;
    VAR_8 = VAR_9 = 0;


    VAR_12 = FUNC_2();
    VAR_5 = FUNC_1();
    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
 VAR_6 = FUNC_1();
 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (VAR_7 > VAR_8) {
     VAR_9 = VAR_8;
     VAR_8 = VAR_7;
 } else if (VAR_7 > VAR_9)
     VAR_9 = VAR_7;
 if (VAR_7 < VAR_10)
     VAR_10 = VAR_7;
 VAR_5 = VAR_6;
    }
    FUNC_3(VAR_12);

    VAR_7 = VAR_9 - VAR_10;
    if ((VAR_8 - VAR_10 > 8 || VAR_7 > 3) && VAR_4 == VAR_2)
 VAR_11 = 0;
    else if (VAR_10 < 0 || VAR_8 == 0 || VAR_9 == 0)
 VAR_11 = 0;
    else
 VAR_11 = 1;
    if (VAR_3)
 FUNC_4(" %d/%d", VAR_11, VAR_7);

    return (VAR_11);
}
