
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int callout; scalar_t__ timer; } ;
struct TYPE_4__ {int active_queue_len; int running; int active; } ;
struct cpsw_softc {TYPE_1__ watchdog; TYPE_2__ tx; TYPE_2__ rx; scalar_t__ dualemac; } ;
struct cpsw_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct cpsw_slot* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int ,struct cpsw_softc*) ;
 int FUNC_12 (struct cpsw_softc*,int ) ;
 int FUNC_13 (struct cpsw_softc*) ;
 int VAR_24 ;
 int FUNC_14 (struct cpsw_softc*,int ,int) ;
 int FUNC_15 (struct cpsw_softc*,TYPE_2__*,struct cpsw_slot*) ;
 int VAR_25 ;

__attribute__((used)) static void
FUNC_16(struct cpsw_softc *VAR_26)
{
 struct cpsw_slot *VAR_27;
 uint32_t VAR_28;


 VAR_28 = FUNC_12(VAR_26, VAR_18);
 VAR_28 &= ~(VAR_19 | VAR_20);
 FUNC_14(VAR_26, VAR_18, VAR_28);


 FUNC_14(VAR_26, VAR_2, VAR_3);


 VAR_28 = VAR_4;
 if (VAR_26->dualemac)
  VAR_28 |= VAR_5;
 FUNC_14(VAR_26, VAR_2, VAR_28);


 FUNC_14(VAR_26, VAR_13, 0x76543210);
 FUNC_14(VAR_26, VAR_12, 0);


 FUNC_14(VAR_26, FUNC_0(0),
     VAR_1 | VAR_0);

 FUNC_14(VAR_26, VAR_15, 0);


 FUNC_14(VAR_26, VAR_16, 7);


 FUNC_14(VAR_26, VAR_14, 0);


 FUNC_14(VAR_26, VAR_7, 2);


 FUNC_14(VAR_26, FUNC_4(0), 0);
 FUNC_14(VAR_26, FUNC_1(0), 0);


 FUNC_14(VAR_26, VAR_10, 1);
 FUNC_14(VAR_26, VAR_8, 1);


 FUNC_14(VAR_26, FUNC_7(0), 0xFF);
 FUNC_14(VAR_26, FUNC_6(0), 0xFF);
 FUNC_14(VAR_26, FUNC_8(0), 0xFF);
 FUNC_14(VAR_26, FUNC_5(0), 0x1F);


 FUNC_14(VAR_26, VAR_6, 3);


 FUNC_14(VAR_26, VAR_9,
     FUNC_2(0) | FUNC_3(0));
 FUNC_14(VAR_26, VAR_11, 1);



 FUNC_14(VAR_26, VAR_21, VAR_22 | VAR_23 | 0xff);





 VAR_27 = FUNC_9(&VAR_26->tx.active);
 if (VAR_27 != ((void*)0))
  FUNC_15(VAR_26, &VAR_26->tx, VAR_27);
 VAR_27 = FUNC_9(&VAR_26->rx.active);
 if (VAR_27 != ((void*)0))
  FUNC_15(VAR_26, &VAR_26->rx, VAR_27);
 FUNC_13(VAR_26);
 FUNC_14(VAR_26, FUNC_1(0), VAR_26->rx.active_queue_len);
 FUNC_14(VAR_26, FUNC_4(0), VAR_17);


 VAR_26->rx.running = 1;
 VAR_26->tx.running = 1;
 VAR_26->watchdog.timer = 0;
 FUNC_10(&VAR_26->watchdog.callout, 0);
 FUNC_11(&VAR_26->watchdog.callout, VAR_25, VAR_24, VAR_26);
}
