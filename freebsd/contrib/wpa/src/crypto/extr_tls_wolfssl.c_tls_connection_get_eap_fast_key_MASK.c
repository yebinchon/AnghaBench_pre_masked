
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int * ssl; } ;
typedef int seed ;
typedef int byte ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,unsigned int,char*,int *,int,int *,int) ;
 int FUNC_5 (int *,unsigned int,char*,int *,int,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int **,unsigned int*,int **,unsigned int*,int **,unsigned int*) ;

int FUNC_11(void *VAR_3, struct tls_connection *VAR_4,
        u8 *VAR_5, size_t VAR_6)
{
 byte VAR_7[VAR_1];
 int VAR_8 = -1;
 WOLFSSL *VAR_9;
 byte *VAR_10;
 byte *VAR_11;
 int VAR_12 = 0;
 byte *VAR_13;
 unsigned int VAR_14;
 byte *VAR_15;
 unsigned int VAR_16;
 byte *VAR_17;
 unsigned int VAR_18;

 if (!VAR_4 || !VAR_4->ssl)
  return -1;
 VAR_9 = VAR_4->ssl;

 VAR_12 = 2 * (FUNC_8(VAR_9) + FUNC_6(VAR_9) +
      FUNC_7(VAR_9));

 VAR_10 = FUNC_2(VAR_12 + VAR_6);
 if (!VAR_10)
  return -1;
 VAR_11 = VAR_10;

 FUNC_10(VAR_9, &VAR_13, &VAR_14, &VAR_15,
    &VAR_16, &VAR_17, &VAR_18);
 FUNC_3(VAR_7, VAR_15, VAR_0);
 FUNC_3(VAR_7 + VAR_0, VAR_17, VAR_0);

 if (FUNC_9(VAR_9) == VAR_2) {
  FUNC_5(VAR_13, VAR_14,
          "key expansion", VAR_7, sizeof(VAR_7),
          VAR_11, VAR_12 + VAR_6);
  VAR_8 = 0;
 } else {
  VAR_8 = FUNC_4(VAR_13, VAR_14,
           "key expansion", VAR_7, sizeof(VAR_7),
           VAR_11, VAR_12 + VAR_6);
 }

 FUNC_1(VAR_13, VAR_14);
 if (VAR_8 == 0)
  FUNC_3(VAR_5, VAR_11 + VAR_12, VAR_6);
 FUNC_0(VAR_10, VAR_12 + VAR_6);

 return VAR_8;
}
