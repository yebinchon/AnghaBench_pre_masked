
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_context ;
typedef int hx509_cert ;
typedef int ExtKeyUsage ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;

int
FUNC_4(hx509_context VAR_1,
      hx509_cert VAR_2,
      ExtKeyUsage *VAR_3)
{
    int VAR_4;

    FUNC_3(VAR_3, 0, sizeof(*VAR_3));

    VAR_4 = FUNC_1(FUNC_0(VAR_2), VAR_3);
    if (VAR_4 && VAR_4 != VAR_0) {
 FUNC_2(VAR_1);
 return VAR_4;
    }
    return 0;
}
