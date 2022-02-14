
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct descr {unsigned long addr_string; int sock_len; int sa; int s; } ;
typedef int l ;
typedef int krb5_kdc_configuration ;
struct TYPE_3__ {int length; unsigned char* data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;


 int FUNC_0 (int ,int *,int,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,unsigned char*,int,int ,int ,int ) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_1,
    krb5_kdc_configuration *VAR_2,
    krb5_boolean VAR_3,
    struct descr *VAR_4,
    krb5_data *VAR_5)
{
    FUNC_0(VAR_1, VAR_2, 5,
     "sending %lu bytes to %s", (unsigned long)VAR_5->length,
     VAR_4->addr_string);
    if(VAR_3){
 unsigned char VAR_6[4];
 VAR_6[0] = (VAR_5->length >> 24) & 0xff;
 VAR_6[1] = (VAR_5->length >> 16) & 0xff;
 VAR_6[2] = (VAR_5->length >> 8) & 0xff;
 VAR_6[3] = VAR_5->length & 0xff;
 if(FUNC_1(FUNC_2(VAR_4->s, VAR_6, sizeof(VAR_6), 0, VAR_4->sa, VAR_4->sock_len))) {
     FUNC_0 (VAR_1, VAR_2,
       0, "sendto(%s): %s", VAR_4->addr_string,
       FUNC_3(VAR_0));
     return;
 }
    }
    if(FUNC_1(FUNC_2(VAR_4->s, VAR_5->data, VAR_5->length, 0, VAR_4->sa, VAR_4->sock_len))) {
 FUNC_0 (VAR_1, VAR_2, 0, "sendto(%s): %s", VAR_4->addr_string,
   FUNC_3(VAR_0));
 return;
    }
}
