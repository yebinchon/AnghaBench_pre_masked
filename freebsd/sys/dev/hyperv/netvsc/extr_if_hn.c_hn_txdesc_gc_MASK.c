
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {int refs; int flags; } ;
struct hn_tx_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct hn_tx_ring*,struct hn_txdesc*) ;

__attribute__((used)) static void
FUNC_2(struct hn_tx_ring *VAR_1, struct hn_txdesc *VAR_2)
{

 FUNC_0(VAR_2->refs == 0 || VAR_2->refs == 1,
     ("invalid txd refs %d", VAR_2->refs));


 if (VAR_2->refs > 0 && (VAR_2->flags & VAR_0) == 0) {
  int VAR_3;

  VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_3, ("can't free txdesc"));
 }
}
