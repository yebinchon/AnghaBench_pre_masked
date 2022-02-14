
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_buffer ;
typedef int EVP_PKEY ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,size_t,int *,int *,int ) ;

ldns_status
FUNC_6(unsigned char* VAR_1,
         size_t VAR_2,
         ldns_buffer* VAR_3,
         unsigned char* VAR_4,
         size_t VAR_5)
{
 EVP_PKEY *VAR_6;
 ldns_status VAR_7;

 VAR_6 = FUNC_2();
 if (FUNC_0(VAR_6, FUNC_4(VAR_4, VAR_5))) {
  VAR_7 = FUNC_5(VAR_1,
        VAR_2,
        VAR_3,
        VAR_6,
        FUNC_3());
 } else {
  VAR_7 = VAR_0;
 }
 FUNC_1(VAR_6);

 return VAR_7;
}
