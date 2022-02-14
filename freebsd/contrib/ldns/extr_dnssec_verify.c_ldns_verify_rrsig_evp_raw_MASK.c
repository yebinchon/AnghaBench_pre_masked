
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_buffer ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char const*,unsigned int,int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int) ;

ldns_status
FUNC_9(const unsigned char *VAR_4, size_t VAR_5,
      const ldns_buffer *VAR_6, EVP_PKEY *VAR_7, const EVP_MD *VAR_8)
{
 EVP_MD_CTX *VAR_9;
 int VAR_10;




 VAR_9 = (EVP_MD_CTX*)FUNC_8(sizeof(*VAR_9));
 if(VAR_9) FUNC_1(VAR_9);

 if(!VAR_9)
  return VAR_1;

 FUNC_4(VAR_9, VAR_8);
 FUNC_5(VAR_9,
      FUNC_6(VAR_6),
      FUNC_7(VAR_6));
 VAR_10 = FUNC_3(VAR_9, VAR_4, (unsigned int) VAR_5, VAR_7);

 FUNC_0(VAR_9);

 if (VAR_10 == 1) {
  return VAR_2;
 } else if (VAR_10 == 0) {
  return VAR_0;
 }


 return VAR_3;
}
