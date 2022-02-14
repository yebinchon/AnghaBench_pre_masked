
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct krb5_krbhst_data {int flags; int realm; int (* get_next ) (TYPE_1__*,struct krb5_krbhst_data*,int **) ;int def_port; int port; } ;
typedef int krb5_krbhst_info ;
typedef int krb5_error_code ;
typedef TYPE_1__* krb5_context ;
struct TYPE_9__ {scalar_t__ srv_lookup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,char*,int ) ;
 int FUNC_1 (TYPE_1__*,struct krb5_krbhst_data*,char*) ;
 scalar_t__ FUNC_2 (struct krb5_krbhst_data*,int **) ;
 int FUNC_3 (TYPE_1__*,struct krb5_krbhst_data*,int **) ;
 scalar_t__ FUNC_4 (struct krb5_krbhst_data*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,struct krb5_krbhst_data*,int ) ;
 int FUNC_6 (TYPE_1__*,struct krb5_krbhst_data*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,struct krb5_krbhst_data*,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_7,
  struct krb5_krbhst_data *VAR_8,
  krb5_krbhst_info **VAR_9)
{
    if ((VAR_8->flags & VAR_2) == 0) {
 FUNC_5(VAR_7, VAR_8, VAR_6);
 VAR_8->flags |= VAR_2;
 if(FUNC_2(VAR_8, VAR_9))
     return 0;
    }

    if((VAR_8->flags & VAR_0) == 0) {
 FUNC_1(VAR_7, VAR_8, "krb524_server");
 if(FUNC_2(VAR_8, VAR_9))
     return 0;
 VAR_8->flags |= VAR_0;
    }

    if (VAR_8->flags & VAR_1) {
 FUNC_0(VAR_7, 1,
      "Configuration exists for realm %s, wont go to DNS",
      VAR_8->realm);
 return VAR_5;
    }

    if(VAR_7->srv_lookup) {
 if((VAR_8->flags & VAR_4) == 0) {
     FUNC_6(VAR_7, VAR_8, "udp", "krb524");
     VAR_8->flags |= VAR_4;
     if(FUNC_2(VAR_8, VAR_9))
  return 0;
 }

 if((VAR_8->flags & VAR_3) == 0) {
     FUNC_6(VAR_7, VAR_8, "tcp", "krb524");
     VAR_8->flags |= VAR_3;
     if(FUNC_2(VAR_8, VAR_9))
  return 0;
 }
    }



    if (FUNC_4(VAR_8)) {
 VAR_8->flags = 0;
 VAR_8->port = VAR_8->def_port;
 VAR_8->get_next = FUNC_3;
 return (*VAR_8->get_next)(VAR_7, VAR_8, VAR_9);
    }

    FUNC_0(VAR_7, 0, "No kpasswd entries found for realm %s", VAR_8->realm);

    return VAR_5;
}
