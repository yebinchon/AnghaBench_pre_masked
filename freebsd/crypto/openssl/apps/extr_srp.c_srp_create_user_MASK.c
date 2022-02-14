
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int password ;
struct TYPE_3__ {char* prompt_info; char* password; } ;
typedef TYPE_1__ PW_CB_DATA ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,char*,char**,char**,char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,int,TYPE_1__*) ;

__attribute__((used)) static char *FUNC_4(char *VAR_1, char **VAR_2,
                             char **VAR_3, char *VAR_4, char *VAR_5,
                             char *VAR_6, int VAR_7)
{
    char VAR_8[1025];
    PW_CB_DATA VAR_9;
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    int VAR_12;
    VAR_9.prompt_info = VAR_1;
    VAR_9.password = VAR_6;

    VAR_12 = FUNC_3(VAR_8, sizeof(VAR_8)-1, 1, &VAR_9);
    if (VAR_12 > 0) {
        VAR_8[VAR_12] = 0;
        if (VAR_7)
            FUNC_0(VAR_0, "Creating\n user=\"%s\"\n g=\"%s\"\n N=\"%s\"\n",
                       VAR_1, VAR_4, VAR_5);
        if ((VAR_10 = FUNC_2(VAR_1, VAR_8, &VAR_11,
                                        VAR_2, VAR_5, VAR_4)) == ((void*)0)) {
            FUNC_0(VAR_0, "Internal error creating SRP verifier\n");
        } else {
            *VAR_3 = VAR_11;
        }
        FUNC_1(VAR_8, VAR_12);
        if (VAR_7 > 1)
            FUNC_0(VAR_0, "gNid=%s salt =\"%s\"\n verifier =\"%s\"\n",
                       VAR_10, VAR_11, *VAR_2);

    }
    return VAR_10;
}
