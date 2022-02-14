
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ldns_status ;
typedef int ldns_buffer ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (unsigned char*,size_t,scalar_t__) ;
 int FUNC_4 (unsigned char*,size_t,int *,int *,int const*) ;

__attribute__((used)) static ldns_status
FUNC_5(unsigned char* VAR_2, size_t VAR_3,
 ldns_buffer* VAR_4, unsigned char* VAR_5, size_t VAR_6, uint8_t VAR_7)
{
        EVP_PKEY *VAR_8;
        ldns_status VAR_9;
        const EVP_MD *VAR_10;

        VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
        if(!VAR_8) {

  return VAR_1;
        }
        if(VAR_7 == VAR_0)
                VAR_10 = FUNC_1();
        else VAR_10 = FUNC_2();
 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_8, VAR_10);
 FUNC_0(VAR_8);
 return VAR_9;
}
