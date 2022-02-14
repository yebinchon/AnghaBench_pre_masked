
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int buf ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_5 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_6 (int **,unsigned char const**,int) ;

EVP_PKEY*
FUNC_7(const unsigned char* VAR_5, size_t VAR_6, uint8_t VAR_7)
{
 unsigned char VAR_8[256+2];
        const unsigned char* VAR_9 = VAR_8;
        EVP_PKEY *VAR_10;
        EC_KEY *VAR_11;

        if(VAR_7 == VAR_0) {
  if(VAR_6 != 2*256/8) return ((void*)0);
                VAR_11 = FUNC_1(VAR_2);
        } else if(VAR_7 == VAR_1) {
  if(VAR_6 != 2*384/8) return ((void*)0);
                VAR_11 = FUNC_1(VAR_3);
        } else VAR_11 = ((void*)0);
        if(!VAR_11) return ((void*)0);
 if(VAR_6+1 > sizeof(VAR_8))
  return ((void*)0);


 VAR_8[0] = VAR_4;
 FUNC_5(VAR_8+1, VAR_5, VAR_6);
        if(!FUNC_6(&VAR_11, &VAR_9, (int)VAR_6+1)) {
                FUNC_0(VAR_11);
                return ((void*)0);
        }
        VAR_10 = FUNC_4();
        if(!VAR_10) {
                FUNC_0(VAR_11);
                return ((void*)0);
        }
        if (!FUNC_2(VAR_10, VAR_11)) {
  FUNC_3(VAR_10);
  FUNC_0(VAR_11);
  return ((void*)0);
 }
        return VAR_10;
}
