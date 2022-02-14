
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_9__ {int subjectKeyIdentifier; int issuerAndSerialNumber; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__ d; } ;
struct TYPE_8__ {TYPE_1__* kari; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_7__ {TYPE_5__* originator; } ;
typedef TYPE_4__ CMS_RecipientInfo ;
typedef TYPE_5__ CMS_OriginatorIdentifierOrKey ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(CMS_RecipientInfo *VAR_5, X509 *VAR_6)
{
    CMS_OriginatorIdentifierOrKey *VAR_7;
    if (VAR_5->type != VAR_3) {
        FUNC_0(VAR_0,
               VAR_4);
        return -2;
    }
    VAR_7 = VAR_5->d.kari->originator;
    if (VAR_7->type == VAR_1)
        return FUNC_1(VAR_7->d.issuerAndSerialNumber, VAR_6);
    else if (VAR_7->type == VAR_2)
        return FUNC_2(VAR_7->d.subjectKeyIdentifier, VAR_6);
    return -1;
}
