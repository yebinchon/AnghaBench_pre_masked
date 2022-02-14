
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ntlm_targetinfo {int avflags; int dnstreename; int dnsdomainname; int dnsservername; int domainname; int servername; } ;
struct ntlm_buf {scalar_t__ length; int data; } ;
typedef int krb5_storage ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct ntlm_targetinfo*,int ,int) ;
 int FUNC_8 (int *,int,int,int *) ;

int
FUNC_9(const struct ntlm_buf *VAR_3,
       int VAR_4,
       struct ntlm_targetinfo *VAR_5)
{
    uint16_t VAR_6, VAR_7;
    krb5_storage *VAR_8;
    int VAR_9 = 0, VAR_10 = 0;

    FUNC_7(VAR_5, 0, sizeof(*VAR_5));

    if (VAR_3->length == 0)
 return 0;

    VAR_8 = FUNC_4(VAR_3->data, VAR_3->length);
    if (VAR_8 == ((void*)0))
 return VAR_0;
    FUNC_6(VAR_8, VAR_1);

    while (!VAR_10) {
 FUNC_0(FUNC_1(VAR_8, &VAR_6), 0);
 FUNC_0(FUNC_1(VAR_8, &VAR_7), 0);

 switch (VAR_6) {
 case 0:
     VAR_10 = 1;
     break;
 case 1:
     FUNC_0(FUNC_8(VAR_8, VAR_4, VAR_7, &VAR_5->servername), 0);
     break;
 case 2:
     FUNC_0(FUNC_8(VAR_8, VAR_4, VAR_7, &VAR_5->domainname), 0);
     break;
 case 3:
     FUNC_0(FUNC_8(VAR_8, VAR_4, VAR_7, &VAR_5->dnsservername), 0);
     break;
 case 4:
     FUNC_0(FUNC_8(VAR_8, VAR_4, VAR_7, &VAR_5->dnsdomainname), 0);
     break;
 case 5:
     FUNC_0(FUNC_8(VAR_8, VAR_4, VAR_7, &VAR_5->dnstreename), 0);
     break;
 case 6:
     FUNC_0(FUNC_2(VAR_8, &VAR_5->avflags), 0);
     break;
 default:
     FUNC_5(VAR_8, VAR_7, VAR_2);
     break;
 }
    }
 out:
    if (VAR_8)
 FUNC_3(VAR_8);
    return VAR_9;
}
