
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct msghdr {int msg_iovlen; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int rk_socket_t ;
typedef int msghdr ;
typedef scalar_t__ krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_10__ {int length; void* data; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_11__ {int client; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_auth_context ;
typedef int iov ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,char*,char const*,int ) ;
 int FUNC_6 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;
 void* FUNC_8 (char const*) ;
 int FUNC_9 (int ,struct msghdr*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_12 (krb5_context VAR_5,
      krb5_auth_context *VAR_6,
      krb5_creds *VAR_7,
      krb5_principal VAR_8,
      int VAR_9,
      rk_socket_t VAR_10,
      const char *VAR_11,
      const char *VAR_12)
{
    krb5_error_code VAR_13;
    krb5_data VAR_14;
    krb5_data VAR_15;
    krb5_data VAR_16;
    size_t VAR_17;
    u_char VAR_18[6];
    struct iovec VAR_19[3];
    struct msghdr VAR_20;

    if (VAR_9)
 return VAR_2;

    if (VAR_8 &&
 FUNC_4(VAR_5, VAR_7->client, VAR_8) != VAR_3)
 return VAR_2;

    FUNC_1 (&VAR_14);

    VAR_13 = FUNC_3 (VAR_5,
    VAR_6,
    VAR_0 | VAR_1,
    ((void*)0),
    VAR_7,
    &VAR_14);
    if (VAR_13)
 return VAR_13;

    VAR_16.data = FUNC_8(VAR_11);
    VAR_16.length = FUNC_11(VAR_11);

    FUNC_1 (&VAR_15);

    VAR_13 = FUNC_2 (VAR_5,
   *VAR_6,
   &VAR_16,
   &VAR_15,
   ((void*)0));
    if (VAR_13)
 goto out2;

    VAR_17 = 6 + VAR_14.length + VAR_15.length;
    VAR_18[0] = (VAR_17 >> 8) & 0xFF;
    VAR_18[1] = (VAR_17 >> 0) & 0xFF;
    VAR_18[2] = 0;
    VAR_18[3] = 1;
    VAR_18[4] = (VAR_14.length >> 8) & 0xFF;
    VAR_18[5] = (VAR_14.length >> 0) & 0xFF;

    FUNC_6(&VAR_20, 0, sizeof(VAR_20));
    VAR_20.msg_name = ((void*)0);
    VAR_20.msg_namelen = 0;
    VAR_20.msg_iov = VAR_19;
    VAR_20.msg_iovlen = sizeof(VAR_19)/sizeof(*VAR_19);





    VAR_19[0].iov_base = (void*)VAR_18;
    VAR_19[0].iov_len = 6;
    VAR_19[1].iov_base = VAR_14.data;
    VAR_19[1].iov_len = VAR_14.length;
    VAR_19[2].iov_base = VAR_15.data;
    VAR_19[2].iov_len = VAR_15.length;

    if (FUNC_7( FUNC_9 (VAR_10, &VAR_20, 0) )) {
 VAR_13 = VAR_4;
 FUNC_5(VAR_5, VAR_13, "sendmsg %s: %s",
          VAR_12, FUNC_10(VAR_13));
    }

    FUNC_0 (&VAR_15);
out2:
    FUNC_0 (&VAR_14);
    return VAR_13;
}
