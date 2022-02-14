
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
typedef TYPE_2__* hx509_ca_tbs ;
struct TYPE_10__ {size_t len; int * val; } ;
struct TYPE_8__ {int serial; int key; } ;
struct TYPE_9__ {int key_usage; TYPE_1__ flags; int spki; int notAfter; int notBefore; int serial; scalar_t__ subject; } ;
typedef int KeyUsage ;
typedef TYPE_3__ ExtKeyUsage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_2__*,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,scalar_t__*) ;
 int FUNC_12 (scalar_t__*) ;
 int FUNC_13 (int ,int ,int,char*) ;

int
FUNC_14(hx509_context VAR_7,
     hx509_ca_tbs VAR_8,
     int VAR_9,
     hx509_cert VAR_10)
{
    int VAR_11;

    if (VAR_9 & VAR_6) {
 if (VAR_8->subject)
     FUNC_12(&VAR_8->subject);
 VAR_11 = FUNC_11(VAR_10, &VAR_8->subject);
 if (VAR_11) {
     FUNC_13(VAR_7, 0, VAR_11,
       "Failed to get subject from template");
     return VAR_11;
 }
    }
    if (VAR_9 & VAR_4) {
 FUNC_3(&VAR_8->serial);
 VAR_11 = FUNC_10(VAR_10, &VAR_8->serial);
 VAR_8->flags.serial = !VAR_11;
 if (VAR_11) {
     FUNC_13(VAR_7, 0, VAR_11,
       "Failed to copy serial number");
     return VAR_11;
 }
    }
    if (VAR_9 & VAR_3)
 VAR_8->notBefore = FUNC_9(VAR_10);
    if (VAR_9 & VAR_2)
 VAR_8->notAfter = FUNC_8(VAR_10);
    if (VAR_9 & VAR_5) {
 FUNC_5(&VAR_8->spki);
 VAR_11 = FUNC_7(VAR_7, VAR_10, &VAR_8->spki);
 VAR_8->flags.key = !VAR_11;
 if (VAR_11)
     return VAR_11;
    }
    if (VAR_9 & VAR_1) {
 KeyUsage VAR_12;
 VAR_11 = FUNC_2(VAR_7, VAR_10, &VAR_12);
 if (VAR_11)
     return VAR_11;
 VAR_8->key_usage = FUNC_0(VAR_12);
    }
    if (VAR_9 & VAR_0) {
 ExtKeyUsage VAR_13;
 size_t VAR_14;
 VAR_11 = FUNC_1(VAR_7, VAR_10, &VAR_13);
 if (VAR_11)
     return VAR_11;
 for (VAR_14 = 0; VAR_14 < VAR_13.len; VAR_14++) {
     VAR_11 = FUNC_6(VAR_7, VAR_8, &VAR_13.val[VAR_14]);
     if (VAR_11) {
  FUNC_4(&VAR_13);
  return VAR_11;
     }
 }
 FUNC_4(&VAR_13);
    }
    return 0;
}
