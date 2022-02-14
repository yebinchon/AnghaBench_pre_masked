
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned char* data; } ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 unsigned char* FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(ASN1_STRING *VAR_2, const void *VAR_3, int VAR_4)
{
    unsigned char *VAR_5;
    const char *VAR_6 = VAR_3;

    if (VAR_4 < 0) {
        if (VAR_6 == ((void*)0))
            return 0;
        else
            VAR_4 = FUNC_3(VAR_6);
    }
    if ((VAR_2->length <= VAR_4) || (VAR_2->data == ((void*)0))) {
        VAR_5 = VAR_2->data;
        VAR_2->data = FUNC_1(VAR_5, VAR_4 + 1);
        if (VAR_2->data == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            VAR_2->data = VAR_5;
            return 0;
        }
    }
    VAR_2->length = VAR_4;
    if (VAR_6 != ((void*)0)) {
        FUNC_2(VAR_2->data, VAR_6, VAR_4);

        VAR_2->data[VAR_4] = '\0';
    }
    return 1;
}
