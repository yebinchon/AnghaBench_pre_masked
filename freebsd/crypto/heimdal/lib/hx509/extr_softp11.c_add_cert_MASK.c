
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int type ;
struct st_object {void* cert; } ;
struct foo {char* label; char* id; } ;
typedef int mech_type ;
typedef int key_type ;
typedef int hx509_name ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_4__ {char* data; int length; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int flags ;
typedef int cert_type ;
typedef int bool_true ;
typedef int bool_false ;
typedef scalar_t__ CK_RV ;
typedef char CK_OBJECT_CLASS ;
typedef char CK_MECHANISM_TYPE ;
typedef char CK_KEY_TYPE ;
typedef char CK_FLAGS ;
typedef char CK_CERTIFICATE_TYPE ;
typedef char CK_BBOOL ;
typedef int AlgorithmIdentifier ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 char VAR_31 ;
 char VAR_32 ;
 char VAR_33 ;
 char VAR_34 ;
 char VAR_35 ;
 char VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 char VAR_40 ;
 char VAR_41 ;
 scalar_t__ FUNC_0 (struct st_object*) ;
 int FUNC_1 (struct st_object*,int ,int ,char*,int) ;
 int FUNC_2 (int ,struct st_object*,char,int ) ;
 struct st_object* FUNC_3 () ;
 int VAR_42 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(hx509_context VAR_43, void *VAR_44, hx509_cert VAR_45)
{
    static char VAR_46[] = "";
    struct foo *VAR_47 = (struct foo *)VAR_44;
    struct st_object *VAR_48 = ((void*)0);
    CK_OBJECT_CLASS VAR_49;
    CK_BBOOL VAR_50 = VAR_41;
    CK_BBOOL VAR_51 = VAR_40;
    CK_CERTIFICATE_TYPE VAR_52 = VAR_31;
    CK_KEY_TYPE VAR_53;
    CK_MECHANISM_TYPE VAR_54;
    CK_RV VAR_55 = VAR_38;
    int VAR_56;
    heim_octet_string VAR_57, VAR_58, VAR_59, VAR_60;

    FUNC_14("adding certificate\n");

    VAR_60.data = ((void*)0);
    VAR_60.length = 0;
    VAR_57 = VAR_58 = VAR_59 = VAR_60;

    VAR_56 = FUNC_5(VAR_43, VAR_45, &VAR_57);
    if (VAR_56)
 goto out;

    {
     hx509_name VAR_61;

     VAR_56 = FUNC_7(VAR_45, &VAR_61);
     if (VAR_56)
  goto out;
     VAR_56 = FUNC_11(VAR_61, &VAR_59);
     FUNC_12(&VAR_61);
     if (VAR_56)
  goto out;

     VAR_56 = FUNC_8(VAR_45, &VAR_61);
     if (VAR_56)
  goto out;
     VAR_56 = FUNC_11(VAR_61, &VAR_58);
     FUNC_12(&VAR_61);
     if (VAR_56)
  goto out;
    }

    {
 AlgorithmIdentifier VAR_62;

 VAR_56 = FUNC_6(VAR_42, VAR_45, &VAR_62);
 if (VAR_56) {
     VAR_55 = VAR_37;
     goto out;
 }

 VAR_53 = VAR_32;

 FUNC_4(&VAR_62);
    }


    VAR_49 = VAR_34;
    VAR_48 = FUNC_3();
    if (VAR_48 == ((void*)0)) {
 VAR_55 = VAR_37;
 goto out;
    }

    VAR_48->cert = FUNC_10(VAR_45);

    FUNC_1(VAR_48, 0, VAR_2, &VAR_49, sizeof(VAR_49));
    FUNC_1(VAR_48, 0, VAR_24, &VAR_50, sizeof(VAR_50));
    FUNC_1(VAR_48, 0, VAR_16, &VAR_51, sizeof(VAR_51));
    FUNC_1(VAR_48, 0, VAR_14, &VAR_51, sizeof(VAR_51));
    FUNC_1(VAR_48, 0, VAR_12, VAR_47->label, FUNC_15(VAR_47->label));

    FUNC_1(VAR_48, 0, VAR_1, &VAR_52, sizeof(VAR_52));
    FUNC_1(VAR_48, 0, VAR_8, VAR_47->id, FUNC_15(VAR_47->id));

    FUNC_1(VAR_48, 0, VAR_23, VAR_58.data, VAR_58.length);
    FUNC_1(VAR_48, 0, VAR_9, VAR_59.data, VAR_59.length);
    FUNC_1(VAR_48, 0, VAR_19, VAR_60.data, VAR_60.length);
    FUNC_1(VAR_48, 0, VAR_27, VAR_57.data, VAR_57.length);
    FUNC_1(VAR_48, 0, VAR_25, &VAR_51, sizeof(VAR_51));

    FUNC_14("add cert ok: %lx\n", (unsigned long)FUNC_0(VAR_48));

    VAR_49 = VAR_36;
    VAR_48 = FUNC_3();
    if (VAR_48 == ((void*)0)) {
 VAR_55 = VAR_37;
 goto out;
    }
    VAR_48->cert = FUNC_10(VAR_45);

    FUNC_1(VAR_48, 0, VAR_2, &VAR_49, sizeof(VAR_49));
    FUNC_1(VAR_48, 0, VAR_24, &VAR_50, sizeof(VAR_50));
    FUNC_1(VAR_48, 0, VAR_16, &VAR_51, sizeof(VAR_51));
    FUNC_1(VAR_48, 0, VAR_14, &VAR_51, sizeof(VAR_51));
    FUNC_1(VAR_48, 0, VAR_12, VAR_47->label, FUNC_15(VAR_47->label));

    FUNC_1(VAR_48, 0, VAR_11, &VAR_53, sizeof(VAR_53));
    FUNC_1(VAR_48, 0, VAR_8, VAR_47->id, FUNC_15(VAR_47->id));
    FUNC_1(VAR_48, 0, VAR_22, VAR_46, 1);
    FUNC_1(VAR_48, 0, VAR_6, VAR_46, 1);
    FUNC_1(VAR_48, 0, VAR_4, &VAR_51, sizeof(VAR_51));
    FUNC_1(VAR_48, 0, VAR_13, &VAR_51, sizeof(VAR_51));
    VAR_54 = VAR_33;
    FUNC_1(VAR_48, 0, VAR_10, &VAR_54, sizeof(VAR_54));

    FUNC_1(VAR_48, 0, VAR_23, VAR_58.data, VAR_58.length);
    FUNC_1(VAR_48, 0, VAR_5, &VAR_50, sizeof(VAR_50));
    FUNC_1(VAR_48, 0, VAR_28, &VAR_50, sizeof(VAR_50));
    FUNC_1(VAR_48, 0, VAR_29, &VAR_51, sizeof(VAR_51));
    FUNC_1(VAR_48, 0, VAR_30, &VAR_50, sizeof(VAR_50));
    FUNC_1(VAR_48, 0, VAR_25, &VAR_50, sizeof(VAR_50));

    FUNC_2(VAR_43, VAR_48, VAR_53, VAR_45);

    FUNC_14("add key ok: %lx\n", (unsigned long)FUNC_0(VAR_48));

    if (FUNC_9(VAR_45)) {
 CK_FLAGS VAR_63;

 VAR_49 = VAR_35;
 VAR_48 = FUNC_3();
 if (VAR_48 == ((void*)0)) {
     VAR_55 = VAR_37;
     goto out;
 }
 VAR_48->cert = FUNC_10(VAR_45);

 FUNC_1(VAR_48, 0, VAR_2, &VAR_49, sizeof(VAR_49));
 FUNC_1(VAR_48, 0, VAR_24, &VAR_50, sizeof(VAR_50));
 FUNC_1(VAR_48, 0, VAR_16, &VAR_50, sizeof(VAR_51));
 FUNC_1(VAR_48, 0, VAR_14, &VAR_51, sizeof(VAR_51));
 FUNC_1(VAR_48, 0, VAR_12, VAR_47->label, FUNC_15(VAR_47->label));

 FUNC_1(VAR_48, 0, VAR_11, &VAR_53, sizeof(VAR_53));
 FUNC_1(VAR_48, 0, VAR_8, VAR_47->id, FUNC_15(VAR_47->id));
 FUNC_1(VAR_48, 0, VAR_22, VAR_46, 1);
 FUNC_1(VAR_48, 0, VAR_6, VAR_46, 1);
 FUNC_1(VAR_48, 0, VAR_4, &VAR_51, sizeof(VAR_51));
 FUNC_1(VAR_48, 0, VAR_13, &VAR_51, sizeof(VAR_51));
 VAR_54 = VAR_33;
 FUNC_1(VAR_48, 0, VAR_10, &VAR_54, sizeof(VAR_54));

 FUNC_1(VAR_48, 0, VAR_23, VAR_58.data, VAR_58.length);
 FUNC_1(VAR_48, 0, VAR_18, &VAR_50, sizeof(VAR_50));
 FUNC_1(VAR_48, 0, VAR_17, &VAR_51, sizeof(VAR_50));
 VAR_63 = 0;
 FUNC_1(VAR_48, 0, VAR_0, &VAR_63, sizeof(VAR_63));

 FUNC_1(VAR_48, 0, VAR_3, &VAR_50, sizeof(VAR_50));
 FUNC_1(VAR_48, 0, VAR_20, &VAR_50, sizeof(VAR_50));
 FUNC_1(VAR_48, 0, VAR_21, &VAR_51, sizeof(VAR_51));
 FUNC_1(VAR_48, 0, VAR_26, &VAR_50, sizeof(VAR_50));
 FUNC_1(VAR_48, 0, VAR_7, &VAR_50, sizeof(VAR_50));
 FUNC_1(VAR_48, 0, VAR_15, &VAR_51, sizeof(VAR_51));

 FUNC_2(VAR_43, VAR_48, VAR_53, VAR_45);
    }

    VAR_55 = VAR_39;
 out:
    if (VAR_55 != VAR_39) {
 FUNC_14("something went wrong when adding cert!\n");

                 ;
    }
    FUNC_13(VAR_57.data);
    FUNC_13(VAR_60.data);
    FUNC_13(VAR_59.data);
    FUNC_13(VAR_58.data);

    return 0;
}
