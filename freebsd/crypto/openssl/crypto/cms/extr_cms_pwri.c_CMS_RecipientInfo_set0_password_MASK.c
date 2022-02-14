
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ossl_ssize_t ;
struct TYPE_7__ {unsigned char* pass; scalar_t__ passlen; } ;
struct TYPE_5__ {TYPE_3__* pwri; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ d; } ;
typedef TYPE_2__ CMS_RecipientInfo ;
typedef TYPE_3__ CMS_PasswordRecipientInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2(CMS_RecipientInfo *VAR_3,
                                    unsigned char *VAR_4, ossl_ssize_t VAR_5)
{
    CMS_PasswordRecipientInfo *VAR_6;
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    VAR_6 = VAR_3->d.pwri;
    VAR_6->pass = VAR_4;
    if (VAR_4 && VAR_5 < 0)
        VAR_5 = FUNC_1((char *)VAR_4);
    VAR_6->passlen = VAR_5;
    return 1;
}
