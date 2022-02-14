
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ntlm_targetinfo {int avflags; int dnstreename; int dnsdomainname; int dnsservername; int domainname; int servername; } ;
struct ntlm_buf {scalar_t__ length; int * data; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_3__ {scalar_t__ length; int * data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(const struct ntlm_targetinfo *VAR_2,
       int VAR_3,
       struct ntlm_buf *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_storage *VAR_6;

    VAR_4->data = ((void*)0);
    VAR_4->length = 0;

    VAR_6 = FUNC_2();
    if (VAR_6 == ((void*)0))
 return VAR_0;

    FUNC_4(VAR_6, VAR_1);

    if (VAR_2->servername)
 FUNC_0(FUNC_1(VAR_6, 1, VAR_3, VAR_2->servername), 0);
    if (VAR_2->domainname)
 FUNC_0(FUNC_1(VAR_6, 2, VAR_3, VAR_2->domainname), 0);
    if (VAR_2->dnsservername)
 FUNC_0(FUNC_1(VAR_6, 3, VAR_3, VAR_2->dnsservername), 0);
    if (VAR_2->dnsdomainname)
 FUNC_0(FUNC_1(VAR_6, 4, VAR_3, VAR_2->dnsdomainname), 0);
    if (VAR_2->dnstreename)
 FUNC_0(FUNC_1(VAR_6, 5, VAR_3, VAR_2->dnstreename), 0);
    if (VAR_2->avflags) {
 FUNC_0(FUNC_7(VAR_6, 6), 0);
 FUNC_0(FUNC_7(VAR_6, 4), 0);
 FUNC_0(FUNC_8(VAR_6, VAR_2->avflags), 0);
    }


    FUNC_0(FUNC_6(VAR_6, 0), 0);
    FUNC_0(FUNC_6(VAR_6, 0), 0);

    {
 krb5_data VAR_7;
 VAR_5 = FUNC_5(VAR_6, &VAR_7);
 VAR_4->data = VAR_7.data;
 VAR_4->length = VAR_7.length;
    }
out:
    FUNC_3(VAR_6);
    return VAR_5;
}
