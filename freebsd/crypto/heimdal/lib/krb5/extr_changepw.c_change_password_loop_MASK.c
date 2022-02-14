
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct kpwd_proc {int flags; int (* send_req ) (int ,int **,TYPE_4__*,TYPE_2__*,int,scalar_t__,char const*,int ) ;int (* process_rep ) (int ,int *,int,scalar_t__,int*,int *,int *,int ) ;} ;
struct addrinfo {int ai_socktype; int ai_addrlen; int ai_addr; int ai_protocol; int ai_family; struct addrinfo* ai_next; } ;
typedef scalar_t__ rk_socket_t ;
typedef scalar_t__ krb5_realm ;
typedef TYPE_2__* krb5_principal ;
struct TYPE_13__ {int proto; int hostname; } ;
typedef TYPE_3__ krb5_krbhst_info ;
typedef int * krb5_krbhst_handle ;
typedef int krb5_error_code ;
typedef int krb5_data ;
struct TYPE_14__ {TYPE_1__* client; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
typedef int * krb5_auth_context ;
typedef int fd_set ;
struct TYPE_12__ {scalar_t__ realm; } ;
struct TYPE_11__ {scalar_t__ realm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 char* FUNC_2 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,scalar_t__,int ) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,TYPE_3__*,struct addrinfo**) ;
 int FUNC_10 (int ,scalar_t__,int ,int **) ;
 int FUNC_11 (int ,int *,TYPE_3__**) ;
 int FUNC_12 (int ,int,char*,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_18 (int ,int,int ) ;
 int FUNC_19 (int ,int **,TYPE_4__*,TYPE_2__*,int,scalar_t__,char const*,int ) ;
 int FUNC_20 (int ,int *,int,scalar_t__,int*,int *,int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_21 (krb5_context VAR_13,
        krb5_creds *VAR_14,
        krb5_principal VAR_15,
        const char *VAR_16,
        int *VAR_17,
        krb5_data *VAR_18,
        krb5_data *VAR_19,
        struct kpwd_proc *VAR_20)
{
    krb5_error_code VAR_21;
    krb5_auth_context VAR_22 = ((void*)0);
    krb5_krbhst_handle VAR_23 = ((void*)0);
    krb5_krbhst_info *VAR_24;
    rk_socket_t VAR_25;
    unsigned int VAR_26;
    int VAR_27 = 0;
    krb5_realm VAR_28;

    if (VAR_15)
 VAR_28 = VAR_15->realm;
    else
 VAR_28 = VAR_14->client->realm;

    VAR_21 = FUNC_6 (VAR_13, &VAR_22);
    if (VAR_21)
 return VAR_21;

    FUNC_7 (VAR_13, VAR_22,
       VAR_4);

    VAR_21 = FUNC_10 (VAR_13, VAR_28, VAR_8, &VAR_23);
    if (VAR_21)
 goto out;

    while (!VAR_27 && (VAR_21 = FUNC_11(VAR_13, VAR_23, &VAR_24)) == 0) {
 struct addrinfo *VAR_29, *VAR_30;
 int VAR_31;

 switch (VAR_24->proto) {
 case 128:
     if ((VAR_20->flags & VAR_11) == 0)
  continue;
     VAR_31 = 0;
     break;
 case 129:
     if ((VAR_20->flags & VAR_10) == 0)
  continue;
     VAR_31 = 1;
     break;
 default:
     continue;
 }

 VAR_21 = FUNC_9(VAR_13, VAR_24, &VAR_29);
 if (VAR_21)
     continue;

 for (VAR_30 = VAR_29; !VAR_27 && VAR_30 != ((void*)0); VAR_30 = VAR_30->ai_next) {
     int VAR_32 = 0;

     VAR_25 = FUNC_18 (VAR_30->ai_family, VAR_30->ai_socktype | VAR_9, VAR_30->ai_protocol);
     if (FUNC_13(VAR_25))
  continue;
     FUNC_15(VAR_25);

     VAR_21 = FUNC_3(VAR_25, VAR_30->ai_addr, VAR_30->ai_addrlen);
     if (FUNC_14(VAR_21)) {
  FUNC_16 (VAR_25);
  goto out;
     }

     VAR_21 = FUNC_5 (VAR_13, VAR_22, VAR_25,
       VAR_5);
     if (VAR_21) {
  FUNC_16 (VAR_25);
  goto out;
     }

     for (VAR_26 = 0; !VAR_27 && VAR_26 < 5; ++VAR_26) {
  fd_set VAR_33;
  struct timeval VAR_34;

  if (!VAR_32) {
      VAR_32 = 0;

      VAR_21 = (*VAR_20->send_req) (VAR_13,
          &VAR_22,
          VAR_14,
          VAR_15,
          VAR_31,
          VAR_25,
          VAR_16,
          VAR_24->hostname);
      if (VAR_21) {
   FUNC_16(VAR_25);
   goto out;
      }
  }


  if (VAR_25 >= VAR_2) {
      VAR_21 = VAR_1;
      FUNC_12(VAR_13, VAR_21,
        "fd %d too large", VAR_25);
      FUNC_16 (VAR_25);
      goto out;
  }


  FUNC_1(&VAR_33);
  FUNC_0(VAR_25, &VAR_33);
  VAR_34.tv_usec = 0;
  VAR_34.tv_sec = 1 + (1 << VAR_26);

  VAR_21 = FUNC_17 (VAR_25 + 1, &VAR_33, ((void*)0), ((void*)0), &VAR_34);
  if (FUNC_14(VAR_21) && VAR_12 != VAR_0) {
      FUNC_16(VAR_25);
      goto out;
  }
  if (VAR_21 == 1) {
      VAR_21 = (*VAR_20->process_rep) (VAR_13,
      VAR_22,
      VAR_31,
      VAR_25,
      VAR_17,
      VAR_18,
      VAR_19,
      VAR_24->hostname);
      if (VAR_21 == 0)
   VAR_27 = 1;
      else if (VAR_26 > 0 && VAR_21 == VAR_3)
   VAR_32 = 1;
  } else {
      VAR_21 = VAR_6;
  }
     }
     FUNC_16 (VAR_25);
 }
    }

 out:
    FUNC_8 (VAR_13, VAR_23);
    FUNC_4 (VAR_13, VAR_22);

    if (VAR_21 == VAR_6) {
 FUNC_12(VAR_13,
          VAR_21,
          FUNC_2("Unable to reach any changepw server "
     " in realm %s", "realm"), VAR_28);
 *VAR_17 = VAR_7;
    }
    return VAR_21;
}
