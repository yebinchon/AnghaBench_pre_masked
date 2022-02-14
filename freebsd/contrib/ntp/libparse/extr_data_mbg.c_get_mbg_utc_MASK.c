
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delta_tlsf; int delta_tls; void* DNt; int WNlsf; int A1; int A0; int t0t; void* valid; scalar_t__ csum; } ;
typedef TYPE_1__ UTC ;
typedef scalar_t__ CSUM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned char**,int ,int *,int ) ;
 void* FUNC_2 (unsigned char**) ;
 scalar_t__ FUNC_3 (unsigned char**) ;
 int FUNC_4 (unsigned char**) ;
 int FUNC_5 (unsigned char**,int *) ;
 int VAR_2 ;

void
FUNC_6(
 unsigned char **VAR_3,
 UTC *VAR_4
 )
{
  VAR_4->csum = (CSUM) FUNC_3(VAR_3);
  VAR_4->valid = FUNC_2(VAR_3);

  FUNC_5(VAR_3, &VAR_4->t0t);

  if (FUNC_1(VAR_3, VAR_0, &VAR_4->A0, VAR_2) != VAR_1)
    {
      FUNC_0(&VAR_4->A0);
    }

  if (FUNC_1(VAR_3, VAR_0, &VAR_4->A1, VAR_2) != VAR_1)
    {
      FUNC_0(&VAR_4->A1);
    }

  VAR_4->WNlsf = FUNC_4(VAR_3);
  VAR_4->DNt = FUNC_2(VAR_3);
  VAR_4->delta_tls = *(*VAR_3)++;
  VAR_4->delta_tlsf = *(*VAR_3)++;
}
