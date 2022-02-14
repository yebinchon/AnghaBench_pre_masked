
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tm; int t; int channel; } ;
typedef TYPE_1__ TTM ;


 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (unsigned char**,int *) ;
 int FUNC_2 (unsigned char**,int *) ;

void
FUNC_3(
 unsigned char **VAR_0,
 TTM *VAR_1
 )
{
  VAR_1->channel = FUNC_0(VAR_0);
  FUNC_1(VAR_0, &VAR_1->t);
  FUNC_2(VAR_0, &VAR_1->tm);
}
