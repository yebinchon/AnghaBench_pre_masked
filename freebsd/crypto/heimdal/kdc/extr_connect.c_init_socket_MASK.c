
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct descr {int type; int port; void* s; } ;
typedef int one ;
typedef int krb5_socklen_t ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int a_str ;
typedef int __ss ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct descr*) ;
 scalar_t__ FUNC_2 (int ,int *,struct sockaddr*,int*,int) ;
 int FUNC_3 (int *,char*,int,size_t*) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int) ;
 void* VAR_5 ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,int ,int ,void*,int) ;
 void* FUNC_11 (int,int,int ) ;

__attribute__((used)) static void
FUNC_12(krb5_context VAR_6,
     krb5_kdc_configuration *VAR_7,
     struct descr *VAR_8, krb5_address *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    krb5_error_code VAR_13;
    struct sockaddr_storage VAR_14;
    struct sockaddr *VAR_15 = (struct sockaddr *)&VAR_14;
    krb5_socklen_t VAR_16 = sizeof(VAR_14);

    FUNC_1 (VAR_8);

    VAR_13 = FUNC_2 (VAR_6, VAR_9, VAR_15, &VAR_16, VAR_12);
    if (VAR_13) {
 FUNC_4(VAR_6, VAR_13, "krb5_addr2sockaddr");
 FUNC_9(VAR_8->s);
 VAR_8->s = VAR_5;
 return;
    }

    if (VAR_15->sa_family != VAR_10)
 return;

    VAR_8->s = FUNC_11(VAR_10, VAR_11, 0);
    if(FUNC_7(VAR_8->s)){
 FUNC_4(VAR_6, VAR_4, "socket(%d, %d, 0)", VAR_10, VAR_11);
 VAR_8->s = VAR_5;
 return;
    }






    VAR_8->type = VAR_11;
    VAR_8->port = VAR_12;

    if(FUNC_8(FUNC_0(VAR_8->s, VAR_15, VAR_16))){
 char VAR_17[256];
 size_t VAR_18;

 FUNC_3 (VAR_9, VAR_17, sizeof(VAR_17), &VAR_18);
 FUNC_4(VAR_6, VAR_4, "bind %s/%d", VAR_17, FUNC_6(VAR_12));
 FUNC_9(VAR_8->s);
 VAR_8->s = VAR_5;
 return;
    }
    if(VAR_11 == VAR_0 && FUNC_8(FUNC_5(VAR_8->s, VAR_2))){
 char VAR_19[256];
 size_t VAR_20;

 FUNC_3 (VAR_9, VAR_19, sizeof(VAR_19), &VAR_20);
 FUNC_4(VAR_6, VAR_4, "listen %s/%d", VAR_19, FUNC_6(VAR_12));
 FUNC_9(VAR_8->s);
 VAR_8->s = VAR_5;
 return;
    }
}
