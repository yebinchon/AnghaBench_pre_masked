
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sc25519 ;
typedef int ge25519 ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*) ;

int FUNC_5(
    unsigned char *VAR_0,
    unsigned char *VAR_1
    )
{
  sc25519 VAR_2;
  ge25519 VAR_3;
  unsigned char VAR_4[64];
  int VAR_5;

  FUNC_3(VAR_1, 32);
  FUNC_0(VAR_4, VAR_1, 32);
  VAR_4[0] &= 248;
  VAR_4[31] &= 127;
  VAR_4[31] |= 64;

  FUNC_4(&VAR_2,VAR_4);

  FUNC_2(&VAR_3, &VAR_2);
  FUNC_1(VAR_0, &VAR_3);
  for(VAR_5=0;VAR_5<32;VAR_5++)
    VAR_1[32 + VAR_5] = VAR_0[VAR_5];
  return 0;
}
