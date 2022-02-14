
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token ;
typedef int ldns_rdf ;
typedef scalar_t__ ldns_algorithm ;
typedef int FILE ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,char*,char*,char*,int,int*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int **,char*) ;

__attribute__((used)) static EVP_PKEY*
FUNC_14(FILE* VAR_5, ldns_algorithm VAR_6, int* VAR_7)
{
 char VAR_8[16384];
        ldns_rdf* VAR_9 = ((void*)0);
        unsigned char* VAR_10;
        BIGNUM* VAR_11;
        EVP_PKEY* VAR_12;
        EC_KEY* VAR_13;
 if (FUNC_9(VAR_5, "PrivateKey", ": ", VAR_8, "\n",
  sizeof(VAR_8), VAR_7) == -1)
  return ((void*)0);
 if(FUNC_13(&VAR_9, VAR_8) != VAR_2)
  return ((void*)0);
        VAR_10 = (unsigned char*)FUNC_10(VAR_9);

        if(VAR_6 == VAR_0)
                VAR_13 = FUNC_3(VAR_3);
        else if(VAR_6 == VAR_1)
                VAR_13 = FUNC_3(VAR_4);
        else VAR_13 = ((void*)0);
        if(!VAR_13) {
         FUNC_11(VAR_9);
                return ((void*)0);
        }
 VAR_11 = FUNC_0(VAR_10, (int)FUNC_12(VAR_9), ((void*)0));
 FUNC_11(VAR_9);
        if(!VAR_11) {
                FUNC_2(VAR_13);
                return ((void*)0);
        }
        FUNC_4(VAR_13, VAR_11);
        FUNC_1(VAR_11);
        if(!FUNC_8(VAR_13)) {
                FUNC_2(VAR_13);
                return ((void*)0);
        }

        VAR_12 = FUNC_7();
        if(!VAR_12) {
                FUNC_2(VAR_13);
                return ((void*)0);
        }
        if (!FUNC_5(VAR_12, VAR_13)) {
  FUNC_6(VAR_12);
                FUNC_2(VAR_13);
                return ((void*)0);
 }
        return VAR_12;
}
