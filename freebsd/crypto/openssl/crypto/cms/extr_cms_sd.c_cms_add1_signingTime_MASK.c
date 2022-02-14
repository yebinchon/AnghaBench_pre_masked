
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
typedef int CMS_SignerInfo ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(CMS_SignerInfo *VAR_3, ASN1_TIME *VAR_4)
{
    ASN1_TIME *VAR_5;
    int VAR_6 = 0;
    if (VAR_4)
        VAR_5 = VAR_4;
    else
        VAR_5 = FUNC_3(((void*)0), 0);

    if (!VAR_5)
        goto merr;

    if (FUNC_1(VAR_3, VAR_2,
                                    VAR_5->type, VAR_5, -1) <= 0)
        goto merr;

    VAR_6 = 1;

 merr:

    if (!VAR_4)
        FUNC_0(VAR_5);

    if (!VAR_6)
        FUNC_2(VAR_0, VAR_1);

    return VAR_6;

}
