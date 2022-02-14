
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int af1; int af0; int deltai; int OMEGADOT; int OMEGA0; int omega; int M0; int e; int sqrt_A; int t0a; scalar_t__ health; int valid; scalar_t__ csum; } ;
typedef scalar_t__ HEALTH ;
typedef scalar_t__ CSUM ;
typedef TYPE_1__ ALM ;


 int FUNC_0 (unsigned char**,int *) ;
 int FUNC_1 (unsigned char**) ;
 scalar_t__ FUNC_2 (unsigned char**) ;
 int FUNC_3 (unsigned char**,int *) ;

void
FUNC_4(
 unsigned char **VAR_0,
 ALM *VAR_1
 )
{
  VAR_1->csum = (CSUM) FUNC_2(VAR_0);
  VAR_1->valid = FUNC_1(VAR_0);

  VAR_1->health = (HEALTH) FUNC_2(VAR_0);
  FUNC_3(VAR_0, &VAR_1->t0a);


  FUNC_0(VAR_0, &VAR_1->sqrt_A);
  FUNC_0(VAR_0, &VAR_1->e);

  FUNC_0(VAR_0, &VAR_1->M0);
  FUNC_0(VAR_0, &VAR_1->omega);
  FUNC_0(VAR_0, &VAR_1->OMEGA0);
  FUNC_0(VAR_0, &VAR_1->OMEGADOT);
  FUNC_0(VAR_0, &VAR_1->deltai);
  FUNC_0(VAR_0, &VAR_1->af0);
  FUNC_0(VAR_0, &VAR_1->af1);
}
