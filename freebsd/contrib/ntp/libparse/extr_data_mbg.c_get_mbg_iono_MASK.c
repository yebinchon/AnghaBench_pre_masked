
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int beta_3; int beta_2; int beta_1; int beta_0; int alpha_3; int alpha_2; int alpha_1; int alpha_0; int valid; scalar_t__ csum; } ;
typedef TYPE_1__ IONO ;
typedef scalar_t__ CSUM ;


 int FUNC_0 (unsigned char**,int *) ;
 int FUNC_1 (unsigned char**) ;
 scalar_t__ FUNC_2 (unsigned char**) ;

void
FUNC_3(
 unsigned char **VAR_0,
 IONO *VAR_1
 )
{
  VAR_1->csum = (CSUM) FUNC_2(VAR_0);
  VAR_1->valid = FUNC_1(VAR_0);

  FUNC_0(VAR_0, &VAR_1->alpha_0);
  FUNC_0(VAR_0, &VAR_1->alpha_1);
  FUNC_0(VAR_0, &VAR_1->alpha_2);
  FUNC_0(VAR_0, &VAR_1->alpha_3);

  FUNC_0(VAR_0, &VAR_1->beta_0);
  FUNC_0(VAR_0, &VAR_1->beta_1);
  FUNC_0(VAR_0, &VAR_1->beta_2);
  FUNC_0(VAR_0, &VAR_1->beta_3);
}
