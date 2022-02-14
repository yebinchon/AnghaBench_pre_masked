
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int archive_hmac_sha1_ctx ;
typedef int archive_crypto_ctx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (char*,int,int *,size_t,int,int *,size_t) ;
 scalar_t__ FUNC_5 (int *,size_t) ;

__attribute__((used)) static int
FUNC_6(int VAR_3)
{
 size_t VAR_4, VAR_5;
 uint8_t VAR_6[16 + 2];
 uint8_t VAR_7[VAR_2];
 archive_crypto_ctx VAR_8;
 archive_hmac_sha1_ctx VAR_9;
 int VAR_10;

 if (VAR_3 == VAR_1) {
  VAR_5 = 8;
  VAR_4 = 16;
 } else {

  VAR_5 = 16;
  VAR_4 = 32;
 }
 if (FUNC_5(VAR_6, VAR_5) != VAR_0)
  return (0);
 VAR_10 = FUNC_4("p", 1, VAR_6, VAR_5, 1000,
     VAR_7, VAR_4 * 2 + 2);
 if (VAR_10 != 0)
  return (0);

 VAR_10 = FUNC_0(&VAR_8, VAR_7, VAR_4);
 if (VAR_10 != 0)
  return (0);
 VAR_10 = FUNC_3(&VAR_9, VAR_7 + VAR_4,
     VAR_4);
 FUNC_1(&VAR_8);
 if (VAR_10 != 0)
  return (0);
 FUNC_2(&VAR_9);
 return (1);
}
