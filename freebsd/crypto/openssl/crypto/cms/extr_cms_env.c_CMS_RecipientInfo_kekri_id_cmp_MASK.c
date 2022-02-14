
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {unsigned char* data; int length; scalar_t__ flags; int type; } ;
struct TYPE_11__ {TYPE_1__* kekid; } ;
struct TYPE_9__ {TYPE_4__* kekri; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_8__ {int keyIdentifier; } ;
typedef TYPE_3__ CMS_RecipientInfo ;
typedef TYPE_4__ CMS_KEKRecipientInfo ;
typedef TYPE_5__ ASN1_OCTET_STRING ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

int FUNC_2(CMS_RecipientInfo *VAR_4,
                                   const unsigned char *VAR_5, size_t VAR_6)
{
    ASN1_OCTET_STRING VAR_7;
    CMS_KEKRecipientInfo *VAR_8;
    if (VAR_4->type != VAR_1) {
        FUNC_1(VAR_0, VAR_2);
        return -2;
    }
    VAR_8 = VAR_4->d.kekri;
    VAR_7.type = VAR_3;
    VAR_7.flags = 0;
    VAR_7.data = (unsigned char *)VAR_5;
    VAR_7.length = (int)VAR_6;
    return FUNC_0(&VAR_7, VAR_8->kekid->keyIdentifier);
}
