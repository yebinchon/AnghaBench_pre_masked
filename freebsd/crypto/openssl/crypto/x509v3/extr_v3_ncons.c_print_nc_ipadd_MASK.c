
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; int length; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, ASN1_OCTET_STRING *VAR_1)
{
    int VAR_2, VAR_3;
    unsigned char *VAR_4;
    VAR_4 = VAR_1->data;
    VAR_3 = VAR_1->length;
    FUNC_1(VAR_0, "IP:");
    if (VAR_3 == 8) {
        FUNC_0(VAR_0, "%d.%d.%d.%d/%d.%d.%d.%d",
                   VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5], VAR_4[6], VAR_4[7]);
    } else if (VAR_3 == 32) {
        for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
            FUNC_0(VAR_0, "%X", VAR_4[0] << 8 | VAR_4[1]);
            VAR_4 += 2;
            if (VAR_2 == 7)
                FUNC_1(VAR_0, "/");
            else if (VAR_2 != 15)
                FUNC_1(VAR_0, ":");
        }
    } else
        FUNC_0(VAR_0, "IP Address:<invalid>");
    return 1;
}
