
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int z ;
struct TYPE_4__ {char const* pzRcName; int pzProgName; } ;
typedef TYPE_1__ tOptions ;
struct stat {void* st_mode; } ;


 scalar_t__ FUNC_0 (size_t,char*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_5 ;
 char* FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_8 (char*,char*,char const*,char*) ;
 scalar_t__ FUNC_9 (char const*,struct stat*) ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (char const*,int ) ;
 int FUNC_13 (char const*) ;
 char* VAR_7 ;
 char* VAR_8 ;

__attribute__((used)) static char const *
FUNC_14(tOptions * VAR_9, int * VAR_10)
{
    struct stat VAR_11;
    int VAR_12 = 0;

    char const * VAR_13 = FUNC_4(VAR_9, &VAR_12);
    if (VAR_13 == ((void*)0))
        return ((void*)0);





    if (FUNC_9(VAR_13, &VAR_11) != 0) do {
        char VAR_14[VAR_0];
        char * VAR_15;





        if (VAR_5 != VAR_2) {
        bogus_name:
            FUNC_5(VAR_6, VAR_8, VAR_9->pzProgName);
            FUNC_5(VAR_6, VAR_7, VAR_5, FUNC_10(VAR_5), VAR_13);
            if (VAR_12)
                FUNC_1(VAR_13);
            return ((void*)0);
        }





        VAR_15 = FUNC_12(VAR_13, VAR_1);
        if (VAR_15 == ((void*)0)) {
            VAR_11.st_mode = VAR_4;
            break;
        }

        if ((size_t)(VAR_15 - VAR_13) >= sizeof(VAR_14))
            goto bogus_name;

        FUNC_6(VAR_14, VAR_13, (size_t)(VAR_15 - VAR_13));
        VAR_14[VAR_15 - VAR_13] = VAR_3;

        if ((FUNC_9(VAR_14, &VAR_11) != 0) || ! FUNC_2(VAR_11.st_mode))
            goto bogus_name;
        VAR_11.st_mode = VAR_4;
    } while (0);





    if (FUNC_2(VAR_11.st_mode)) {
        size_t VAR_16 = FUNC_11(VAR_13) + FUNC_11(VAR_9->pzRcName) + 2;

        {
            char * VAR_17 = (char *)FUNC_0(VAR_16, "file name");



            FUNC_8(VAR_17, "%s/%s", VAR_13, VAR_9->pzRcName);

            if (VAR_12)
                FUNC_1(VAR_13);
            VAR_13 = VAR_17;
            VAR_12 = 1;
        }





        if (FUNC_9(VAR_13, &VAR_11) != 0) {
            if (VAR_5 != VAR_2) {
                FUNC_5(VAR_6, VAR_8, VAR_9->pzProgName);
                FUNC_5(VAR_6, VAR_7, VAR_5, FUNC_10(VAR_5),
                        VAR_13);
                FUNC_1(VAR_13);
                return ((void*)0);
            }




            VAR_11.st_mode = VAR_4;
        }
    }





    if (! FUNC_3(VAR_11.st_mode)) {
        FUNC_5(VAR_6, VAR_8, VAR_9->pzProgName, VAR_13);
        if (VAR_12)
            FUNC_1(VAR_13);
        return ((void*)0);
    }




    FUNC_13(VAR_13);
    *VAR_10 = VAR_12;
    return VAR_13;
}
