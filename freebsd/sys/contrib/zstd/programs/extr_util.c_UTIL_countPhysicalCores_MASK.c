
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const* const) ;
 int FUNC_1 (int * const) ;
 int FUNC_2 (int * const) ;
 scalar_t__ FUNC_3 (int * const) ;
 int * FUNC_4 (char*,int,int * const) ;
 int * FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(void)
{
    static int VAR_2 = 0;

    if (VAR_2 != 0) return VAR_2;

    VAR_2 = (int)FUNC_8(VAR_1);
    if (VAR_2 == -1) {

        return VAR_2 = 1;
    }


    { FILE* const VAR_3 = FUNC_5("/proc/cpuinfo", "r");

        char VAR_4[80];

        int VAR_5 = 0;
        int VAR_6 = 0;
        int VAR_7 = 1;

        if (VAR_3 == ((void*)0)) {

            return VAR_2;
        }



        while (!FUNC_2(VAR_3)) {
            if (FUNC_4(VAR_4, 80, VAR_3) != ((void*)0)) {
                if (FUNC_7(VAR_4, "siblings", 8) == 0) {
                    const char* const VAR_8 = FUNC_6(VAR_4, ':');
                    if (VAR_8 == ((void*)0) || *VAR_8 == '\0') {

                        goto failed;
                    }

                    VAR_5 = FUNC_0(VAR_8 + 1);
                }
                if (FUNC_7(VAR_4, "cpu cores", 9) == 0) {
                    const char* const VAR_9 = FUNC_6(VAR_4, ':');
                    if (VAR_9 == ((void*)0) || *VAR_9 == '\0') {

                        goto failed;
                    }

                    VAR_6 = FUNC_0(VAR_9 + 1);
                }
            } else if (FUNC_3(VAR_3)) {

                goto failed;
            }
        }
        if (VAR_5 && VAR_6) {
            VAR_7 = VAR_5 / VAR_6;
        }
failed:
        FUNC_1(VAR_3);
        return VAR_2 = VAR_2 / VAR_7;
    }
}
