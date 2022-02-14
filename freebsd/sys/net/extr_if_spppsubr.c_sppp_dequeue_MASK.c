
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sppp {scalar_t__ pp_mode; int pp_fastq; int pp_cpq; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int if_snd; } ;


 scalar_t__ VAR_0 ;
 struct sppp* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *,struct mbuf*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct sppp*) ;
 int FUNC_3 (struct sppp*) ;
 int FUNC_4 (struct sppp*) ;
 scalar_t__ FUNC_5 (struct sppp*) ;

struct mbuf *
FUNC_6(struct ifnet *VAR_2)
{
 struct sppp *VAR_3 = FUNC_0(VAR_2);
 struct mbuf *VAR_4;

 FUNC_3(VAR_3);






 FUNC_1(&VAR_3->pp_cpq, VAR_4);
 if (VAR_4 == ((void*)0) &&
     (FUNC_5(VAR_3) || VAR_3->pp_mode == VAR_0 ||
      VAR_3->pp_mode == VAR_1)) {
  FUNC_1(&VAR_3->pp_fastq, VAR_4);
  if (VAR_4 == ((void*)0))
   FUNC_1 (&FUNC_2(VAR_3)->if_snd, VAR_4);
 }
 FUNC_4(VAR_3);
 return VAR_4;
}
