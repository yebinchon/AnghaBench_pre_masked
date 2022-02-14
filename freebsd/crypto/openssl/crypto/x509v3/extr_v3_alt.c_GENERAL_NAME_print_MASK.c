
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rid; TYPE_1__* ip; int dirn; int ia5; } ;
struct TYPE_7__ {int type; TYPE_2__ d; } ;
struct TYPE_5__ {unsigned char* data; int length; } ;
typedef TYPE_3__ GENERAL_NAME ;
typedef int BIO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(BIO *VAR_1, GENERAL_NAME *VAR_2)
{
    unsigned char *VAR_3;
    int VAR_4;
    switch (VAR_2->type) {
    case 131:
        FUNC_1(VAR_1, "othername:<unsupported>");
        break;

    case 128:
        FUNC_1(VAR_1, "X400Name:<unsupported>");
        break;

    case 134:

        FUNC_1(VAR_1, "EdiPartyName:<unsupported>");
        break;

    case 133:
        FUNC_1(VAR_1, "email:");
        FUNC_0(VAR_1, VAR_2->d.ia5);
        break;

    case 135:
        FUNC_1(VAR_1, "DNS:");
        FUNC_0(VAR_1, VAR_2->d.ia5);
        break;

    case 129:
        FUNC_1(VAR_1, "URI:");
        FUNC_0(VAR_1, VAR_2->d.ia5);
        break;

    case 136:
        FUNC_1(VAR_1, "DirName:");
        FUNC_3(VAR_1, VAR_2->d.dirn, 0, VAR_0);
        break;

    case 132:
        VAR_3 = VAR_2->d.ip->data;
        if (VAR_2->d.ip->length == 4)
            FUNC_1(VAR_1, "IP Address:%d.%d.%d.%d", VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);
        else if (VAR_2->d.ip->length == 16) {
            FUNC_1(VAR_1, "IP Address");
            for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
                FUNC_1(VAR_1, ":%X", VAR_3[0] << 8 | VAR_3[1]);
                VAR_3 += 2;
            }
            FUNC_2(VAR_1, "\n");
        } else {
            FUNC_1(VAR_1, "IP Address:<invalid>");
            break;
        }
        break;

    case 130:
        FUNC_1(VAR_1, "Registered ID:");
        FUNC_4(VAR_1, VAR_2->d.rid);
        break;
    }
    return 1;
}
