
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sc25519 ;
typedef int ge25519 ;


 int FUNC_0 (unsigned char*,unsigned char const*,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char const*,unsigned char*,unsigned long long) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,unsigned char*) ;
 int FUNC_6 (int *,unsigned char*) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (unsigned char*,int *) ;

int FUNC_9(
    unsigned char *VAR_1,unsigned long long *VAR_2,
    const unsigned char *VAR_3,unsigned long long VAR_4,
    const unsigned char *VAR_5
    )
{
  sc25519 VAR_6, VAR_7, VAR_8;
  ge25519 VAR_9;
  unsigned char VAR_10[32];
  unsigned char VAR_11[32];
  unsigned char VAR_12[64];
  unsigned long long VAR_13;
  unsigned char VAR_14[VAR_0];
  unsigned char VAR_15[VAR_0];

  FUNC_0(VAR_12, VAR_5, 32);
  VAR_12[0] &= 248;
  VAR_12[31] &= 127;
  VAR_12[31] |= 64;

  *VAR_2 = VAR_4+64;
  for(VAR_13=0;VAR_13<VAR_4;VAR_13++)
    VAR_1[64 + VAR_13] = VAR_3[VAR_13];
  for(VAR_13=0;VAR_13<32;VAR_13++)
    VAR_1[32 + VAR_13] = VAR_12[32+VAR_13];

  FUNC_0(VAR_14, VAR_1+32, VAR_4+32);


  FUNC_6(&VAR_6, VAR_14);
  FUNC_2(&VAR_9, &VAR_6);
  FUNC_1(VAR_10, &VAR_9);


  for(VAR_13=0;VAR_13<32;VAR_13++)
    VAR_1[VAR_13] = VAR_10[VAR_13];

  FUNC_3(VAR_15, VAR_1, VAR_5+32, VAR_1, VAR_4+64);

  FUNC_6(&VAR_7, VAR_15);
  FUNC_5(&VAR_8, VAR_12);
  FUNC_7(&VAR_7, &VAR_7, &VAR_8);

  FUNC_4(&VAR_7, &VAR_7, &VAR_6);

  FUNC_8(VAR_11,&VAR_7);
  for(VAR_13=0;VAR_13<32;VAR_13++)
    VAR_1[32 + VAR_13] = VAR_11[VAR_13];

  return 0;
}
