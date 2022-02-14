
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cert_status {int haveAKI; } ;
typedef int hx509_validate_ctx ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
struct TYPE_11__ {TYPE_2__* keyIdentifier; } ;
struct TYPE_8__ {size_t length; int data; } ;
struct TYPE_10__ {TYPE_1__ extnValue; } ;
struct TYPE_9__ {int length; int data; } ;
typedef TYPE_3__ Extension ;
typedef TYPE_4__ AuthorityKeyIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cert_status*,int,TYPE_3__ const*) ;
 int FUNC_1 (int ,size_t,TYPE_4__*,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(hx509_validate_ctx VAR_2,
        struct cert_status *VAR_3,
        enum critical_flag VAR_4,
        const Extension *VAR_5)
{
    AuthorityKeyIdentifier VAR_6;
    size_t VAR_7;
    int VAR_8;

    VAR_3->haveAKI = 1;
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_8 = FUNC_1(VAR_5->extnValue.data,
     VAR_5->extnValue.length,
     &VAR_6, &VAR_7);
    if (VAR_8) {
 FUNC_4(VAR_2, VAR_0,
         "Decoding AuthorityKeyIdentifier failed: %d", VAR_8);
 return 1;
    }
    if (VAR_7 != VAR_5->extnValue.length) {
 FUNC_4(VAR_2, VAR_0,
         "Decoding SKI ahve extra bits on the end");
 return 1;
    }

    if (VAR_6.keyIdentifier) {
 char *VAR_9;
 FUNC_3(VAR_6.keyIdentifier->data, VAR_6.keyIdentifier->length, &VAR_9);
 if (VAR_9) {
     FUNC_4(VAR_2, VAR_1,
      "\tauthority key id: %s\n", VAR_9);
     FUNC_2(VAR_9);
 }
    }

    return 0;
}
