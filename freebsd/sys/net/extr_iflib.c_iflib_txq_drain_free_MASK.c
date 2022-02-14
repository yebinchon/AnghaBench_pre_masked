
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct ifmp_ring {int size; TYPE_1__* cookie; } ;
typedef TYPE_1__* iflib_txq_t ;
struct TYPE_4__ {int ift_timer; int ift_qstatus; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 struct mbuf** FUNC_6 (struct ifmp_ring*,int,int,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct ifmp_ring*) ;
 int FUNC_9 (struct mbuf*) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_10(struct ifmp_ring *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5, VAR_6;
 struct mbuf **VAR_7;
 iflib_txq_t VAR_8;

 VAR_8 = VAR_2->cookie;

 VAR_8->ift_qstatus = VAR_0;
 FUNC_0(VAR_8);
 FUNC_7(&VAR_8->ift_timer);
 FUNC_1(VAR_8);

 VAR_6 = FUNC_3(VAR_4, VAR_3, VAR_2->size);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_5, VAR_6 - VAR_5);
  if (FUNC_5(*VAR_7 == (struct mbuf *)VAR_8))
   continue;
  FUNC_9(*VAR_7);
  FUNC_2(VAR_1);
 }
 FUNC_4(FUNC_8(VAR_2) == 0);
 return (VAR_6);
}
