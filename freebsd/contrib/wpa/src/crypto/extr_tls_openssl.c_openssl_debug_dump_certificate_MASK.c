
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serial_num ;
typedef int buf ;
typedef int X509 ;
typedef int EVP_PKEY ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int,char*,int ,char*) ;
 int FUNC_9 (char*,int,int ,int ) ;

__attribute__((used)) static void FUNC_10(int VAR_1, X509 *VAR_2)
{
 char VAR_3[256];
 EVP_PKEY *VAR_4;
 ASN1_INTEGER *VAR_5;
 char VAR_6[128];

 FUNC_3(FUNC_6(VAR_2), VAR_3, sizeof(VAR_3));

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5)
  FUNC_9(VAR_6, sizeof(VAR_6),
        FUNC_0(VAR_5),
        FUNC_1(VAR_5));
 else
  VAR_6[0] = '\0';

 VAR_4 = FUNC_4(VAR_2);
 FUNC_8(VAR_0, "%d: %s (%s) %s", VAR_1, VAR_3,
     FUNC_7(VAR_4), VAR_6);
 FUNC_2(VAR_4);
}
