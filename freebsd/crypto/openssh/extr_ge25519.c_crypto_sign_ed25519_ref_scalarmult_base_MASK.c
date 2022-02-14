
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sc25519 ;
struct TYPE_4__ {int y; int x; int t; int z; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int ge25519_aff ;


 int FUNC_0 (int *,unsigned long long,char) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*,int const*) ;

void FUNC_5(ge25519_p3 *VAR_0, const sc25519 *VAR_1)
{
  signed char VAR_2[85];
  int VAR_3;
  ge25519_aff VAR_4;
  FUNC_4(VAR_2,VAR_1);

  FUNC_0((ge25519_aff *)VAR_0, 0, VAR_2[0]);
  FUNC_2(&VAR_0->z);
  FUNC_1(&VAR_0->t, &VAR_0->x, &VAR_0->y);
  for(VAR_3=1;VAR_3<85;VAR_3++)
  {
    FUNC_0(&VAR_4, (unsigned long long) VAR_3, VAR_2[VAR_3]);
    FUNC_3(VAR_0, &VAR_4);
  }
}
