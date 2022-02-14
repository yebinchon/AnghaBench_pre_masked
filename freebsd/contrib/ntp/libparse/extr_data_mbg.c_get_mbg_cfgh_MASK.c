
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * health; int * cfg; int t0a; int tot_63; int tot_51; int valid; scalar_t__ csum; } ;
typedef scalar_t__ CSUM ;
typedef TYPE_1__ CFGH ;


 int VAR_0 ;
 int FUNC_0 (unsigned char**) ;
 scalar_t__ FUNC_1 (unsigned char**) ;
 int FUNC_2 (unsigned char**,int *) ;
 int FUNC_3 (unsigned char**,int *) ;
 int FUNC_4 (unsigned char**,int *) ;

void
FUNC_5(
 unsigned char **VAR_1,
 CFGH *VAR_2
 )
{
  int VAR_3;

  VAR_2->csum = (CSUM) FUNC_1(VAR_1);
  VAR_2->valid = FUNC_0(VAR_1);
  FUNC_4(VAR_1, &VAR_2->tot_51);
  FUNC_4(VAR_1, &VAR_2->tot_63);
  FUNC_4(VAR_1, &VAR_2->t0a);

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      FUNC_2(VAR_1, &VAR_2->cfg[VAR_3]);
    }

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      FUNC_3(VAR_1, &VAR_2->health[VAR_3]);
    }
}
