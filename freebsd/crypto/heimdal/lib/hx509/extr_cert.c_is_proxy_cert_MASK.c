
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
struct TYPE_4__ {size_t length; int data; } ;
struct TYPE_5__ {TYPE_1__ extnValue; } ;
typedef int ProxyCertInfo ;
typedef TYPE_2__ Extension ;
typedef int Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t,int *,size_t*) ;
 TYPE_2__* FUNC_1 (int const*,int *,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_3,
       const Certificate *VAR_4,
       ProxyCertInfo *VAR_5)
{
    ProxyCertInfo VAR_6;
    const Extension *VAR_7;
    size_t VAR_8;
    int VAR_9;
    size_t VAR_10 = 0;

    if (VAR_5)
 FUNC_4(VAR_5, 0, sizeof(*VAR_5));

    VAR_7 = FUNC_1(VAR_4, &VAR_2, &VAR_10);
    if (VAR_7 == ((void*)0)) {
 FUNC_3(VAR_3);
 return VAR_0;
    }

    VAR_9 = FUNC_0(VAR_7->extnValue.data,
          VAR_7->extnValue.length,
          &VAR_6,
          &VAR_8);
    if (VAR_9) {
 FUNC_3(VAR_3);
 return VAR_9;
    }
    if (VAR_8 != VAR_7->extnValue.length) {
 FUNC_2(&VAR_6);
 FUNC_3(VAR_3);
 return VAR_1;
    }
    if (VAR_5 == ((void*)0))
 FUNC_2(&VAR_6);
    else
 *VAR_5 = VAR_6;

    return 0;
}
