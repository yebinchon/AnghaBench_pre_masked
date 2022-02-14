
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 int FUNC_0 (char*,int,char*,char,scalar_t__,int,int) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,int ) ;
 int FUNC_3 (void**,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
    int VAR_3 = (int)(FUNC_6() % 100);
    int VAR_4 = VAR_3 < VAR_1;


    int VAR_5;
    char VAR_6[80];

    if (VAR_2 > 0) {
        FUNC_0(VAR_6, sizeof(VAR_6),
                     "%c C%ld %%%d R%d\n",
                     VAR_4 ? '-' : '+', VAR_0, VAR_1, VAR_3);
        VAR_5 = FUNC_7(VAR_6);
        if (FUNC_8(VAR_2, VAR_6, VAR_5) != VAR_5)
            FUNC_5("shouldfail write failed");

        if (VAR_4) {
            void *VAR_7[30];
            int VAR_8 = FUNC_2(VAR_7, FUNC_1(VAR_7));

            FUNC_3(VAR_7, VAR_8, VAR_2);
        }

    }


    if (VAR_0) {

        if (--VAR_0 == 0)
            FUNC_4();
    }

    return VAR_4;
}
