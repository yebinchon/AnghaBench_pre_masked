
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_5__ {unsigned int len; int * val; } ;
typedef TYPE_1__ hx509_path ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,char*) ;

int
FUNC_6(hx509_context VAR_3,
        int VAR_4,
        time_t VAR_5,
        hx509_certs VAR_6,
        unsigned int VAR_7,
        hx509_cert VAR_8,
        hx509_certs VAR_9,
        hx509_path *VAR_10)
{
    hx509_cert VAR_11, VAR_12;
    int VAR_13;

    if (VAR_7 == 0)
 VAR_7 = VAR_2;

    VAR_13 = FUNC_0(VAR_3, VAR_10, VAR_8);
    if (VAR_13)
 return VAR_13;

    VAR_12 = FUNC_4(VAR_8);

    while (!FUNC_1(VAR_3, VAR_6, VAR_12)) {

 VAR_13 = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_10,
     VAR_9, VAR_12, &VAR_11);
 FUNC_3(VAR_12);
 if (VAR_13)
     return VAR_13;

 VAR_13 = FUNC_0(VAR_3, VAR_10, VAR_11);
 if (VAR_13)
     return VAR_13;
 VAR_12 = VAR_11;

 if (VAR_10->len > VAR_7) {
     FUNC_3(VAR_12);
     FUNC_5(VAR_3, 0, VAR_1,
       "Path too long while bulding "
       "certificate chain");
     return VAR_1;
 }
    }

    if ((VAR_4 & VAR_0) &&
 VAR_10->len > 0 &&
 FUNC_1(VAR_3, VAR_6, VAR_10->val[VAR_10->len - 1]))
    {
 FUNC_3(VAR_10->val[VAR_10->len - 1]);
 VAR_10->len--;
    }

    FUNC_3(VAR_12);
    return 0;
}
