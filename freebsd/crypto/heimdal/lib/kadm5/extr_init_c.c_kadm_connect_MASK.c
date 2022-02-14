
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; scalar_t__ realm; int mask; struct addrinfo* ai_next; } ;
typedef scalar_t__ rk_socket_t ;
typedef int portstr ;
typedef int p ;
typedef int krb5_principal ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef scalar_t__ kadm5_ret_t ;
typedef struct addrinfo kadm5_config_params ;
struct TYPE_3__ {char* admin_server; scalar_t__ sock; int * ccache; int * ac; scalar_t__ realm; int keytab; int prompter; int service_name; int client_name; int kadmind_port; int context; } ;
typedef TYPE_1__ kadm5_client_context ;
typedef int hints ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,struct addrinfo*,int *) ;
 int FUNC_2 (char**,char*,int ,...) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct addrinfo*) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,char*,int *) ;
 scalar_t__ FUNC_12 (int ,int **,scalar_t__*,int ,int *,int ,int ,int *,int *,int ,int *,int *,int *) ;
 int FUNC_13 (int ,scalar_t__,char*,char*) ;
 int FUNC_14 (int ,char*,char*) ;
 scalar_t__ FUNC_15 (int ,int *,scalar_t__*,int *) ;
 int FUNC_16 (struct addrinfo*,int ,int) ;
 int FUNC_17 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*,int,char*,int) ;
 scalar_t__ FUNC_20 (int ,int ,int ) ;
 char* FUNC_21 (char*,char) ;

__attribute__((used)) static kadm5_ret_t
FUNC_22(kadm5_client_context *VAR_14)
{
    kadm5_ret_t VAR_15;
    krb5_principal VAR_16;
    krb5_ccache VAR_17;
    rk_socket_t VAR_18 = VAR_13;
    struct addrinfo *VAR_19, *VAR_20;
    struct addrinfo VAR_21;
    int VAR_22;
    char VAR_23[VAR_10];
    char *VAR_24, *VAR_25;
    char *VAR_26;
    krb5_context VAR_27 = VAR_14->context;

    FUNC_16 (&VAR_21, 0, sizeof(VAR_21));
    VAR_21.ai_socktype = VAR_11;
    VAR_21.ai_protocol = VAR_2;

    FUNC_19 (VAR_23, sizeof(VAR_23), "%u", FUNC_17(VAR_14->kadmind_port));

    VAR_24 = VAR_14->admin_server;
    VAR_25 = FUNC_21 (VAR_24, '/');
    if (VAR_25 != ((void*)0))
 VAR_24 = VAR_25 + 1;

    VAR_22 = FUNC_6 (VAR_24, VAR_23, &VAR_21, &VAR_19);
    if (VAR_22) {
 FUNC_8(VAR_27);
 return VAR_4;
    }

    for (VAR_20 = VAR_19; VAR_20 != ((void*)0); VAR_20 = VAR_20->ai_next) {
 VAR_18 = FUNC_20 (VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
 if (VAR_18 < 0)
     continue;
 if (FUNC_3 (VAR_18, VAR_20->ai_addr, VAR_20->ai_addrlen) < 0) {
     FUNC_8(VAR_27);
     FUNC_13 (VAR_27, VAR_12, "connect(%s)", VAR_24);
     FUNC_18 (VAR_18);
     continue;
 }
 break;
    }
    if (VAR_20 == ((void*)0)) {
 FUNC_5 (VAR_19);
 FUNC_8(VAR_27);
 FUNC_14 (VAR_27, "failed to contact %s", VAR_24);
 return VAR_6;
    }
    VAR_15 = FUNC_0(VAR_27,
      VAR_14->client_name,
      VAR_14->service_name,
      ((void*)0), VAR_14->prompter, VAR_14->keytab,
      VAR_14->ccache, &VAR_17);

    if(VAR_15) {
 FUNC_5 (VAR_19);
 FUNC_18(VAR_18);
 return VAR_15;
    }

    if (VAR_14->realm)
 FUNC_2(&VAR_26, "%d@%ld", VAR_3, VAR_14->realm);
    else
 FUNC_2(&VAR_26, "%d", VAR_3);

    if (VAR_26 == ((void*)0)) {
 FUNC_5 (VAR_19);
 FUNC_18(VAR_18);
 FUNC_8(VAR_27);
 return VAR_1;
    }

    VAR_15 = FUNC_11(VAR_27, VAR_26, &VAR_16);
    FUNC_4(VAR_26);
    if(VAR_15) {
 FUNC_5 (VAR_19);
 if(VAR_14->ccache == ((void*)0))
     FUNC_7(VAR_27, VAR_17);
 FUNC_18(VAR_18);
 return VAR_15;
    }
    VAR_14->ac = ((void*)0);

    VAR_15 = FUNC_12(VAR_27, &VAR_14->ac, &VAR_18,
   VAR_7, ((void*)0),
   VAR_16, VAR_0,
   ((void*)0), ((void*)0), VAR_17, ((void*)0), ((void*)0), ((void*)0));
    if(VAR_15 == 0) {
 krb5_data VAR_28;
 kadm5_config_params VAR_29;
 FUNC_16(&VAR_29, 0, sizeof(VAR_29));
 if(VAR_14->realm) {
     VAR_29.mask |= VAR_5;
     VAR_29.realm = VAR_14->realm;
 }
 VAR_15 = FUNC_1(VAR_27, &VAR_29, &VAR_28);

 VAR_15 = FUNC_15(VAR_27, VAR_14->ac, &VAR_18, &VAR_28);
 FUNC_9(&VAR_28);
 if(VAR_15) {
     FUNC_5 (VAR_19);
     FUNC_18(VAR_18);
     if(VAR_14->ccache == ((void*)0))
  FUNC_7(VAR_27, VAR_17);
     return VAR_15;
 }
    } else if(VAR_15 == VAR_9) {
 FUNC_18(VAR_18);

 VAR_18 = FUNC_20 (VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
 if (VAR_18 < 0) {
     FUNC_5 (VAR_19);
     FUNC_8(VAR_27);
     return VAR_12;
 }
 if (FUNC_3 (VAR_18, VAR_20->ai_addr, VAR_20->ai_addrlen) < 0) {
     FUNC_18 (VAR_18);
     FUNC_5 (VAR_19);
     FUNC_8(VAR_27);
     return VAR_12;
 }
 VAR_15 = FUNC_12(VAR_27, &VAR_14->ac, &VAR_18,
       VAR_8, ((void*)0),
       VAR_16, VAR_0,
       ((void*)0), ((void*)0), VAR_17, ((void*)0), ((void*)0), ((void*)0));
    }
    FUNC_5 (VAR_19);
    if(VAR_15) {
 FUNC_18(VAR_18);
 return VAR_15;
    }

    FUNC_10(VAR_27, VAR_16);
    if(VAR_14->ccache == ((void*)0))
 FUNC_7(VAR_27, VAR_17);
    VAR_14->sock = VAR_18;

    return 0;
}
