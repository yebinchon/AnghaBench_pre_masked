
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int contentType; } ;
typedef TYPE_1__ CMS_ContentInfo ;
typedef int BIO ;
typedef TYPE_2__ ASN1_OCTET_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ) ;
 long FUNC_2 (int *,unsigned char**) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__** FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;






 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;

int FUNC_10(CMS_ContentInfo *VAR_6, BIO *VAR_7)
{
    ASN1_OCTET_STRING **VAR_8 = FUNC_5(VAR_6);
    if (!VAR_8)
        return 0;

    if (*VAR_8 && ((*VAR_8)->flags & VAR_0)) {
        BIO *VAR_9;
        unsigned char *VAR_10;
        long VAR_11;
        VAR_9 = FUNC_1(VAR_7, VAR_2);
        if (!VAR_9) {
            FUNC_6(VAR_3, VAR_4);
            return 0;
        }
        VAR_11 = FUNC_2(VAR_9, &VAR_10);

        FUNC_3(VAR_9, VAR_1);
        FUNC_4(VAR_9, 0);
        FUNC_0(*VAR_8, VAR_10, VAR_11);
        (*VAR_8)->flags &= ~VAR_0;
    }

    switch (FUNC_7(VAR_6->contentType)) {

    case 132:
    case 129:
    case 130:
    case 133:

        return 1;

    case 128:
        return FUNC_9(VAR_6, VAR_7);

    case 131:
        return FUNC_8(VAR_6, VAR_7, 0);

    default:
        FUNC_6(VAR_3, VAR_5);
        return 0;
    }
}
