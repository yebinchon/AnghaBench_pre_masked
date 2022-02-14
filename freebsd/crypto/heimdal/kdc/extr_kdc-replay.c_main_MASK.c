
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef int krb5_storage ;
typedef int krb5_socklen_t ;
struct TYPE_11__ {int pkinit_kdc_revoke; int pkinit_kdc_cert_pool; int * pkinit_kdc_anchors; int * pkinit_kdc_identity; scalar_t__ enable_pkinit; } ;
typedef TYPE_1__ krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_12__ {scalar_t__ length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int astr ;
typedef int Der_type ;
typedef int Der_class ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int *,int *,unsigned int*,int *) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,char*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *,struct sockaddr*,int*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int,scalar_t__,char*) ;
 int FUNC_10 (int ,int,char*,...) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,TYPE_1__**) ;
 int FUNC_15 (int ,TYPE_1__*,int *,int *,int ,int ) ;
 scalar_t__ FUNC_16 (int ,TYPE_1__*,int *,scalar_t__,TYPE_2__*,int *,char*,struct sockaddr*,int ) ;
 scalar_t__ FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (struct timeval*) ;
 scalar_t__ FUNC_19 (int *,char*,int,int *) ;
 scalar_t__ FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_22 (int *,int*) ;
 int FUNC_23 (int ,int,int ) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (int) ;
 int VAR_5 ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (int) ;
 scalar_t__ VAR_6 ;

int
FUNC_31(int VAR_7, char **VAR_8)
{
    krb5_error_code VAR_9;
    krb5_context VAR_10;
    krb5_kdc_configuration *VAR_11;
    krb5_storage *VAR_12;
    int VAR_13, VAR_14 = 0;

    FUNC_29(VAR_8[0]);

    if(FUNC_5(VAR_3, VAR_5, VAR_7, VAR_8, &VAR_14))
 FUNC_30(1);

    if(VAR_4)
 FUNC_30(0);

    if(VAR_6){
 FUNC_27(((void*)0));
 FUNC_4(0);
    }

    VAR_9 = FUNC_13(&VAR_10);
    if (VAR_9)
 FUNC_3 (1, "krb5_init_context failed to parse configuration file");

    VAR_9 = FUNC_14(VAR_10, &VAR_11);
    if (VAR_9)
 FUNC_9(VAR_10, 1, VAR_9, "krb5_kdc_default_config");

    FUNC_6(VAR_10, "kdc-replay", VAR_11);

    VAR_9 = FUNC_17(VAR_10, VAR_11);
    if (VAR_9)
 FUNC_9(VAR_10, 1, VAR_9, "krb5_kdc_set_dbinfo");
    if (VAR_7 != 2)
 FUNC_3(1, "argc != 2");

    FUNC_28("kdc replay\n");

    VAR_13 = FUNC_26(VAR_8[1], VAR_2);
    if (VAR_13 < 0)
 FUNC_2(1, "open: %s", VAR_8[1]);

    VAR_12 = FUNC_25(VAR_13);
    if (VAR_12 == ((void*)0))
 FUNC_10(VAR_10, 1, "krb5_storage_from_fd");

    while(1) {
 struct sockaddr_storage VAR_15;
 krb5_socklen_t VAR_16 = sizeof(VAR_15);
 struct timeval VAR_17;
 krb5_address VAR_18;
 krb5_data VAR_19, VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23;
 char VAR_24[80];

 VAR_9 = FUNC_22(VAR_12, &VAR_21);
 if (VAR_9 == VAR_0)
     break;
 else if (VAR_9)
     FUNC_10(VAR_10, 1, "krb5_ret_uint32(version)");
 if (VAR_21 != 1)
     FUNC_10(VAR_10, 1, "version not 1");
 VAR_9 = FUNC_22(VAR_12, &VAR_21);
 if (VAR_9)
     FUNC_10(VAR_10, 1, "krb5_ret_uint32(time)");
 VAR_9 = FUNC_20(VAR_12, &VAR_18);
 if (VAR_9)
     FUNC_10(VAR_10, 1, "krb5_ret_address");
 VAR_9 = FUNC_21(VAR_12, &VAR_19);
 if (VAR_9)
     FUNC_10(VAR_10, 1, "krb5_ret_data");
 VAR_9 = FUNC_22(VAR_12, &VAR_22);
 if (VAR_9)
     FUNC_10(VAR_10, 1, "krb5_ret_uint32(class|type)");
 VAR_9 = FUNC_22(VAR_12, &VAR_23);
 if (VAR_9)
     FUNC_10(VAR_10, 1, "krb5_ret_uint32(tag)");


 VAR_9 = FUNC_7 (VAR_10, &VAR_18, (struct sockaddr *)&VAR_15,
      &VAR_16, 88);
 if (VAR_9 == VAR_1)
     goto out;
 else if (VAR_9)
     FUNC_9(VAR_10, 1, VAR_9, "krb5_addr2sockaddr");

 VAR_9 = FUNC_19(&VAR_18, VAR_24, sizeof(VAR_24), ((void*)0));
 if (VAR_9)
     FUNC_9(VAR_10, 1, VAR_9, "krb5_print_address");

 FUNC_28("processing request from %s, %lu bytes\n",
        VAR_24, (unsigned long)VAR_19.length);

 VAR_20.length = 0;
 VAR_20.data = ((void*)0);

 VAR_17.tv_sec = VAR_21;
 VAR_17.tv_usec = 0;

 FUNC_18(&VAR_17);
 FUNC_23(VAR_10, VAR_17.tv_sec, 0);

 VAR_9 = FUNC_16(VAR_10, VAR_11, VAR_19.data, VAR_19.length,
           &VAR_20, ((void*)0), VAR_24,
           (struct sockaddr *)&VAR_15, 0);
 if (VAR_9)
     FUNC_9(VAR_10, 1, VAR_9, "krb5_kdc_process_request");

 if (VAR_20.length) {
     Der_class VAR_25;
     Der_type VAR_26;
     unsigned int VAR_27;
     VAR_9 = FUNC_1 (VAR_20.data, VAR_20.length,
          &VAR_25, &VAR_26, &VAR_27, ((void*)0));
     if (FUNC_0(VAR_25, VAR_26, 0) != VAR_22)
  FUNC_10(VAR_10, 1, "class|type mismatch: %d != %d",
     (int)FUNC_0(VAR_25, VAR_26, 0), (int)VAR_22);
     if (VAR_23 != VAR_27)
  FUNC_10(VAR_10, 1, "tag mismatch");

     FUNC_8(&VAR_20);
 } else {
     if (VAR_22 != 0xffffffff)
  FUNC_10(VAR_10, 1, "clty not invalid");
     if (VAR_23 != 0xffffffff)
  FUNC_10(VAR_10, 1, "tag not invalid");
 }

    out:
 FUNC_8(&VAR_19);
 FUNC_11(VAR_10, &VAR_18);
    }

    FUNC_24(VAR_12);
    FUNC_12(VAR_10);

    FUNC_28("done\n");

    return 0;
}
