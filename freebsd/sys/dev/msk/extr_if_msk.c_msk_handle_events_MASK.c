
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct msk_stat_desc {int msk_status; int msk_control; } ;
struct msk_softc {int msk_stat_cons; int msk_process_limit; struct msk_if_softc** msk_if; int msk_stat_map; int msk_stat_tag; int msk_stat_count; int msk_dev; struct msk_stat_desc* msk_stat_ring; } ;
struct TYPE_4__ {int msk_rx_putwm; } ;
struct msk_if_softc {int msk_csum; TYPE_2__ msk_cdata; scalar_t__ msk_framesize; TYPE_1__* msk_ifp; void* msk_vtag; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int ) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;





 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct msk_if_softc*,int,int,int) ;
 int FUNC_7 (struct msk_if_softc*,int,int,int) ;
 int FUNC_8 (struct msk_if_softc*) ;
 int FUNC_9 (struct msk_if_softc*,int) ;
 void* FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct msk_softc *VAR_18)
{
 struct msk_if_softc *VAR_19;
 int VAR_20[2];
 struct msk_stat_desc *VAR_21;
 uint32_t VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 if (VAR_18->msk_stat_cons == FUNC_0(VAR_18, VAR_10))
  return (0);


 FUNC_2(VAR_18->msk_stat_tag, VAR_18->msk_stat_map,
     VAR_0 | VAR_1);

 VAR_20[VAR_7] = VAR_20[VAR_8] = 0;
 VAR_27 = 0;
 VAR_24 = VAR_18->msk_stat_cons;
 for (;;) {
  VAR_21 = &VAR_18->msk_stat_ring[VAR_24];
  VAR_22 = FUNC_5(VAR_21->msk_control);
  if ((VAR_22 & VAR_4) == 0)
   break;
  VAR_22 &= ~VAR_4;
  VAR_21->msk_control = FUNC_4(VAR_22);
  VAR_23 = FUNC_5(VAR_21->msk_status);
  VAR_25 = VAR_22 & VAR_11;
  VAR_26 = (VAR_22 >> 16) & 0x01;
  VAR_19 = VAR_18->msk_if[VAR_26];
  if (VAR_19 == ((void*)0)) {
   FUNC_3(VAR_18->msk_dev, "invalid port opcode "
       "0x%08x\n", VAR_22 & VAR_12);
   continue;
  }

  switch (VAR_22 & VAR_12) {
  case 129:
   VAR_19->msk_vtag = FUNC_10(VAR_25);
   break;
  case 131:
   VAR_19->msk_vtag = FUNC_10(VAR_25);

  case 132:
   VAR_19->msk_csum = VAR_23;
   break;
  case 130:
   if (!(VAR_19->msk_ifp->if_drv_flags & VAR_5))
    break;
   if (VAR_19->msk_framesize >
       (VAR_6 - VAR_9))
    FUNC_6(VAR_19, VAR_23, VAR_22, VAR_25);
   else
    FUNC_7(VAR_19, VAR_23, VAR_22, VAR_25);
   VAR_27++;





   VAR_20[VAR_26]++;

   if (VAR_20[VAR_26] >= VAR_19->msk_cdata.msk_rx_putwm) {
    FUNC_8(VAR_19);
    VAR_20[VAR_26] = 0;
   }
   break;
  case 128:
   if (VAR_18->msk_if[VAR_7] != ((void*)0))
    FUNC_9(VAR_18->msk_if[VAR_7],
        VAR_23 & VAR_13);
   if (VAR_18->msk_if[VAR_8] != ((void*)0))
    FUNC_9(VAR_18->msk_if[VAR_8],
        ((VAR_23 & VAR_15) >>
        VAR_17) |
        ((VAR_25 & VAR_14) <<
        VAR_16));
   break;
  default:
   FUNC_3(VAR_18->msk_dev, "unhandled opcode 0x%08x\n",
       VAR_22 & VAR_12);
   break;
  }
  FUNC_1(VAR_24, VAR_18->msk_stat_count);
  if (VAR_27 > VAR_18->msk_process_limit)
   break;
 }

 VAR_18->msk_stat_cons = VAR_24;
 FUNC_2(VAR_18->msk_stat_tag, VAR_18->msk_stat_map,
     VAR_2 | VAR_3);

 if (VAR_20[VAR_7] > 0)
  FUNC_8(VAR_18->msk_if[VAR_7]);
 if (VAR_20[VAR_8] > 0)
  FUNC_8(VAR_18->msk_if[VAR_8]);

 return (VAR_18->msk_stat_cons != FUNC_0(VAR_18, VAR_10));
}
