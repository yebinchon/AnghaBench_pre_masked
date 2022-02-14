
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ CA_DB ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 (int *,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 char** FUNC_7 (int ,size_t,char**) ;

__attribute__((used)) static char **FUNC_8(CA_DB *VAR_2, ASN1_INTEGER *VAR_3)
{
    int VAR_4;
    BIGNUM *VAR_5 = ((void*)0);
    char *VAR_6, *VAR_7[VAR_0], **VAR_8;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        VAR_7[VAR_4] = ((void*)0);
    VAR_5 = FUNC_0(VAR_3, ((void*)0));
    FUNC_4(VAR_5);

    if (FUNC_3(VAR_5))
        VAR_6 = FUNC_6("00");
    else
        VAR_6 = FUNC_1(VAR_5);
    VAR_7[VAR_1] = VAR_6;
    FUNC_2(VAR_5);
    VAR_8 = FUNC_7(VAR_2->db, VAR_1, VAR_7);
    FUNC_5(VAR_6);
    return VAR_8;
}
