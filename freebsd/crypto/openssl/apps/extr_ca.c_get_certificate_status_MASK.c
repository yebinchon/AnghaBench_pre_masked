
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ CA_DB ;


 int FUNC_0 (int ,char*,char*,...) ;
 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (int ,size_t,char**) ;
 char* FUNC_3 (size_t,char*) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_8, CA_DB *VAR_9)
{
    char *VAR_10[VAR_0], **VAR_11;
    int VAR_12 = -1, VAR_13;
    size_t VAR_14 = FUNC_6(VAR_8);


    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
        VAR_10[VAR_13] = ((void*)0);


    VAR_10[VAR_5] = FUNC_3(VAR_14 + 2, "row serial#");

    if (VAR_14 % 2) {



        VAR_10[VAR_5][0] = '0';


        FUNC_5(VAR_10[VAR_5] + 1, VAR_8, VAR_14);
        VAR_10[VAR_5][VAR_14 + 1] = '\0';
    } else {

        FUNC_5(VAR_10[VAR_5], VAR_8, VAR_14);
        VAR_10[VAR_5][VAR_14] = '\0';
    }


    FUNC_4(VAR_10[VAR_5]);

    VAR_12 = 1;


    VAR_11 = FUNC_2(VAR_9->db, VAR_5, VAR_10);
    if (VAR_11 == ((void*)0)) {
        FUNC_0(VAR_7, "Serial %s not present in db.\n", VAR_10[VAR_5]);
        VAR_12 = -1;
        goto end;
    } else if (VAR_11[VAR_6][0] == VAR_4) {
        FUNC_0(VAR_7, "%s=Valid (%c)\n",
                   VAR_10[VAR_5], VAR_11[VAR_6][0]);
        goto end;
    } else if (VAR_11[VAR_6][0] == VAR_2) {
        FUNC_0(VAR_7, "%s=Revoked (%c)\n",
                   VAR_10[VAR_5], VAR_11[VAR_6][0]);
        goto end;
    } else if (VAR_11[VAR_6][0] == VAR_1) {
        FUNC_0(VAR_7, "%s=Expired (%c)\n",
                   VAR_10[VAR_5], VAR_11[VAR_6][0]);
        goto end;
    } else if (VAR_11[VAR_6][0] == VAR_3) {
        FUNC_0(VAR_7, "%s=Suspended (%c)\n",
                   VAR_10[VAR_5], VAR_11[VAR_6][0]);
        goto end;
    } else {
        FUNC_0(VAR_7, "%s=Unknown (%c).\n",
                   VAR_10[VAR_5], VAR_11[VAR_6][0]);
        VAR_12 = -1;
    }
 end:
    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        FUNC_1(VAR_10[VAR_13]);
    }
    return VAR_12;
}
