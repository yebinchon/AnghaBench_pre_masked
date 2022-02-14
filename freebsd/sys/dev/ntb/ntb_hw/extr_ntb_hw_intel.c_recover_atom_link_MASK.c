
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_softc {int lnk_sta; int lr_timer; int heartbeat_timer; TYPE_1__* reg; } ;
struct TYPE_2__ {int lnk_sta; int ntb_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 () ;
 void FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct ntb_softc*) ;
 int FUNC_4 (struct ntb_softc*) ;
 int FUNC_5 (int *,int,void (*) (void*),struct ntb_softc*) ;
 int VAR_4 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct ntb_softc *VAR_6 = VAR_5;
 unsigned VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;

 FUNC_4(VAR_6);







 VAR_11 = FUNC_1() % VAR_1;
 FUNC_7("Link", (VAR_1 + VAR_11) * VAR_4 / 1000);

 if (FUNC_3(VAR_6))
  goto retry;

 VAR_11 = FUNC_6(4, VAR_6->reg->ntb_ctl);
 if ((VAR_11 & VAR_0) != 0)
  goto out;

 VAR_11 = FUNC_6(4, VAR_6->reg->lnk_sta);
 VAR_8 = FUNC_0(VAR_11);
 VAR_7 = VAR_11 & VAR_3;

 VAR_10 = FUNC_0(VAR_6->lnk_sta);
 VAR_9 = VAR_6->lnk_sta & VAR_3;
 if (VAR_10 != VAR_8 || VAR_9 != VAR_7)
  goto retry;

out:
 FUNC_5(&VAR_6->heartbeat_timer, VAR_2 * VAR_4, FUNC_2,
     VAR_6);
 return;

retry:
 FUNC_5(&VAR_6->lr_timer, VAR_2 * VAR_4, FUNC_8,
     VAR_6);
}
