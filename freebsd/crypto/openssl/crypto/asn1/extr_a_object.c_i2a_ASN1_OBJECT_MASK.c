
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {int length; int * data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,TYPE_1__ const*) ;

int FUNC_6(BIO *VAR_2, const ASN1_OBJECT *VAR_3)
{
    char VAR_4[80], *VAR_5 = VAR_4;
    int VAR_6;

    if ((VAR_3 == ((void*)0)) || (VAR_3->data == ((void*)0)))
        return FUNC_2(VAR_2, "NULL", 4);
    VAR_6 = FUNC_5(VAR_4, sizeof(VAR_4), VAR_3);
    if (VAR_6 > (int)(sizeof(VAR_4) - 1)) {
        if ((VAR_5 = FUNC_4(VAR_6 + 1)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return -1;
        }
        FUNC_5(VAR_5, VAR_6 + 1, VAR_3);
    }
    if (VAR_6 <= 0) {
        VAR_6 = FUNC_2(VAR_2, "<INVALID>", 9);
        VAR_6 += FUNC_1(VAR_2, (const char *)VAR_3->data, VAR_3->length);
        return VAR_6;
    }
    FUNC_2(VAR_2, VAR_5, VAR_6);
    if (VAR_5 != VAR_4)
        FUNC_3(VAR_5);
    return VAR_6;
}
