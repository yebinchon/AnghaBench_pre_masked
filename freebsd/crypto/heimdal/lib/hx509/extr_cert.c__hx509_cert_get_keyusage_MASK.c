
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_4__ {int length; int data; } ;
struct TYPE_5__ {TYPE_1__ extnValue; } ;
typedef int KeyUsage ;
typedef TYPE_2__ Extension ;
typedef int Certificate ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,size_t*) ;
 TYPE_2__* FUNC_3 (int *,int *,size_t*) ;
 int FUNC_4 (int *,int ,int) ;

int
FUNC_5(hx509_context VAR_2,
    hx509_cert VAR_3,
    KeyUsage *VAR_4)
{
    Certificate *VAR_5;
    const Extension *VAR_6;
    size_t VAR_7;
    int VAR_8;
    size_t VAR_9 = 0;

    FUNC_4(VAR_4, 0, sizeof(*VAR_4));

    VAR_5 = FUNC_1(VAR_3);

    if (FUNC_0(VAR_5) < 3)
 return 0;

    VAR_6 = FUNC_3(VAR_5, &VAR_1, &VAR_9);
    if (VAR_6 == ((void*)0))
 return VAR_0;

    VAR_8 = FUNC_2(VAR_6->extnValue.data, VAR_6->extnValue.length, VAR_4, &VAR_7);
    if (VAR_8)
 return VAR_8;
    return 0;
}
