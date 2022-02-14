
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ fe25519 ;
typedef int crypto_uint32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(fe25519 *VAR_0)
{
  int VAR_1;
  crypto_uint32 VAR_2 = FUNC_0(VAR_0->v[31],127);
  for(VAR_1=30;VAR_1>0;VAR_1--)
    VAR_2 &= FUNC_0(VAR_0->v[VAR_1],255);
  VAR_2 &= FUNC_1(VAR_0->v[0],237);

  VAR_2 = -VAR_2;

  VAR_0->v[31] -= VAR_2&127;
  for(VAR_1=30;VAR_1>0;VAR_1--)
    VAR_0->v[VAR_1] -= VAR_2&255;
  VAR_0->v[0] -= VAR_2&237;
}
