
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_context ;
typedef int hx509_cert ;
typedef int Certificate ;


 int VAR_0 ;
 int FUNC_0 (void const*,size_t,int *,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int ,int,char*) ;

int
FUNC_4(hx509_context VAR_1,
       const void *VAR_2,
       size_t VAR_3,
       hx509_cert *VAR_4)
{
    Certificate VAR_5;
    size_t VAR_6;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_5, &VAR_6);
    if (VAR_7) {
 FUNC_3(VAR_1, 0, VAR_7, "Failed to decode certificate");
 return VAR_7;
    }
    if (VAR_6 != VAR_3) {
 FUNC_1(&VAR_5);
 FUNC_3(VAR_1, 0, VAR_0,
          "Extra data after certificate");
 return VAR_0;
    }

    VAR_7 = FUNC_2(VAR_1, &VAR_5, VAR_4);
    FUNC_1(&VAR_5);
    return VAR_7;
}
