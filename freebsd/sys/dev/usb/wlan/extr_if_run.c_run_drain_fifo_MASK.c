
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int ic_oerrors; } ;
struct run_softc {scalar_t__** wcid_stats; int fifo_cnt; TYPE_1__ sc_ic; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct run_softc*,int ,char*,int) ;
 int FUNC_1 (struct run_softc*,int ) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct run_softc*,int ,int*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_13)
{
 struct run_softc *VAR_14 = VAR_13;
 uint32_t VAR_15;
 uint16_t (*VAR_16)[3];
 uint8_t VAR_17, VAR_18, VAR_19;
 int8_t VAR_20;

 FUNC_1(VAR_14, VAR_0);

 for (;;) {

  FUNC_3(VAR_14, VAR_7, &VAR_15);
  FUNC_0(VAR_14, VAR_9, "tx stat 0x%08x\n", VAR_15);
  if (!(VAR_15 & VAR_5))
   break;

  VAR_17 = (VAR_15 >> VAR_6) & 0xff;


  if (!(VAR_15 & VAR_1) || VAR_17 > VAR_8 ||
      VAR_17 == 0)
   continue;
  VAR_16 = &(VAR_14->wcid_stats[VAR_17]);
  (*VAR_16)[VAR_12]++;
  if (VAR_15 & VAR_3)
   (*VAR_16)[VAR_11]++;
  else
   FUNC_2(VAR_14->sc_ic.ic_oerrors, 1);





  VAR_18 = (VAR_15 >> VAR_2) & 0x7f;
  VAR_19 = (VAR_15 >> VAR_4) & 0xf;
  if ((VAR_20 = VAR_19 -1 - VAR_18) > 0) {
   (*VAR_16)[VAR_12] += VAR_20;
   (*VAR_16)[VAR_10] += VAR_20;
  }
 }
 FUNC_0(VAR_14, VAR_9, "count=%d\n", VAR_14->fifo_cnt);

 VAR_14->fifo_cnt = 0;
}
