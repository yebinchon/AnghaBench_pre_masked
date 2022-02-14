
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct mbuf* ifq_head; } ;
struct TYPE_7__ {struct mbuf* ifq_head; } ;
struct sppp {scalar_t__ pp_phase; scalar_t__ pp_mode; TYPE_1__ pp_fastq; TYPE_3__ pp_cpq; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {struct mbuf* ifq_head; } ;
struct TYPE_8__ {TYPE_2__ if_snd; } ;


 scalar_t__ VAR_0 ;
 struct sppp* FUNC_0 (struct ifnet*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_1 (struct sppp*) ;
 int FUNC_2 (struct sppp*) ;
 int FUNC_3 (struct sppp*) ;

struct mbuf *
FUNC_4(struct ifnet *VAR_3)
{
 struct sppp *VAR_4 = FUNC_0(VAR_3);
 struct mbuf *VAR_5;

 FUNC_2(VAR_4);

 VAR_5 = VAR_4->pp_cpq.ifq_head;
 if (VAR_5 == ((void*)0) &&
     (VAR_4->pp_phase == VAR_1 ||
      VAR_4->pp_mode == VAR_0 ||
      VAR_4->pp_mode == VAR_2))
  if ((VAR_5 = VAR_4->pp_fastq.ifq_head) == ((void*)0))
   VAR_5 = FUNC_1(VAR_4)->if_snd.ifq_head;
 FUNC_3(VAR_4);
 return (VAR_5);
}
