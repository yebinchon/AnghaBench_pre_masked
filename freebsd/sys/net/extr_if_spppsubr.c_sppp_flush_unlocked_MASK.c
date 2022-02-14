
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifqueue {int dummy; } ;
struct sppp {struct ifqueue pp_cpq; struct ifqueue pp_fastq; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int if_snd; } ;


 struct sppp* FUNC_0 (struct ifnet*) ;
 TYPE_1__* FUNC_1 (struct sppp*) ;
 int FUNC_2 (struct ifqueue*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 struct sppp *VAR_1 = FUNC_0(VAR_0);

 FUNC_2 ((struct ifqueue *)&FUNC_1(VAR_1)->if_snd);
 FUNC_2 (&VAR_1->pp_fastq);
 FUNC_2 (&VAR_1->pp_cpq);
}
