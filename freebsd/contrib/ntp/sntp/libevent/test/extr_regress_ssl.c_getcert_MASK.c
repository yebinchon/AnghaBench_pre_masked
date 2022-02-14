
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int X509_NAME ;
typedef int X509 ;
typedef int EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,long) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int,int ,unsigned char*,int,int,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int ,int ,scalar_t__*) ;
 int * FUNC_18 () ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int) ;

__attribute__((used)) static X509 *
FUNC_21(void)
{



 X509 *VAR_2 = ((void*)0);
 X509_NAME *VAR_3 = ((void*)0);
 EVP_PKEY *VAR_4 = FUNC_18();
 int VAR_5;
 time_t VAR_6 = FUNC_19(((void*)0));

 FUNC_20(*VAR_4);

 VAR_2 = FUNC_11();
 FUNC_20(*VAR_2);
 FUNC_20(0 != FUNC_15(VAR_2, 2));
 FUNC_20(0 != FUNC_0(FUNC_8(VAR_2),
  (long)VAR_6));

 VAR_3 = FUNC_4();
 FUNC_20(*VAR_3);
 VAR_5 = FUNC_2("commonName");
 FUNC_20(VAR_1 != VAR_5);
 FUNC_20(0 != FUNC_3(
      VAR_3, VAR_5, VAR_0, (unsigned char*)"example.com",
      -1, -1, 0));

 FUNC_14(VAR_2, VAR_3);
 FUNC_12(VAR_2, VAR_3);


 FUNC_17(FUNC_7(VAR_2), 0, &VAR_6);
 VAR_6 += 3600;
 FUNC_17(FUNC_6(VAR_2), 0, &VAR_6);





 FUNC_13(VAR_2, VAR_4);
 FUNC_20(0 != FUNC_16(VAR_2, VAR_4, FUNC_1()));

 return VAR_2;
end:
 FUNC_5(VAR_2);
 return ((void*)0);
}
