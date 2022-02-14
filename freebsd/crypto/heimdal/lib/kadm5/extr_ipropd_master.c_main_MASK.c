
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vers ;
typedef scalar_t__ uint32_t ;
struct timeval {int member_0; int member_1; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_16__ {int flags; int fd; struct TYPE_16__* next; } ;
typedef TYPE_2__ slave ;
typedef int peer_addr ;
typedef int krb5_socket_t ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_15__ {int log_file; } ;
struct TYPE_17__ {TYPE_1__ log_context; } ;
typedef TYPE_3__ kadm5_server_context ;
struct TYPE_18__ {scalar_t__ realm; int mask; } ;
typedef TYPE_4__ kadm5_config_params ;
typedef int fd_set ;
typedef int conf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,TYPE_2__**,int ) ;
 int VAR_9 ;
 int FUNC_4 (int **,char*,int ) ;
 int FUNC_5 (int) ;
 int * VAR_10 ;
 int FUNC_6 (int ,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_14 ;
 unsigned long FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_11 (int ,int ,int *,int ,TYPE_4__*,int ,int ,void**) ;
 int FUNC_12 (int,scalar_t__*) ;
 int VAR_17 ;
 int FUNC_13 (int ,int,scalar_t__,char*,...) ;
 int FUNC_14 (int ,int,char*,...) ;
 int FUNC_15 (char**) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,char*,int *) ;
 scalar_t__ FUNC_19 (int *,char***) ;
 int FUNC_20 (int *,int,char**,int ,int ,int *) ;
 scalar_t__ FUNC_21 (int ,char**) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ,scalar_t__,char*) ;
 int FUNC_25 (int ,char*,unsigned long,...) ;
 int VAR_18 ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int,int ) ;
 int FUNC_30 (TYPE_4__*,int ,int) ;
 int VAR_19 ;
 int FUNC_31 (int ,int ,int ) ;
 scalar_t__ FUNC_32 (int ,char*) ;
 int FUNC_33 (int *) ;
 int VAR_20 ;
 int FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int ,TYPE_2__*,int,int ,scalar_t__) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_36 (int ,void*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_37 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_38 (int ,TYPE_2__*) ;
 int FUNC_39 (int ,TYPE_2__*,int,int ,scalar_t__) ;
 int FUNC_40 () ;
 int FUNC_41 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_42 (TYPE_2__*) ;
 scalar_t__ FUNC_43 (TYPE_2__*) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_44 (int ) ;
 int FUNC_45 (int ,TYPE_2__*,scalar_t__) ;

int
FUNC_46(int VAR_27, char **VAR_28)
{
    krb5_error_code VAR_29;
    krb5_context VAR_30;
    void *VAR_31;
    kadm5_server_context *VAR_32;
    kadm5_config_params VAR_33;
    krb5_socket_t VAR_34, VAR_35, VAR_36;
    int VAR_37;
    slave *VAR_38 = ((void*)0);
    uint32_t VAR_39 = 0, VAR_40 = 0;
    krb5_keytab VAR_41;
    int VAR_42;
    char **VAR_43;

    VAR_42 = FUNC_20(&VAR_30, VAR_27, VAR_28, VAR_9, VAR_19, ((void*)0));

    if(VAR_16)
 FUNC_23(0, VAR_9, VAR_19);
    if(VAR_26) {
 FUNC_34(((void*)0));
 FUNC_8(0);
    }

    FUNC_40();

    if (VAR_10 == ((void*)0)) {
 FUNC_4(&VAR_10, "%d/kdc.conf", FUNC_10(VAR_30));
 if (VAR_10 == ((void*)0))
     FUNC_7(1, "out of memory");
    }

    VAR_29 = FUNC_19(VAR_10, &VAR_43);
    if (VAR_29)
 FUNC_13(VAR_30, 1, VAR_29, "getting configuration files");

    VAR_29 = FUNC_21(VAR_30, VAR_43);
    FUNC_15(VAR_43);
    if (VAR_29)
 FUNC_13(VAR_30, 1, VAR_29, "reading configuration files");

    VAR_24 = FUNC_32 (VAR_22, "s");
    if (VAR_24 < 0)
 FUNC_14 (VAR_30, 1, "couldn't parse time: %s", VAR_22);
    VAR_25 = FUNC_32 (VAR_23, "s");
    if (VAR_25 < 0)
 FUNC_14 (VAR_30, 1, "couldn't parse time: %s", VAR_23);





    FUNC_33 (((void*)0));
    FUNC_18 (VAR_30, "ipropd-master", &VAR_18);
    FUNC_22(VAR_30, VAR_18);

    VAR_29 = FUNC_16(VAR_30, &VAR_15);
    if(VAR_29)
 FUNC_13(VAR_30, 1, VAR_29, "krb5_kt_register");

    VAR_29 = FUNC_17(VAR_30, VAR_17, &VAR_41);
    if(VAR_29)
 FUNC_13(VAR_30, 1, VAR_29, "krb5_kt_resolve: %s", VAR_17);

    FUNC_30(&VAR_33, 0, sizeof(VAR_33));
    if(VAR_21) {
 VAR_33.mask |= VAR_3;
 VAR_33.realm = VAR_21;
    }
    VAR_29 = FUNC_11 (VAR_30,
        VAR_2,
        ((void*)0),
        VAR_2,
        &VAR_33, 0, 0,
        &VAR_31);
    if (VAR_29)
 FUNC_13 (VAR_30, 1, VAR_29, "kadm5_init_with_password_ctx");

    VAR_32 = (kadm5_server_context *)VAR_31;

    VAR_37 = FUNC_31 (VAR_32->log_context.log_file, VAR_4, 0);
    if (VAR_37 < 0)
 FUNC_13 (VAR_30, 1, VAR_13, "open %s",
    VAR_32->log_context.log_file);

    VAR_34 = FUNC_28 (VAR_30);
    VAR_35 = FUNC_27 (VAR_30, VAR_20);
    VAR_36 = FUNC_26 (VAR_30, VAR_20);

    FUNC_12 (VAR_37, &VAR_39);

    FUNC_25(VAR_30, "ipropd-master started at version: %lu",
        (unsigned long)VAR_39);

    while(VAR_14 == 0){
 slave *VAR_44;
 fd_set VAR_45;
 int VAR_46 = 0;
 struct timeval VAR_47 = {30, 0};
 uint32_t VAR_48;


 if (VAR_34 >= VAR_1 || VAR_35 >= VAR_1 ||
     VAR_36 >= VAR_1)
     FUNC_14 (VAR_30, 1, "fd too large");


 FUNC_2(&VAR_45);
 FUNC_1(VAR_34, &VAR_45);
 VAR_46 = FUNC_29(VAR_46, VAR_34);
 FUNC_1(VAR_35, &VAR_45);
 VAR_46 = FUNC_29(VAR_46, VAR_35);
 FUNC_1(VAR_36, &VAR_45);
 VAR_46 = FUNC_29(VAR_46, VAR_36);

 for (VAR_44 = VAR_38; VAR_44 != ((void*)0); VAR_44 = VAR_44->next) {
     if (VAR_44->flags & VAR_8)
  continue;
     FUNC_1(VAR_44->fd, &VAR_45);
     VAR_46 = FUNC_29(VAR_46, VAR_44->fd);
 }

 VAR_29 = FUNC_37 (VAR_46 + 1,
        &VAR_45, ((void*)0), ((void*)0), &VAR_47);
 if (VAR_29 < 0) {
     if (VAR_13 == VAR_0)
  continue;
     else
  FUNC_13 (VAR_30, 1, VAR_13, "select");
 }

 if (VAR_29 == 0) {
     VAR_40 = VAR_39;
     FUNC_12 (VAR_37, &VAR_39);

     if (VAR_39 > VAR_40) {
  FUNC_25(VAR_30,
      "Missed a signal, updating slaves %lu to %lu",
      (unsigned long)VAR_40,
      (unsigned long)VAR_39);
  for (VAR_44 = VAR_38; VAR_44 != ((void*)0); VAR_44 = VAR_44->next) {
      if (VAR_44->flags & VAR_8)
   continue;
      FUNC_39 (VAR_30, VAR_44, VAR_37, VAR_11, VAR_39);
  }
     }
 }

 if (VAR_29 && FUNC_0(VAR_34, &VAR_45)) {

     struct sockaddr_un VAR_49;



     socklen_t VAR_50 = sizeof(VAR_49);

     if(FUNC_36(VAR_34, (void *)&VAR_48, sizeof(VAR_48), 0,
   (struct sockaddr *)&VAR_49, &VAR_50) < 0) {
  FUNC_24 (VAR_30, VAR_13, "recvfrom");
  continue;
     }
     --VAR_29;
     FUNC_5(VAR_29 >= 0);
     VAR_40 = VAR_39;
     FUNC_12 (VAR_37, &VAR_39);
     if (VAR_39 > VAR_40) {
  FUNC_25(VAR_30,
      "Got a signal, updating slaves %lu to %lu",
      (unsigned long)VAR_40,
      (unsigned long)VAR_39);
  for (VAR_44 = VAR_38; VAR_44 != ((void*)0); VAR_44 = VAR_44->next) {
      if (VAR_44->flags & VAR_8)
   continue;
      FUNC_39 (VAR_30, VAR_44, VAR_37, VAR_11, VAR_39);
  }
     } else {
  FUNC_25(VAR_30,
      "Got a signal, but no update in log version %lu",
      (unsigned long)VAR_39);
     }
        }

 for(VAR_44 = VAR_38; VAR_44 != ((void*)0); VAR_44 = VAR_44->next) {
     if (VAR_44->flags & VAR_8)
         continue;
     if (VAR_29 && FUNC_0(VAR_44->fd, &VAR_45)) {
  --VAR_29;
  FUNC_5(VAR_29 >= 0);
  if(FUNC_35 (VAR_30, VAR_44, VAR_37, VAR_11, VAR_39))
      FUNC_41(VAR_30, VAR_44);
     } else if (FUNC_42 (VAR_44))
  FUNC_41(VAR_30, VAR_44);
     else if (FUNC_43 (VAR_44))
  FUNC_38 (VAR_30, VAR_44);
 }

 if (VAR_29 && FUNC_0(VAR_36, &VAR_45)) {
     FUNC_3 (VAR_30, VAR_41, &VAR_38, VAR_36);
     --VAR_29;
     FUNC_5(VAR_29 >= 0);
 }
 if (VAR_29 && FUNC_0(VAR_35, &VAR_45)) {
     FUNC_3 (VAR_30, VAR_41, &VAR_38, VAR_35);
     --VAR_29;
     FUNC_5(VAR_29 >= 0);
 }
 FUNC_45(VAR_30, VAR_38, VAR_39);
    }

    if(VAR_14 == VAR_5 || VAR_14 == VAR_6)
 FUNC_25(VAR_30, "%s terminated", FUNC_9());




    else
 FUNC_25(VAR_30, "%s unexpected exit reason: %ld",
     FUNC_9(), (long)VAR_14);

    FUNC_44(VAR_30);

    return 0;
}
