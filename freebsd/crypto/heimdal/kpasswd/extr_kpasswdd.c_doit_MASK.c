
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int str ;
typedef int socklen_t ;
typedef scalar_t__ krb5_ssize_t ;
typedef int krb5_socklen_t ;
typedef int krb5_realm ;
typedef int krb5_keytab ;
typedef int krb5_error_code ;
struct TYPE_5__ {unsigned int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;
typedef int fd_set ;
typedef int buf ;
typedef int __ss ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int ,int *,struct sockaddr*,int*,int) ;
 int FUNC_7 (int ,int,int,char*) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,int **) ;
 int FUNC_14 (int *,char*,int,size_t*) ;
 int FUNC_15 (int ,int,char*,char*) ;
 int* FUNC_16 (unsigned int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int *,int ,int,int *,struct sockaddr*,int,int *,scalar_t__) ;
 scalar_t__ FUNC_19 (int,int *,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_20 (int,int *,int *,int *,int *) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_23 (krb5_keytab VAR_8, int VAR_9)
{
    krb5_error_code VAR_10;
    int *VAR_11;
    int VAR_12;
    krb5_realm *VAR_13;
    krb5_addresses VAR_14;
    unsigned VAR_15, VAR_16;
    fd_set VAR_17;
    struct sockaddr_storage VAR_18;
    struct sockaddr *VAR_19 = (struct sockaddr *)&VAR_18;

    VAR_10 = FUNC_13(VAR_4, &VAR_13);
    if (VAR_10)
 FUNC_7 (VAR_4, 1, VAR_10, "krb5_get_default_realms");

    if (VAR_7.len) {
 VAR_14 = VAR_7;
    } else {
 VAR_10 = FUNC_12 (VAR_4, &VAR_14);
 if (VAR_10)
     FUNC_7 (VAR_4, 1, VAR_10, "krb5_get_all_server_addrs");
    }
    VAR_15 = VAR_14.len;

    VAR_11 = FUNC_16 (VAR_15 * sizeof(*VAR_11));
    if (VAR_11 == ((void*)0))
 FUNC_8 (VAR_4, 1, "out of memory");
    VAR_12 = -1;
    FUNC_2(&VAR_17);
    for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16) {
 krb5_socklen_t VAR_20 = sizeof(VAR_18);

 FUNC_6 (VAR_4, &VAR_14.val[VAR_16], VAR_19, &VAR_20, VAR_9);

 VAR_11[VAR_16] = FUNC_21 (VAR_19->sa_family, VAR_3, 0);
 if (VAR_11[VAR_16] < 0)
     FUNC_7 (VAR_4, 1, VAR_5, "socket");
 if (FUNC_3 (VAR_11[VAR_16], VAR_19, VAR_20) < 0) {
     char VAR_21[128];
     size_t VAR_22;
     int VAR_23 = VAR_5;

     VAR_10 = FUNC_14 (&VAR_14.val[VAR_16], VAR_21, sizeof(VAR_21), &VAR_22);
     if (VAR_10)
  FUNC_22(VAR_21, "unknown address", sizeof(VAR_21));
     FUNC_15 (VAR_4, VAR_23, "bind(%s)", VAR_21);
     continue;
 }
 VAR_12 = FUNC_17 (VAR_12, VAR_11[VAR_16]);
 if (VAR_12 >= VAR_2)
     FUNC_8 (VAR_4, 1, "fd too large");
 FUNC_1(VAR_11[VAR_16], &VAR_17);
    }
    if (VAR_12 == -1)
 FUNC_8 (VAR_4, 1, "No sockets!");

    while(VAR_6 == 0) {
 krb5_ssize_t VAR_24;
 fd_set VAR_25 = VAR_17;

 VAR_24 = FUNC_20 (VAR_12 + 1, &VAR_25, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_24 < 0) {
     if (VAR_5 == VAR_1)
  continue;
     else
  FUNC_7 (VAR_4, 1, VAR_5, "select");
 }
 for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16)
     if (FUNC_0(VAR_11[VAR_16], &VAR_25)) {
  u_char VAR_26[VAR_0];
  socklen_t VAR_27 = sizeof(VAR_18);

  VAR_24 = FUNC_19(VAR_11[VAR_16], VAR_26, sizeof(VAR_26), 0,
    VAR_19, &VAR_27);
  if (VAR_24 < 0) {
      if(VAR_5 == VAR_1)
   break;
      else
   FUNC_7 (VAR_4, 1, VAR_5, "recvfrom");
  }

  FUNC_18 (VAR_13, VAR_8, VAR_11[VAR_16],
    &VAR_14.val[VAR_16],
    VAR_19, VAR_27,
    VAR_26, VAR_24);
     }
    }

    for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16)
 FUNC_4(VAR_11[VAR_16]);
    FUNC_5(VAR_11);

    FUNC_9 (VAR_4, &VAR_14);
    FUNC_11 (VAR_4, VAR_13);
    FUNC_10 (VAR_4);
    return 0;
}
