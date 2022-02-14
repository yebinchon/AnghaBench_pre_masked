
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ex_pathlen; int ex_pcpathlen; int * rfc3779_asid; int * rfc3779_addr; int * nc; int * altname; int * policy_cache; int * crldp; int * akid; int * skid; int * aux; int ex_data; int ex_flags; int ex_nscert; int ex_xkusage; int ex_kusage; int ex_cached; } ;
typedef TYPE_1__ X509 ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;



 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(int VAR_2, ASN1_VALUE **VAR_3, const ASN1_ITEM *VAR_4,
                   void *VAR_5)
{
    X509 *VAR_6 = (X509 *)*VAR_3;

    switch (VAR_2) {

    case 130:
        FUNC_4(VAR_0, VAR_6, &VAR_6->ex_data);
        FUNC_8(VAR_6->aux);
        FUNC_1(VAR_6->skid);
        FUNC_2(VAR_6->akid);
        FUNC_3(VAR_6->crldp);
        FUNC_9(VAR_6->policy_cache);
        FUNC_6(VAR_6->altname);
        FUNC_7(VAR_6->nc);

        FUNC_10(VAR_6->rfc3779_addr, VAR_1);
        FUNC_0(VAR_6->rfc3779_asid);




    case 128:
        VAR_6->ex_cached = 0;
        VAR_6->ex_kusage = 0;
        VAR_6->ex_xkusage = 0;
        VAR_6->ex_nscert = 0;
        VAR_6->ex_flags = 0;
        VAR_6->ex_pathlen = -1;
        VAR_6->ex_pcpathlen = -1;
        VAR_6->skid = ((void*)0);
        VAR_6->akid = ((void*)0);
        VAR_6->policy_cache = ((void*)0);
        VAR_6->altname = ((void*)0);
        VAR_6->nc = ((void*)0);

        VAR_6->rfc3779_addr = ((void*)0);
        VAR_6->rfc3779_asid = ((void*)0);

        VAR_6->aux = ((void*)0);
        VAR_6->crldp = ((void*)0);
        if (!FUNC_5(VAR_0, VAR_6, &VAR_6->ex_data))
            return 0;
        break;

    case 129:
        FUNC_4(VAR_0, VAR_6, &VAR_6->ex_data);
        FUNC_8(VAR_6->aux);
        FUNC_1(VAR_6->skid);
        FUNC_2(VAR_6->akid);
        FUNC_3(VAR_6->crldp);
        FUNC_9(VAR_6->policy_cache);
        FUNC_6(VAR_6->altname);
        FUNC_7(VAR_6->nc);

        FUNC_10(VAR_6->rfc3779_addr, VAR_1);
        FUNC_0(VAR_6->rfc3779_asid);

        break;

    }

    return 1;

}
