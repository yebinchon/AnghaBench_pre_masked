
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iPAddress; int uniformResourceIdentifier; int rfc822Name; int dNSName; int directoryName; } ;
struct TYPE_6__ {int type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;







 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(GENERAL_NAME *VAR_1, GENERAL_NAME *VAR_2)
{
    switch (VAR_2->type) {
    case 132:
        return FUNC_0(VAR_1->d.directoryName, VAR_2->d.directoryName);

    case 131:
        return FUNC_1(VAR_1->d.dNSName, VAR_2->d.dNSName);

    case 130:
        return FUNC_2(VAR_1->d.rfc822Name, VAR_2->d.rfc822Name);

    case 128:
        return FUNC_4(VAR_1->d.uniformResourceIdentifier,
                      VAR_2->d.uniformResourceIdentifier);

    case 129:
        return FUNC_3(VAR_1->d.iPAddress, VAR_2->d.iPAddress);

    default:
        return VAR_0;
    }

}
