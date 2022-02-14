
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int cur; int desc_map; int desc_tag; TYPE_3__* desc_ring; } ;
struct TYPE_6__ {int next; scalar_t__ queued; int cur; int desc_map; int desc_tag; TYPE_1__* desc_ring; } ;
struct awg_softc {TYPE_4__ rx; TYPE_2__ tx; scalar_t__ link; int stat_ch; int ifp; } ;
typedef int if_t ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_5__ {scalar_t__ status; } ;


 int FUNC_0 (struct awg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct awg_softc*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct awg_softc*,int ,int) ;
 int FUNC_5 (struct awg_softc*,int) ;
 int FUNC_6 (struct awg_softc*) ;
 int FUNC_7 (struct awg_softc*,int) ;
 int FUNC_8 (struct awg_softc*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13(struct awg_softc *VAR_17)
{
 if_t VAR_18;
 uint32_t VAR_19;
 int VAR_20;

 FUNC_0(VAR_17);

 VAR_18 = VAR_17->ifp;

 FUNC_10(&VAR_17->stat_ch);


 VAR_19 = FUNC_1(VAR_17, VAR_7);
 VAR_19 &= ~VAR_15;
 VAR_19 |= VAR_8;
 FUNC_4(VAR_17, VAR_7, VAR_19);


 VAR_19 = FUNC_1(VAR_17, VAR_6);
 FUNC_4(VAR_17, VAR_6, VAR_19 & ~VAR_16);


 VAR_19 = FUNC_1(VAR_17, VAR_4);
 FUNC_4(VAR_17, VAR_4, VAR_19 & ~VAR_13);


 FUNC_6(VAR_17);


 VAR_19 = FUNC_1(VAR_17, VAR_7);
 FUNC_4(VAR_17, VAR_7, VAR_19 & ~VAR_15);


 VAR_19 = FUNC_1(VAR_17, VAR_5);
 FUNC_4(VAR_17, VAR_5, VAR_19 & ~VAR_12);

 VAR_17->link = 0;


 FUNC_8(VAR_17);


 for (VAR_20 = VAR_17->tx.next; VAR_17->tx.queued > 0; VAR_20 = FUNC_3(VAR_20)) {
  VAR_19 = FUNC_12(VAR_17->tx.desc_ring[VAR_20].status);
  if ((VAR_19 & VAR_14) != 0)
   break;
  FUNC_5(VAR_17, VAR_20);
 }
 VAR_17->tx.next = VAR_20;
 for (; VAR_17->tx.queued > 0; VAR_20 = FUNC_3(VAR_20)) {
  VAR_17->tx.desc_ring[VAR_20].status = 0;
  FUNC_5(VAR_17, VAR_20);
 }
 VAR_17->tx.cur = VAR_17->tx.next;
 FUNC_9(VAR_17->tx.desc_tag, VAR_17->tx.desc_map,
     VAR_2 | VAR_3);


 FUNC_9(VAR_17->rx.desc_tag, VAR_17->rx.desc_map,
     VAR_0 | VAR_1);

 for (VAR_20 = VAR_17->rx.cur; ; VAR_20 = FUNC_2(VAR_20)) {
  VAR_19 = FUNC_12(VAR_17->rx.desc_ring[VAR_20].status);
  if ((VAR_19 & VAR_11) != 0)
   break;
  FUNC_7(VAR_17, VAR_20);
 }
 VAR_17->rx.cur = VAR_20;
 FUNC_9(VAR_17->rx.desc_tag, VAR_17->rx.desc_map,
     VAR_2 | VAR_3);

 FUNC_11(VAR_18, 0, VAR_10 | VAR_9);
}
