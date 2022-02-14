
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
struct mbuf {TYPE_3__ m_pkthdr; } ;
struct TYPE_5__ {int opt; } ;
struct TYPE_4__ {int passed_pkts; int errors; } ;
struct hookinfo {scalar_t__ tc; size_t q_first; size_t q_last; TYPE_2__ conf; struct mbuf** q; TYPE_1__ stats; int dest; } ;
typedef int node_p ;
typedef int hook_p ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct hookinfo* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,struct mbuf*) ;
 int FUNC_2 (struct hookinfo*) ;
 int FUNC_3 (struct hookinfo*) ;

void
FUNC_4(node_p VAR_2, hook_p VAR_3, void *VAR_4, int VAR_5)
{
 struct hookinfo *VAR_6 = FUNC_0(VAR_3);
 struct mbuf *VAR_7;
 int VAR_8;


 FUNC_2(VAR_6);


 while (VAR_6->tc >= 0) {


  VAR_7 = VAR_6->q[VAR_6->q_first];
  FUNC_1(VAR_8, VAR_6->dest, VAR_7);
  if (VAR_8 != 0)
   ++VAR_6->stats.errors;
  ++VAR_6->stats.passed_pkts;


  VAR_6->q_first++;
  if (VAR_6->q_first >= VAR_1)
   VAR_6->q_first = 0;


  if (VAR_6->q_first == VAR_6->q_last)
   break;


  VAR_7 = VAR_6->q[VAR_6->q_first];
  if (VAR_6->conf.opt & VAR_0) {
   VAR_6->tc -= 128;
  } else {
   VAR_6->tc -= VAR_7->m_pkthdr.len;
  }
 }


 if (VAR_6->q_first != VAR_6->q_last)

  FUNC_3(VAR_6);
}
