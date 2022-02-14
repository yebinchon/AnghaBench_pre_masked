
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; int t; int z; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,unsigned char const*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_10(ge25519_p3 *VAR_2, const unsigned char VAR_3[32])
{
  unsigned char VAR_4;
  fe25519 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  FUNC_6(&VAR_2->z);
  VAR_4 = VAR_3[31] >> 7;
  FUNC_9(&VAR_2->y, VAR_3);
  FUNC_7(&VAR_7, &VAR_2->y);
  FUNC_3(&VAR_8, &VAR_7, &VAR_0);
  FUNC_8(&VAR_7, &VAR_7, &VAR_2->z);
  FUNC_0(&VAR_8, &VAR_2->z, &VAR_8);



  FUNC_7(&VAR_9, &VAR_8);
  FUNC_7(&VAR_10, &VAR_9);
  FUNC_3(&VAR_11, &VAR_10, &VAR_9);
  FUNC_3(&VAR_5, &VAR_11, &VAR_7);
  FUNC_3(&VAR_5, &VAR_5, &VAR_8);

  FUNC_5(&VAR_5, &VAR_5);

  FUNC_3(&VAR_5, &VAR_5, &VAR_7);
  FUNC_3(&VAR_5, &VAR_5, &VAR_8);
  FUNC_3(&VAR_5, &VAR_5, &VAR_8);
  FUNC_3(&VAR_2->x, &VAR_5, &VAR_8);


  FUNC_7(&VAR_6, &VAR_2->x);
  FUNC_3(&VAR_6, &VAR_6, &VAR_8);
  if (!FUNC_2(&VAR_6, &VAR_7))
    FUNC_3(&VAR_2->x, &VAR_2->x, &VAR_1);


  FUNC_7(&VAR_6, &VAR_2->x);
  FUNC_3(&VAR_6, &VAR_6, &VAR_8);
  if (!FUNC_2(&VAR_6, &VAR_7))
    return -1;


  if(FUNC_1(&VAR_2->x) != (1-VAR_4))
    FUNC_4(&VAR_2->x, &VAR_2->x);

  FUNC_3(&VAR_2->t, &VAR_2->x, &VAR_2->y);
  return 0;
}
