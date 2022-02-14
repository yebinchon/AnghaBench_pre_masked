
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_query ;
typedef int hx509_cursor ;
typedef int hx509_context ;
typedef TYPE_2__* hx509_certs ;
typedef int * hx509_cert ;
struct TYPE_9__ {int ops_data; TYPE_1__* ops; } ;
struct TYPE_8__ {int (* query ) (int ,TYPE_2__*,int ,int const*,int **) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int *) ;
 int FUNC_1 (int ,int ,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int **) ;
 int FUNC_5 (int ,TYPE_2__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*,int ,int const*,int **) ;

int
FUNC_8(hx509_context VAR_1,
   hx509_certs VAR_2,
   const hx509_query *VAR_3,
   hx509_cert *VAR_4)
{
    hx509_cursor VAR_5;
    hx509_cert VAR_6;
    int VAR_7;

    *VAR_4 = ((void*)0);

    FUNC_1(VAR_1, 0, VAR_3);

    if (VAR_2->ops->query)
 return (*VAR_2->ops->query)(VAR_1, VAR_2, VAR_2->ops_data, VAR_3, VAR_4);

    VAR_7 = FUNC_5(VAR_1, VAR_2, &VAR_5);
    if (VAR_7)
 return VAR_7;

    VAR_6 = ((void*)0);
    while (1) {
 VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_5, &VAR_6);
 if (VAR_7)
     break;
 if (VAR_6 == ((void*)0))
     break;
 if (FUNC_0(VAR_1, VAR_3, VAR_6)) {
     *VAR_4 = VAR_6;
     break;
 }
 FUNC_2(VAR_6);
    }

    FUNC_3(VAR_1, VAR_2, VAR_5);
    if (VAR_7)
 return VAR_7;




    if (VAR_6 == ((void*)0)) {
 FUNC_6(VAR_1);
 return VAR_0;
    }

    return 0;
}
