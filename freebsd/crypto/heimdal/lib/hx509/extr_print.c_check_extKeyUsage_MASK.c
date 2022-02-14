
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cert_status {int dummy; } ;
typedef int hx509_validate_ctx ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
struct TYPE_10__ {size_t len; int * val; } ;
struct TYPE_8__ {size_t length; int data; } ;
struct TYPE_9__ {TYPE_1__ extnValue; } ;
typedef TYPE_2__ Extension ;
typedef TYPE_3__ ExtKeyUsage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cert_status*,int,TYPE_2__ const*) ;
 int FUNC_1 (int ,size_t,TYPE_3__*,size_t*) ;
 int FUNC_2 (int *,char,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(hx509_validate_ctx VAR_2,
    struct cert_status *VAR_3,
    enum critical_flag VAR_4,
    const Extension *VAR_5)
{
    ExtKeyUsage VAR_6;
    size_t VAR_7, VAR_8;
    int VAR_9;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_9 = FUNC_1(VAR_5->extnValue.data,
        VAR_5->extnValue.length,
        &VAR_6, &VAR_7);
    if (VAR_9) {
 FUNC_5(VAR_2, VAR_0,
         "Decoding ExtKeyUsage failed: %d", VAR_9);
 return 1;
    }
    if (VAR_7 != VAR_5->extnValue.length) {
 FUNC_5(VAR_2, VAR_0,
         "Padding data in EKU");
 FUNC_4(&VAR_6);
 return 1;
    }
    if (VAR_6.len == 0) {
 FUNC_5(VAR_2, VAR_0,
         "ExtKeyUsage length is 0");
 return 1;
    }

    for (VAR_8 = 0; VAR_8 < VAR_6.len; VAR_8++) {
 char *VAR_10;
 VAR_9 = FUNC_2 (&VAR_6.val[VAR_8], '.', &VAR_10);
 if (VAR_9) {
     FUNC_5(VAR_2, VAR_0,
      "\tEKU: failed to print oid %d", VAR_8);
     FUNC_4(&VAR_6);
     return 1;
 }
 FUNC_5(VAR_2, VAR_1,
         "\teku-%d: %s\n", VAR_8, VAR_10);;
 FUNC_3(VAR_10);
    }

    FUNC_4(&VAR_6);

    return 0;
}
