
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct _RC2_params {int maximum_effective_key; } ;
typedef TYPE_1__* hx509_crypto ;
typedef int hx509_context ;
struct TYPE_11__ {int length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_12__ {int rc2ParameterVersion; int iv; } ;
struct TYPE_10__ {struct _RC2_params* param; int c; } ;
typedef TYPE_3__ CMSRC2CBCParameter ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct _RC2_params* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*,size_t*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (struct _RC2_params*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(hx509_context VAR_2, const heim_octet_string *VAR_3,
     hx509_crypto VAR_4, heim_octet_string *VAR_5)
{
    CMSRC2CBCParameter VAR_6;
    struct _RC2_params *VAR_7;
    size_t VAR_8;
    int VAR_9;

    VAR_9 = FUNC_4(VAR_3->data, VAR_3->length,
        &VAR_6, &VAR_8);
    if (VAR_9) {
 FUNC_8(VAR_2);
 return VAR_9;
    }

    VAR_7 = FUNC_3(1, sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {
 FUNC_7(&VAR_6);
 FUNC_8(VAR_2);
 return VAR_0;
    }
    switch(VAR_6.rc2ParameterVersion) {
    case 160:
 VAR_4->c = FUNC_0();
 VAR_7->maximum_effective_key = 40;
 break;
    case 120:
 VAR_4->c = FUNC_1();
 VAR_7->maximum_effective_key = 64;
 break;
    case 58:
 VAR_4->c = FUNC_2();
 VAR_7->maximum_effective_key = 128;
 break;
    default:
 FUNC_6(VAR_7);
 FUNC_7(&VAR_6);
 return VAR_1;
    }
    if (VAR_5)
 VAR_9 = FUNC_5(&VAR_6.iv, VAR_5);
    FUNC_7(&VAR_6);
    if (VAR_9) {
 FUNC_6(VAR_7);
 FUNC_8(VAR_2);
    } else
 VAR_4->param = VAR_7;

    return VAR_9;
}
