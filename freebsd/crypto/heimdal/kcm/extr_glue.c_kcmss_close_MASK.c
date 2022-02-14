
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_2__* krb5_ccache ;
typedef int kcm_ccache ;
struct TYPE_5__ {scalar_t__ length; int * data; } ;
struct TYPE_6__ {TYPE_1__ data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0,
     krb5_ccache VAR_1)
{
    kcm_ccache VAR_2 = FUNC_0(VAR_1);

    FUNC_1(VAR_2);

    VAR_1->data.data = ((void*)0);
    VAR_1->data.length = 0;

    return 0;
}
