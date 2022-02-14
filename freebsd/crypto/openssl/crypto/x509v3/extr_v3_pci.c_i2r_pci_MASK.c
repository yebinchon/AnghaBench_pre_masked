
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_7__ {TYPE_2__* proxyPolicy; scalar_t__ pcPathLengthConstraint; } ;
struct TYPE_6__ {TYPE_1__* policy; int policyLanguage; } ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_3__ PROXY_CERT_INFO_EXTENSION ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(X509V3_EXT_METHOD *VAR_0, PROXY_CERT_INFO_EXTENSION *VAR_1,
                   BIO *VAR_2, int VAR_3)
{
    FUNC_0(VAR_2, "%*sPath Length Constraint: ", VAR_3, "");
    if (VAR_1->pcPathLengthConstraint)
        FUNC_2(VAR_2, VAR_1->pcPathLengthConstraint);
    else
        FUNC_0(VAR_2, "infinite");
    FUNC_1(VAR_2, "\n");
    FUNC_0(VAR_2, "%*sPolicy Language: ", VAR_3, "");
    FUNC_3(VAR_2, VAR_1->proxyPolicy->policyLanguage);
    FUNC_1(VAR_2, "\n");
    if (VAR_1->proxyPolicy->policy && VAR_1->proxyPolicy->policy->data)
        FUNC_0(VAR_2, "%*sPolicy Text: %s\n", VAR_3, "",
                   VAR_1->proxyPolicy->policy->data);
    return 1;
}
