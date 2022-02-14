
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct krb5_krbhst_data {int flags; scalar_t__ (* get_next ) (TYPE_2__*,struct krb5_krbhst_data*,TYPE_1__**) ;int realm; int def_port; int port; } ;
struct TYPE_14__ {int proto; } ;
typedef TYPE_1__ krb5_krbhst_info ;
typedef scalar_t__ krb5_error_code ;
typedef TYPE_2__* krb5_context ;
struct TYPE_15__ {scalar_t__ srv_lookup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct krb5_krbhst_data*,TYPE_1__**) ;
 int FUNC_2 (TYPE_2__*,struct krb5_krbhst_data*,char*) ;
 scalar_t__ FUNC_3 (struct krb5_krbhst_data*,TYPE_1__**) ;
 scalar_t__ FUNC_4 (struct krb5_krbhst_data*) ;
 int FUNC_5 (struct krb5_krbhst_data*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,struct krb5_krbhst_data*,int ) ;
 int FUNC_7 (TYPE_2__*,struct krb5_krbhst_data*,char*,char*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct krb5_krbhst_data*,TYPE_1__**) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_7,
   struct krb5_krbhst_data *VAR_8,
   krb5_krbhst_info **VAR_9)
{
    krb5_error_code VAR_10;

    if ((VAR_8->flags & VAR_2) == 0) {
 FUNC_6(VAR_7, VAR_8, VAR_6);
 VAR_8->flags |= VAR_2;
 if(FUNC_3(VAR_8, VAR_9))
     return 0;
    }

    if((VAR_8->flags & VAR_0) == 0) {
 FUNC_2(VAR_7, VAR_8, "kpasswd_server");
 VAR_8->flags |= VAR_0;
 if(FUNC_3(VAR_8, VAR_9))
     return 0;
    }

    if (VAR_8->flags & VAR_1) {
 FUNC_0(VAR_7, 1,
      "Configuration exists for realm %s, wont go to DNS",
      VAR_8->realm);
 return VAR_5;
    }

    if(VAR_7->srv_lookup) {
 if((VAR_8->flags & VAR_4) == 0) {
     FUNC_7(VAR_7, VAR_8, "udp", "kpasswd");
     VAR_8->flags |= VAR_4;
     if(FUNC_3(VAR_8, VAR_9))
  return 0;
 }
 if((VAR_8->flags & VAR_3) == 0) {
     FUNC_7(VAR_7, VAR_8, "tcp", "kpasswd");
     VAR_8->flags |= VAR_3;
     if(FUNC_3(VAR_8, VAR_9))
  return 0;
 }
    }



    if (FUNC_4(VAR_8)) {
 VAR_8->flags = 0;
 VAR_8->port = VAR_8->def_port;
 VAR_8->get_next = FUNC_1;
 VAR_10 = (*VAR_8->get_next)(VAR_7, VAR_8, VAR_9);
 if (VAR_10 == 0)
     (*VAR_9)->proto = FUNC_5(VAR_8);
 return VAR_10;
    }

    FUNC_0(VAR_7, 0, "No kpasswd entries found for realm %s", VAR_8->realm);

    return VAR_5;
}
