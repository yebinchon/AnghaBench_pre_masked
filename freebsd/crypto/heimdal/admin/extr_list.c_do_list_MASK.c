
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rk_strpool {int dummy; } ;
struct list_options {scalar_t__ keys_flag; scalar_t__ timestamp_flag; } ;
typedef int rtbl_t ;
typedef int krb5_kt_cursor ;
struct TYPE_7__ {int length; scalar_t__ data; } ;
struct TYPE_8__ {unsigned char keytype; TYPE_1__ keyvalue; } ;
struct TYPE_10__ {unsigned char vno; TYPE_3__* aliases; int principal; TYPE_2__ keyblock; int timestamp; } ;
typedef TYPE_4__ krb5_keytab_entry ;
typedef int krb5_keytab ;
typedef int krb5_error_code ;
typedef int buf ;
struct TYPE_9__ {unsigned int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned char,char**) ;
 int FUNC_2 (int ,int ,char*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_4__*,int *) ;
 int FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,char*,int) ;
 int FUNC_10 (int ,int,char*,char const*) ;
 int FUNC_11 (int ,char*) ;
 char* FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;
 char* FUNC_14 (struct rk_strpool*) ;
 int FUNC_15 (struct rk_strpool*,char*,char*,char*) ;
 int FUNC_16 (int ,int,char*,int ) ;
 int FUNC_17 (int ,int,char*) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,int,char*,unsigned char) ;
 int VAR_4 ;
 scalar_t__ FUNC_23 (char const*,char*,int) ;
 int FUNC_24 (char const**,char*,char*,int) ;

__attribute__((used)) static int
FUNC_25(struct list_options *VAR_5, const char *VAR_6)
{
    krb5_error_code VAR_7;
    krb5_keytab VAR_8;
    krb5_keytab_entry VAR_9;
    krb5_kt_cursor VAR_10;
    rtbl_t VAR_11;


    if(FUNC_23(VAR_6, "ANY:", 4) == 0) {
 int VAR_12 = 0;
 char VAR_13[1024];
 VAR_6 += 4;
 VAR_7 = 0;
 while (FUNC_24((const char**)&VAR_6, ",",
      VAR_13, sizeof(VAR_13)) != -1) {
     if(VAR_12)
  FUNC_13("\n");
     if(FUNC_25(VAR_5, VAR_13))
  VAR_7 = 1;
     VAR_12 = 1;
 }
 return VAR_7;
    }

    VAR_7 = FUNC_7(VAR_3, VAR_6, &VAR_8);
    if (VAR_7) {
 FUNC_10(VAR_3, VAR_7, "resolving keytab %s", VAR_6);
 return VAR_7;
    }

    VAR_7 = FUNC_8(VAR_3, VAR_8, &VAR_10);
    if(VAR_7) {
 FUNC_10(VAR_3, VAR_7, "krb5_kt_start_seq_get %s", VAR_6);
 FUNC_3(VAR_3, VAR_8);
 return VAR_7;
    }

    FUNC_13 ("%s:\n\n", VAR_6);

    VAR_11 = FUNC_18();
    FUNC_16(VAR_11, 0, "Vno", VAR_2);
    FUNC_16(VAR_11, 1, "Type", 0);
    FUNC_16(VAR_11, 2, "Principal", 0);
    if (VAR_5->timestamp_flag)
 FUNC_16(VAR_11, 3, "Date", 0);
    if(VAR_5->keys_flag)
 FUNC_16(VAR_11, 4, "Key", 0);
    FUNC_16(VAR_11, 5, "Aliases", 0);
    FUNC_21(VAR_11, "  ");

    while(FUNC_6(VAR_3, VAR_8, &VAR_9, &VAR_10) == 0){
 char VAR_14[1024], *VAR_15;

 FUNC_22(VAR_14, sizeof(VAR_14), "%d", VAR_9.vno);
 FUNC_17(VAR_11, 0, VAR_14);

 VAR_7 = FUNC_1(VAR_3,
         VAR_9.keyblock.keytype, &VAR_15);
 if (VAR_7 != 0) {
     FUNC_22(VAR_14, sizeof(VAR_14), "unknown (%d)", VAR_9.keyblock.keytype);
     FUNC_17(VAR_11, 1, VAR_14);
 } else {
     FUNC_17(VAR_11, 1, VAR_15);
     FUNC_0(VAR_15);
 }

 FUNC_9(VAR_3, VAR_9.principal, VAR_14, sizeof(VAR_14));
 FUNC_17(VAR_11, 2, VAR_14);

 if (VAR_5->timestamp_flag) {
     FUNC_2(VAR_3, VAR_9.timestamp, VAR_14,
        sizeof(VAR_14), VAR_1);
     FUNC_17(VAR_11, 3, VAR_14);
 }
 if(VAR_5->keys_flag) {
     size_t VAR_16;
     VAR_15 = FUNC_12(2 * VAR_9.keyblock.keyvalue.length + 1);
     if (VAR_15 == ((void*)0)) {
  FUNC_11(VAR_3, "malloc failed");
  VAR_7 = VAR_0;
  goto out;
     }
     for(VAR_16 = 0; VAR_16 < VAR_9.keyblock.keyvalue.length; VAR_16++)
  FUNC_22(VAR_15 + 2 * VAR_16, 3, "%02x",
    ((unsigned char*)VAR_9.keyblock.keyvalue.data)[VAR_16]);
     FUNC_17(VAR_11, 4, VAR_15);
     FUNC_0(VAR_15);
 }
 if (VAR_9.aliases) {
     unsigned int VAR_17;
     struct rk_strpool *VAR_18 = ((void*)0);

     for (VAR_17 = 0; VAR_17< VAR_9.aliases->len; VAR_17++) {
  FUNC_9(VAR_3, VAR_9.principal, VAR_14, sizeof(VAR_14));
  FUNC_15(VAR_18, "%s%s", VAR_14,
     VAR_17 + 1 < VAR_9.aliases->len ? ", " : "");

     }
     FUNC_17(VAR_11, 5, FUNC_14(VAR_18));
 }

 FUNC_5(VAR_3, &VAR_9);
    }
    VAR_7 = FUNC_4(VAR_3, VAR_8, &VAR_10);
    FUNC_20(VAR_11, VAR_4);

out:
    FUNC_19(VAR_11);

    FUNC_3(VAR_3, VAR_8);
    return VAR_7;
}
