
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct cert_status {int dummy; } ;
typedef int hx509_validate_ctx ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
struct TYPE_12__ {size_t len; TYPE_2__* val; } ;
struct TYPE_9__ {int length; int data; } ;
struct TYPE_11__ {TYPE_1__ extnValue; } ;
struct TYPE_10__ {int accessLocation; int accessMethod; } ;
typedef TYPE_3__ Extension ;
typedef TYPE_4__ AuthorityInfoAccessSyntax ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cert_status*,int,TYPE_3__ const*) ;
 int FUNC_1 (int ,int ,TYPE_4__*,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,char**) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(hx509_validate_ctx VAR_2,
     struct cert_status *VAR_3,
     enum critical_flag VAR_4,
     const Extension *VAR_5)
{
    AuthorityInfoAccessSyntax VAR_6;
    size_t VAR_7;
    int VAR_8;
    size_t VAR_9;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_8 = FUNC_1(VAR_5->extnValue.data,
        VAR_5->extnValue.length,
        &VAR_6, &VAR_7);
    if (VAR_8) {
 FUNC_6("\tret = %d while decoding AuthorityInfoAccessSyntax\n", VAR_8);
 return 0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_6.len; VAR_9++) {
 char *VAR_10;
 FUNC_7(VAR_2, VAR_0,
         "\ttype: ");
 FUNC_5(&VAR_6.val[VAR_9].accessMethod, VAR_1, VAR_2);
 FUNC_4(&VAR_6.val[VAR_9].accessLocation, &VAR_10);
 FUNC_7(VAR_2, VAR_0,
         "\n\tdirname: %s\n", VAR_10);
 FUNC_2(VAR_10);
    }
    FUNC_3(&VAR_6);

    return 0;
}
