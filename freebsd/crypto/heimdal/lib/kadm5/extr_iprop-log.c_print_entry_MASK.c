
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int time_t ;
typedef int t ;
typedef int off_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
typedef int krb5_error_code ;
struct TYPE_9__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
struct TYPE_10__ {int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef int int32_t ;
struct TYPE_11__ {int kvno; int * max_renew; int * max_life; int flags; int * pw_end; int * valid_end; int principal; } ;
typedef TYPE_3__ hdb_entry ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_1__*,TYPE_3__*) ;


 scalar_t__ VAR_20 ;



 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int,int ,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int ,int ,char**) ;
 int FUNC_14 (int *) ;
 char** VAR_21 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int,char*,int ) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (int ,int ,char*,int) ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_20(kadm5_server_context *VAR_22,
     uint32_t VAR_23,
     time_t VAR_24,
     enum kadm_ops VAR_25,
     uint32_t VAR_26,
     krb5_storage *VAR_27,
     void *VAR_28)
{
    char VAR_29[256];
    int32_t VAR_30;
    hdb_entry VAR_31;
    krb5_principal VAR_32;
    char *VAR_33, *VAR_34;
    krb5_data VAR_35;
    krb5_context VAR_36 = VAR_22->context;

    off_t VAR_37 = FUNC_12(VAR_27, 0, VAR_18) + VAR_26;

    krb5_error_code VAR_38;

    FUNC_16(VAR_29, sizeof(VAR_29), "%Y-%m-%d %H:%M:%S", FUNC_14(&VAR_24));

    if((int)VAR_25 < (int)VAR_20 || (int)VAR_25 > (int)129) {
 FUNC_15("unknown op: %d\n", VAR_25);
 FUNC_12(VAR_27, VAR_37, VAR_19);
 return;
    }

    FUNC_15 ("%s: ver = %u, timestamp = %s, len = %u\n",
     VAR_21[VAR_25], VAR_23, VAR_29, VAR_26);
    switch(VAR_25) {
    case 131:
 FUNC_10(VAR_27, &VAR_32);
 FUNC_13(VAR_36, VAR_32, &VAR_33);
 FUNC_15("    %s\n", VAR_33);
 FUNC_3(VAR_33);
 FUNC_8(VAR_36, VAR_32);
 break;
    case 128:
 VAR_38 = FUNC_6(&VAR_35, VAR_26);
 if (VAR_38)
     FUNC_7 (VAR_36, 1, VAR_38, "kadm_rename: data alloc: %d", VAR_26);
 FUNC_10(VAR_27, &VAR_32);
 FUNC_11(VAR_27, VAR_35.data, VAR_35.length);
 FUNC_5(VAR_36, &VAR_35, &VAR_31);
 FUNC_13(VAR_36, VAR_32, &VAR_33);
 FUNC_13(VAR_36, VAR_31.principal, &VAR_34);
 FUNC_15("    %s -> %s\n", VAR_33, VAR_34);
 FUNC_3(VAR_33);
 FUNC_3(VAR_34);
 FUNC_8(VAR_36, VAR_32);
 FUNC_4(&VAR_31);
 break;
    case 132:
 VAR_38 = FUNC_6(&VAR_35, VAR_26);
 if (VAR_38)
     FUNC_7 (VAR_36, 1, VAR_38, "kadm_create: data alloc: %d", VAR_26);
 FUNC_11(VAR_27, VAR_35.data, VAR_35.length);
 VAR_38 = FUNC_5(VAR_36, &VAR_35, &VAR_31);
 if(VAR_38)
     FUNC_1();
 VAR_30 = ~0;
 goto foo;
    case 130:
 VAR_38 = FUNC_6(&VAR_35, VAR_26);
 if (VAR_38)
     FUNC_7 (VAR_36, 1, VAR_38, "kadm_modify: data alloc: %d", VAR_26);
 FUNC_9(VAR_27, &VAR_30);
 FUNC_11(VAR_27, VAR_35.data, VAR_35.length);
 VAR_38 = FUNC_5(VAR_36, &VAR_35, &VAR_31);
 if(VAR_38)
     FUNC_1();
    foo:
 if(VAR_31.principal ) {
     FUNC_13(VAR_36, VAR_31.principal, &VAR_33);
     FUNC_15("    principal = %s\n", VAR_33);
     FUNC_3(VAR_33);
 }
 if(VAR_30 & VAR_15) {
     if(VAR_31.valid_end == ((void*)0)) {
  FUNC_17(VAR_29, "never", sizeof(VAR_29));
     } else {
  FUNC_16(VAR_29, sizeof(VAR_29), "%Y-%m-%d %H:%M:%S",
    FUNC_14(VAR_31.valid_end));
     }
     FUNC_15("    expires = %s\n", VAR_29);
 }
 if(VAR_30 & VAR_16) {
     if(VAR_31.pw_end == ((void*)0)) {
  FUNC_17(VAR_29, "never", sizeof(VAR_29));
     } else {
  FUNC_16(VAR_29, sizeof(VAR_29), "%Y-%m-%d %H:%M:%S",
    FUNC_14(VAR_31.pw_end));
     }
     FUNC_15("    password exp = %s\n", VAR_29);
 }
 if(VAR_30 & VAR_6) {
 }
 if(VAR_30 & VAR_0) {
     FUNC_18(FUNC_0(VAR_31.flags),
     FUNC_2(), VAR_29, sizeof(VAR_29));
     FUNC_15("    attributes = %s\n", VAR_29);
 }
 if(VAR_30 & VAR_8) {
     if(VAR_31.max_life == ((void*)0))
  FUNC_17(VAR_29, "for ever", sizeof(VAR_29));
     else
  FUNC_19(*VAR_31.max_life, VAR_29, sizeof(VAR_29));
     FUNC_15("    max life = %s\n", VAR_29);
 }
 if(VAR_30 & VAR_9) {
     if(VAR_31.max_renew == ((void*)0))
  FUNC_17(VAR_29, "for ever", sizeof(VAR_29));
     else
  FUNC_19(*VAR_31.max_renew, VAR_29, sizeof(VAR_29));
     FUNC_15("    max rlife = %s\n", VAR_29);
 }
 if(VAR_30 & VAR_12) {
     FUNC_15("    mod time\n");
 }
 if(VAR_30 & VAR_11) {
     FUNC_15("    mod name\n");
 }
 if(VAR_30 & VAR_4) {
     FUNC_15("    kvno = %d\n", VAR_31.kvno);
 }
 if(VAR_30 & VAR_10) {
     FUNC_15("    mkvno\n");
 }
 if(VAR_30 & VAR_1) {
     FUNC_15("    aux attributes\n");
 }
 if(VAR_30 & VAR_13) {
     FUNC_15("    policy\n");
 }
 if(VAR_30 & VAR_14) {
     FUNC_15("    mod time\n");
 }
 if(VAR_30 & VAR_7) {
     FUNC_15("    last success\n");
 }
 if(VAR_30 & VAR_5) {
     FUNC_15("    last failed\n");
 }
 if(VAR_30 & VAR_2) {
     FUNC_15("    fail auth count\n");
 }
 if(VAR_30 & VAR_3) {
     FUNC_15("    key data\n");
 }
 if(VAR_30 & VAR_17) {
     FUNC_15("    tl data\n");
 }
 FUNC_4(&VAR_31);
 break;
    case 129 :
 break;
    default:
 FUNC_1();
    }
    FUNC_12(VAR_27, VAR_37, VAR_19);
}
