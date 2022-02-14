
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_key {int * private_key; } ;
typedef int hx509_cursor ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int * hx509_cert ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int **) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_9(hx509_context VAR_2, struct private_key *VAR_3, hx509_certs VAR_4)
{
    hx509_cursor VAR_5;
    hx509_cert VAR_6;
    int VAR_7, VAR_8 = VAR_0;

    if (VAR_3->private_key == ((void*)0)) {
 FUNC_8(VAR_2, 0, VAR_1,
          "No private key to compare with");
 return VAR_1;
    }

    VAR_7 = FUNC_6(VAR_2, VAR_4, &VAR_5);
    if (VAR_7)
 return VAR_7;

    VAR_6 = ((void*)0);
    while (1) {
 VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_5, &VAR_6);
 if (VAR_7)
     break;
 if (VAR_6 == ((void*)0))
     break;
 if (FUNC_1(VAR_6)) {
     FUNC_3(VAR_6);
     continue;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_3->private_key);
 if (VAR_7) {
     FUNC_0(VAR_6, VAR_3->private_key);
     FUNC_3(VAR_6);
     VAR_8 = 0;
     break;
 }
 FUNC_3(VAR_6);
    }

    FUNC_4(VAR_2, VAR_4, VAR_5);

    if (VAR_8)
 FUNC_7(VAR_2);

    return VAR_8;
}
