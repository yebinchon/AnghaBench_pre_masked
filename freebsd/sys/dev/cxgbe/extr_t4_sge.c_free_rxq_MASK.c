
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {int dummy; } ;
struct TYPE_2__ {int * ifp; } ;
struct sge_rxq {int fl; int iq; TYPE_1__ lro; } ;


 int FUNC_0 (struct sge_rxq*,int) ;
 int FUNC_1 (struct vi_info*,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct vi_info *VAR_0, struct sge_rxq *VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_1(VAR_0, &VAR_1->iq, &VAR_1->fl);
 if (VAR_2 == 0)
  FUNC_0(VAR_1, sizeof(*VAR_1));

 return (VAR_2);
}
