
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int u_char ;
typedef int rk_socket_t ;
typedef int reply ;
typedef int krb5_error_code ;
struct TYPE_16__ {int* data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_auth_context ;
typedef int krb5_ap_rep_enc_part ;
typedef int error ;
struct TYPE_17__ {TYPE_1__* e_data; } ;
struct TYPE_15__ {int length; int* data; } ;
typedef TYPE_3__ KRB_ERROR ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,unsigned long*,int) ;
 int FUNC_2 (int*,size_t,TYPE_3__*,size_t*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_8 (int ,int ,TYPE_2__*,int **) ;
 int FUNC_9 (int ,int,char*,char const*,...) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int*,int*,unsigned long) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int FUNC_13 (int ,int*,int,int ,int *,int *) ;
 scalar_t__ FUNC_14 (int) ;
 int VAR_3 ;
 int FUNC_15 (TYPE_2__*,char*,...) ;
 int FUNC_16 (int) ;

__attribute__((used)) static krb5_error_code
FUNC_17 (krb5_context VAR_4,
        krb5_auth_context VAR_5,
        int VAR_6,
        rk_socket_t VAR_7,
        int *VAR_8,
        krb5_data *VAR_9,
        krb5_data *VAR_10,
        const char *VAR_11)
{
    krb5_error_code VAR_12;
    u_char VAR_13[1024 * 3];
    size_t VAR_14;
    uint16_t VAR_15, VAR_16;
    krb5_data VAR_17;
    int VAR_18;

    VAR_14 = 0;
    if (VAR_6) {
 while (VAR_14 < sizeof(VAR_13)) {
     unsigned long VAR_19;

     VAR_12 = FUNC_13 (VAR_7, VAR_13 + VAR_14, sizeof(VAR_13) - VAR_14,
       0, ((void*)0), ((void*)0));
     if (FUNC_14(VAR_12)) {
  VAR_18 = VAR_3;
  FUNC_9(VAR_4, VAR_18,
           "recvfrom %s: %s",
           VAR_11, FUNC_16(VAR_18));
  return VAR_18;
     } else if (VAR_12 == 0) {
  FUNC_9(VAR_4, 1,"recvfrom timeout %s", VAR_11);
  return 1;
     }
     VAR_14 += VAR_12;
     if (VAR_14 < 4)
  continue;
     FUNC_1(VAR_13, &VAR_19, 4);
     if (VAR_19 + 4 < VAR_14)
  continue;
     FUNC_11(VAR_13, VAR_13 + 4, VAR_19);
     VAR_14 = VAR_19;
     break;
 }
 if (VAR_14 == sizeof(VAR_13)) {
     FUNC_9(VAR_4, VAR_0,
       FUNC_0("Message too large from %s", "host"),
       VAR_11);
     return VAR_0;
 }
    } else {
 VAR_12 = FUNC_13 (VAR_7, VAR_13, sizeof(VAR_13), 0, ((void*)0), ((void*)0));
 if (FUNC_14(VAR_12)) {
     VAR_18 = VAR_3;
     FUNC_9(VAR_4, VAR_18,
       "recvfrom %s: %s",
       VAR_11, FUNC_16(VAR_18));
     return VAR_18;
 }
 VAR_14 = VAR_12;
    }

    if (VAR_14 < 6) {
 FUNC_15 (VAR_10, "server %s sent to too short message "
    "(%zu bytes)", VAR_11, VAR_14);
 *VAR_8 = VAR_1;
 return 0;
    }

    VAR_15 = (VAR_13[0] << 8) | (VAR_13[1]);
    VAR_16 = (VAR_13[2] << 8) | (VAR_13[3]);

    if ((VAR_15 != VAR_14) || (VAR_13[1] == 0x7e || VAR_13[1] == 0x5e)) {
 KRB_ERROR VAR_20;
 size_t VAR_21;
 u_char *VAR_22;

 FUNC_12(&VAR_20, 0, sizeof(VAR_20));

 VAR_12 = FUNC_2(VAR_13, VAR_14, &VAR_20, &VAR_21);
 if (VAR_12)
     return VAR_12;

 if (VAR_20.e_data->length < 2) {
     FUNC_15(VAR_10, "server %s sent too short "
       "e_data to print anything usable", VAR_11);
     FUNC_3(&VAR_20);
     *VAR_8 = VAR_1;
     return 0;
 }

 VAR_22 = VAR_20.e_data->data;
 *VAR_8 = (VAR_22[0] << 8) | VAR_22[1];
 if (VAR_20.e_data->length == 2)
     FUNC_15(VAR_10, "server only sent error code");
 else
     FUNC_4 (VAR_10,
       VAR_22 + 2,
       VAR_20.e_data->length - 2);
 FUNC_3(&VAR_20);
 return 0;
    }

    if (VAR_15 != VAR_14) {
 FUNC_15 (VAR_10, "client: wrong len in reply");
 *VAR_8 = VAR_1;
 return 0;
    }
    if (VAR_16 != VAR_2) {
 FUNC_15 (VAR_10,
    "client: wrong version number (%d)", VAR_16);
 *VAR_8 = VAR_1;
 return 0;
    }

    VAR_17.data = VAR_13 + 6;
    VAR_17.length = (VAR_13[4] << 8) | (VAR_13[5]);

    if (VAR_13 + VAR_14 < (u_char *)VAR_17.data + VAR_17.length) {
 FUNC_15 (VAR_10, "client: wrong AP len in reply");
 *VAR_8 = VAR_1;
 return 0;
    }

    if (VAR_17.length) {
 krb5_ap_rep_enc_part *VAR_23;
 krb5_data VAR_24;
 u_char *VAR_25;

 VAR_24.data = (u_char*)VAR_17.data + VAR_17.length;
 VAR_24.length = VAR_14 - VAR_17.length - 6;

 VAR_12 = FUNC_8 (VAR_4,
      VAR_5,
      &VAR_17,
      &VAR_23);
 if (VAR_12)
     return VAR_12;

 FUNC_6 (VAR_4, VAR_23);

 VAR_12 = FUNC_7 (VAR_4,
       VAR_5,
       &VAR_24,
       VAR_9,
       ((void*)0));
 if (VAR_12) {
     FUNC_5 (VAR_9);
     return VAR_12;
 }

 if (VAR_9->length < 2) {
     *VAR_8 = VAR_1;
     FUNC_15 (VAR_10,
        "client: bad length in result");
     return 0;
 }

        VAR_25 = VAR_9->data;

        *VAR_8 = (VAR_25[0] << 8) | VAR_25[1];
        FUNC_4 (VAR_10,
                        (unsigned char*)VAR_9->data + 2,
                        VAR_9->length - 2);
        return 0;
    } else {
 KRB_ERROR VAR_26;
 size_t VAR_27;
 u_char *VAR_28;

 VAR_12 = FUNC_2(VAR_13 + 6, VAR_14 - 6, &VAR_26, &VAR_27);
 if (VAR_12) {
     return VAR_12;
 }
 if (VAR_26.e_data->length < 2) {
     FUNC_10 (VAR_4, "too short e_data to print anything usable");
     return 1;
 }

 VAR_28 = VAR_26.e_data->data;
 *VAR_8 = (VAR_28[0] << 8) | VAR_28[1];
 FUNC_4 (VAR_10,
   VAR_28 + 2,
   VAR_26.e_data->length - 2);
 return 0;
    }
}
