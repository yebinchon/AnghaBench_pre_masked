
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ enable_kx509; } ;
typedef TYPE_1__ krb5_kdc_configuration ;
typedef int krb5_context ;


 int FUNC_0 (int ,int,char*,int,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (krb5_context VAR_1,
      krb5_kdc_configuration *VAR_2,
      int VAR_3)
{
    FUNC_0(VAR_1, VAR_3, "kerberos", 88, "udp");
    FUNC_0(VAR_1, VAR_3, "kerberos", 88, "tcp");
    FUNC_0(VAR_1, VAR_3, "kerberos-sec", 88, "udp");
    FUNC_0(VAR_1, VAR_3, "kerberos-sec", 88, "tcp");
    if(VAR_0)
 FUNC_0(VAR_1, VAR_3, "http", 80, "tcp");
    if(VAR_2->enable_kx509) {
 FUNC_0(VAR_1, VAR_3, "kca_service", 9878, "udp");
 FUNC_0(VAR_1, VAR_3, "kca_service", 9878, "tcp");
    }

}
