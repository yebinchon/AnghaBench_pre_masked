
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sc25519 ;
typedef scalar_t__ ge25519_p3 ;
typedef int ge25519_p2 ;
typedef int ge25519_p1p1 ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (unsigned char*,int const*,int const*) ;
 int FUNC_5 (scalar_t__*) ;

void FUNC_6(ge25519_p3 *VAR_0, const ge25519_p3 *VAR_1, const sc25519 *VAR_2, const ge25519_p3 *VAR_3, const sc25519 *VAR_4)
{
  ge25519_p1p1 VAR_5;
  ge25519_p3 VAR_6[16];
  unsigned char VAR_7[127];
  int VAR_8;


  FUNC_5(VAR_6);
  VAR_6[1] = *VAR_1;
  FUNC_1(&VAR_5,(ge25519_p2 *)VAR_1); FUNC_3( &VAR_6[2], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[1], &VAR_6[2]); FUNC_3( &VAR_6[3], &VAR_5);
  VAR_6[4] = *VAR_3;
  FUNC_0(&VAR_5,&VAR_6[1], &VAR_6[4]); FUNC_3( &VAR_6[5], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[2], &VAR_6[4]); FUNC_3( &VAR_6[6], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[3], &VAR_6[4]); FUNC_3( &VAR_6[7], &VAR_5);
  FUNC_1(&VAR_5,(ge25519_p2 *)VAR_3); FUNC_3( &VAR_6[8], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[1], &VAR_6[8]); FUNC_3( &VAR_6[9], &VAR_5);
  FUNC_1(&VAR_5,(ge25519_p2 *)&VAR_6[5]); FUNC_3(&VAR_6[10], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[3], &VAR_6[8]); FUNC_3(&VAR_6[11], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[4], &VAR_6[8]); FUNC_3(&VAR_6[12], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[1],&VAR_6[12]); FUNC_3(&VAR_6[13], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[2],&VAR_6[12]); FUNC_3(&VAR_6[14], &VAR_5);
  FUNC_0(&VAR_5,&VAR_6[3],&VAR_6[12]); FUNC_3(&VAR_6[15], &VAR_5);

  FUNC_4(VAR_7,VAR_2,VAR_4);


  *VAR_0 = VAR_6[VAR_7[126]];
  for(VAR_8=125;VAR_8>=0;VAR_8--)
  {
    FUNC_1(&VAR_5, (ge25519_p2 *)VAR_0);
    FUNC_2((ge25519_p2 *) VAR_0, &VAR_5);
    FUNC_1(&VAR_5, (ge25519_p2 *)VAR_0);
    if(VAR_7[VAR_8]!=0)
    {
      FUNC_3(VAR_0, &VAR_5);
      FUNC_0(&VAR_5, VAR_0, &VAR_6[VAR_7[VAR_8]]);
    }
    if(VAR_8 != 0) FUNC_2((ge25519_p2 *)VAR_0, &VAR_5);
    else FUNC_3(VAR_0, &VAR_5);
  }
}
