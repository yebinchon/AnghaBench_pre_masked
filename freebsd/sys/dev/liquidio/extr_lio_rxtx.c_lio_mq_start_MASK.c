
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct octeon_device {int num_iqs; struct lio_instr_queue** instr_queue; } ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct lio_instr_queue {int enq_lock; int br; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*,int ,struct mbuf*) ;
 struct lio* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct octeon_device*,char*,int,int) ;
 int FUNC_4 (struct ifnet*,struct lio_instr_queue*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,scalar_t__,int*) ;

int
FUNC_8(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct lio *VAR_4 = FUNC_2(VAR_2);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 struct lio_instr_queue *VAR_6;
 int VAR_7 = 0, VAR_8;




 if (FUNC_0(VAR_3) != VAR_0) {
   VAR_8 = VAR_3->m_pkthdr.flowid % VAR_5->num_iqs;
 } else
  VAR_8 = VAR_1 % VAR_5->num_iqs;

 VAR_6 = VAR_5->instr_queue[VAR_8];

 VAR_7 = FUNC_1(VAR_2, VAR_6->br, VAR_3);
 if (VAR_7)
  return (VAR_7);

 if (FUNC_5(&VAR_6->enq_lock)) {
  FUNC_4(VAR_2, VAR_6);
  FUNC_6(&VAR_6->enq_lock);
 }

 return (VAR_7);
}
