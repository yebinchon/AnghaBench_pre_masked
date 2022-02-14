
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cert_status {int isca; } ;
typedef int hx509_validate_ctx ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
struct TYPE_10__ {scalar_t__* cA; int * pathLenConstraint; } ;
struct TYPE_8__ {size_t length; int data; } ;
struct TYPE_9__ {int critical; TYPE_1__ extnValue; } ;
typedef TYPE_2__ Extension ;
typedef TYPE_3__ BasicConstraints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cert_status*,int,TYPE_2__ const*) ;
 int FUNC_1 (int ,size_t,TYPE_3__*,size_t*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(hx509_validate_ctx VAR_2,
         struct cert_status *VAR_3,
         enum critical_flag VAR_4,
         const Extension *VAR_5)
{
    BasicConstraints VAR_6;
    size_t VAR_7;
    int VAR_8;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_8 = FUNC_1(VAR_5->extnValue.data, VAR_5->extnValue.length,
      &VAR_6, &VAR_7);
    if (VAR_8) {
 FUNC_3("\tret = %d while decoding BasicConstraints\n", VAR_8);
 return 0;
    }
    if (VAR_7 != VAR_5->extnValue.length)
 FUNC_3("\tlength of der data isn't same as extension\n");

    FUNC_4(VAR_2, VAR_1,
     "\tis %sa CA\n", VAR_6.cA && *VAR_6.cA ? "" : "NOT ");
    if (VAR_6.pathLenConstraint)
 FUNC_4(VAR_2, VAR_1,
         "\tpathLenConstraint: %d\n", *VAR_6.pathLenConstraint);

    if (VAR_6.cA) {
 if (*VAR_6.cA) {
     if (!VAR_5->critical)
  FUNC_4(VAR_2, VAR_0,
          "Is a CA and not BasicConstraints CRITICAL\n");
     VAR_3->isca = 1;
 }
 else
     FUNC_4(VAR_2, VAR_0,
      "cA is FALSE, not allowed to be\n");
    }
    FUNC_2(&VAR_6);

    return 0;
}
