
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct sockaddr {int dummy; } ;
typedef int krb5_storage ;
struct TYPE_5__ {size_t length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int a ;
struct TYPE_6__ {unsigned int tv_sec; } ;
typedef int Der_type ;
typedef int Der_class ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t,int *,int *,unsigned int*,int *) ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int ,struct sockaddr const*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_1__) ;
 int FUNC_10 (int *,unsigned int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (char const*,int,int) ;
 int FUNC_13 (unsigned char const*) ;

int
FUNC_14(krb5_context VAR_6,
        const char *VAR_7,
        const unsigned char *VAR_8,
        size_t VAR_9,
        const krb5_data *VAR_10,
        const struct sockaddr *VAR_11)
{
    krb5_storage *VAR_12;
    krb5_address VAR_13;
    int VAR_14, VAR_15;
    uint32_t VAR_16;
    krb5_data VAR_17;

    FUNC_11(&VAR_13, 0, sizeof(VAR_13));

    VAR_17.data = FUNC_13(VAR_8);
    VAR_17.length = VAR_9;
    VAR_16 = VAR_4.tv_sec;

    VAR_14 = FUNC_12(VAR_7, VAR_3|VAR_2|VAR_1, 0600);
    if (VAR_14 < 0) {
 int VAR_18 = VAR_5;
 FUNC_4(VAR_6, VAR_18, "Failed to open: %s", VAR_7);
 return VAR_18;
    }

    VAR_12 = FUNC_7(VAR_14);
    FUNC_1(VAR_14);
    if (VAR_12 == ((void*)0)) {
 FUNC_4(VAR_6, VAR_0, "Storage failed to open fd");
 return VAR_0;
    }

    VAR_15 = FUNC_5(VAR_6, VAR_11, &VAR_13);
    if (VAR_15)
 goto out;

    FUNC_10(VAR_12, 1);
    FUNC_10(VAR_12, VAR_16);
    FUNC_8(VAR_12, VAR_13);
    FUNC_9(VAR_12, VAR_17);
    {
 Der_class VAR_19;
 Der_type VAR_20;
 unsigned int VAR_21;
 VAR_15 = FUNC_2 (VAR_10->data, VAR_10->length,
      &VAR_19, &VAR_20, &VAR_21, ((void*)0));
 if (VAR_15) {
     FUNC_10(VAR_12, 0xffffffff);
     FUNC_10(VAR_12, 0xffffffff);
 } else {
     FUNC_10(VAR_12, FUNC_0(VAR_19, VAR_20, 0));
     FUNC_10(VAR_12, VAR_21);
 }
    }

    FUNC_3(VAR_6, &VAR_13);
out:
    FUNC_6(VAR_12);

    return 0;
}
