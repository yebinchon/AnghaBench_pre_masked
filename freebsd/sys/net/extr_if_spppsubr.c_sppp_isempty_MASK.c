
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ifq_head; } ;
struct TYPE_5__ {int ifq_head; } ;
struct sppp {TYPE_2__ pp_cpq; TYPE_1__ pp_fastq; } ;
struct ifnet {int dummy; } ;
struct TYPE_7__ {int ifq_head; } ;
struct TYPE_8__ {TYPE_3__ if_snd; } ;


 struct sppp* FUNC_0 (struct ifnet*) ;
 TYPE_4__* FUNC_1 (struct sppp*) ;
 int FUNC_2 (struct sppp*) ;
 int FUNC_3 (struct sppp*) ;

int
FUNC_4(struct ifnet *VAR_0)
{
 struct sppp *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = !VAR_1->pp_fastq.ifq_head && !VAR_1->pp_cpq.ifq_head &&
  !FUNC_1(VAR_1)->if_snd.ifq_head;
 FUNC_3(VAR_1);
 return (VAR_2);
}
