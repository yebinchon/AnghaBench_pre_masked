
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
struct TYPE_4__ {int yellow_pkts; int droped_pkts; int red_pkts; } ;
struct hookinfo {size_t q_last; int q_first; int te; int tc; int q_mtx; TYPE_2__ conf; struct mbuf** q; TYPE_1__ stats; } ;
typedef int item_p ;


 int FUNC_0 (int ,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hookinfo*) ;

__attribute__((used)) static void
FUNC_6(struct hookinfo *VAR_3, item_p VAR_4)
{
 struct mbuf *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_4);


 FUNC_3(&VAR_3->q_mtx);


 VAR_6 = VAR_3->q_last - VAR_3->q_first;
 if (VAR_6 < 0)
  VAR_6 += VAR_2;


 if ((VAR_6 >= (VAR_2 - 1)) ||
     (VAR_3->te + VAR_6 >= VAR_2)) {

  ++VAR_3->stats.red_pkts;
  ++VAR_3->stats.droped_pkts;
  FUNC_2(VAR_5);

  VAR_3->te = 0;
 } else {

  ++VAR_3->stats.yellow_pkts;


  VAR_3->q[VAR_3->q_last] = VAR_5;
  VAR_3->q_last++;
  if (VAR_3->q_last >= VAR_2)
   VAR_3->q_last = 0;


  if (VAR_6 > VAR_1)
   VAR_3->te += VAR_6 - VAR_1;


  if (VAR_6 == 0) {
   if (VAR_3->conf.opt & VAR_0) {
    VAR_3->tc -= 128;
   } else {
    VAR_3->tc -= VAR_5->m_pkthdr.len;
   }


   FUNC_5(VAR_3);
  }
 }


 FUNC_4(&VAR_3->q_mtx);
}
