
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {int netdown_drops; int sc; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sfxge_txq*) ;
 scalar_t__ FUNC_2 (struct sfxge_txq*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct sfxge_txq*,struct mbuf*) ;
 int FUNC_5 (struct sfxge_txq*,struct mbuf*) ;
 int FUNC_6 (struct sfxge_txq*) ;
 int FUNC_7 (struct sfxge_txq*) ;

__attribute__((used)) static int
FUNC_8(struct sfxge_txq *VAR_1, struct mbuf *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_1->sc)) {
  FUNC_3(&VAR_1->netdown_drops, 1);
  return (VAR_0);
 }






 if (FUNC_2(VAR_1)) {

  FUNC_7(VAR_1);

  VAR_3 = FUNC_4(VAR_1, VAR_2);


  FUNC_6(VAR_1);

 } else {
  VAR_3 = FUNC_5(VAR_1, VAR_2);
  if ((VAR_3 == 0) && FUNC_2(VAR_1)) {
   FUNC_6(VAR_1);

  }
 }

 FUNC_1(VAR_1);

 return (VAR_3);
}
