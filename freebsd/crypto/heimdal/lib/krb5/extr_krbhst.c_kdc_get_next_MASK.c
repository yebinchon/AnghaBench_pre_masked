
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct krb5_krbhst_data {int flags; int realm; int def_port; } ;
typedef int krb5_krbhst_info ;
typedef scalar_t__ krb5_error_code ;
typedef TYPE_1__* krb5_context ;
struct TYPE_8__ {scalar_t__ srv_lookup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__*,int,char*,int ) ;
 int FUNC_1 (TYPE_1__*,struct krb5_krbhst_data*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct krb5_krbhst_data*,char*,int ,int ) ;
 scalar_t__ FUNC_3 (struct krb5_krbhst_data*,int **) ;
 int FUNC_4 (struct krb5_krbhst_data*) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*,struct krb5_krbhst_data*,int ) ;
 int FUNC_6 (TYPE_1__*,struct krb5_krbhst_data*,char*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_10,
      struct krb5_krbhst_data *VAR_11,
      krb5_krbhst_info **VAR_12)
{
    krb5_error_code VAR_13;

    if ((VAR_11->flags & VAR_4) == 0) {
 FUNC_5(VAR_10, VAR_11, VAR_9);
 VAR_11->flags |= VAR_4;
 if(FUNC_3(VAR_11, VAR_12))
     return 0;
    }

    if((VAR_11->flags & VAR_0) == 0) {
 FUNC_1(VAR_10, VAR_11, "kdc");
 VAR_11->flags |= VAR_0;
 if(FUNC_3(VAR_11, VAR_12))
     return 0;
    }

    if (VAR_11->flags & VAR_1) {
 FUNC_0(VAR_10, 1,
      "Configuration exists for realm %s, wont go to DNS",
      VAR_11->realm);
 return VAR_8;
    }

    if(VAR_10->srv_lookup) {
 if((VAR_11->flags & VAR_7) == 0 && (VAR_11->flags & VAR_3) == 0) {
     FUNC_6(VAR_10, VAR_11, "udp", "kerberos");
     VAR_11->flags |= VAR_7;
     if(FUNC_3(VAR_11, VAR_12))
  return 0;
 }

 if((VAR_11->flags & VAR_6) == 0) {
     FUNC_6(VAR_10, VAR_11, "tcp", "kerberos");
     VAR_11->flags |= VAR_6;
     if(FUNC_3(VAR_11, VAR_12))
  return 0;
 }
 if((VAR_11->flags & VAR_5) == 0) {
     FUNC_6(VAR_10, VAR_11, "http", "kerberos");
     VAR_11->flags |= VAR_5;
     if(FUNC_3(VAR_11, VAR_12))
  return 0;
 }
    }

    while((VAR_11->flags & VAR_2) == 0) {
 VAR_13 = FUNC_2(VAR_10, VAR_11, "kerberos",
     VAR_11->def_port,
     FUNC_4(VAR_11));
 if(VAR_13)
     return VAR_13;
 if(FUNC_3(VAR_11, VAR_12))
     return 0;
    }

    FUNC_0(VAR_10, 0, "No KDC entries found for %s", VAR_11->realm);

    return VAR_8;
}
