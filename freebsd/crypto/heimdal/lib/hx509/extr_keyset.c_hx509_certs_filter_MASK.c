
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_query ;
typedef int hx509_cursor ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int * hx509_cert ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int *) ;
 int FUNC_1 (int ,int ,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int *,int *) ;
 int FUNC_7 (int ,int ,int ,int **) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ) ;

int
FUNC_10(hx509_context VAR_1,
     hx509_certs VAR_2,
     const hx509_query *VAR_3,
     hx509_certs *VAR_4)
{
    hx509_cursor VAR_5;
    hx509_cert VAR_6;
    int VAR_7, VAR_8 = 0;

    FUNC_1(VAR_1, 0, VAR_3);

    VAR_7 = FUNC_6(VAR_1, "MEMORY:filter-certs", 0,
      ((void*)0), VAR_4);
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_8(VAR_1, VAR_2, &VAR_5);
    if (VAR_7) {
 FUNC_5(VAR_4);
 return VAR_7;
    }

    VAR_6 = ((void*)0);
    while (1) {
 VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_5, &VAR_6);
 if (VAR_7)
     break;
 if (VAR_6 == ((void*)0))
     break;
 if (FUNC_0(VAR_1, VAR_3, VAR_6)) {
     FUNC_3(VAR_1, *VAR_4, VAR_6);
     VAR_8 = 1;
 }
 FUNC_2(VAR_6);
    }

    FUNC_4(VAR_1, VAR_2, VAR_5);
    if (VAR_7) {
 FUNC_5(VAR_4);
 return VAR_7;
    }





    if (!VAR_8) {
 FUNC_5(VAR_4);
 FUNC_9(VAR_1);
 return VAR_0;
    }

    return 0;
}
