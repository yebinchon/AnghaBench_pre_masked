
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt_softc {scalar_t__ rt_chipid; int * tx_queue_not_empty; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rt_softc*,int ,char*,int) ;
 int FUNC_2 (struct rt_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct rt_softc *VAR_9)
{
 uint32_t VAR_10;



 if(VAR_9->rt_chipid != VAR_7 &&
    VAR_9->rt_chipid != VAR_5 &&
    VAR_9->rt_chipid != VAR_6) {
  VAR_10 = FUNC_2(VAR_9, VAR_3 + VAR_0);

  FUNC_1(VAR_9, VAR_8,
      "watchdog: PSE_IQ_STA=0x%08x\n", VAR_10);
 }
}
