
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dev; } ;
struct fwohci_softc {TYPE_1__ fc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fwohci_softc*,int) ;
 int FUNC_3 (int ,char*,int,...) ;
 int * VAR_12 ;

void
FUNC_4(struct fwohci_softc *VAR_13, uint32_t VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 if (VAR_14 == 0) {
  VAR_15 = VAR_4;
 } else if (VAR_14 == 1) {
  VAR_15 = VAR_5;
 } else if (VAR_14 == 2) {
  VAR_15 = VAR_2;
 } else if (VAR_14 == 3) {
  VAR_15 = VAR_3;
 } else if (VAR_14 < VAR_0) {
  VAR_15 = FUNC_1(VAR_14 - VAR_1);
 } else {
  VAR_15 = FUNC_0(VAR_14 - VAR_0);
 }
 VAR_16 = VAR_17 = FUNC_2(VAR_13, VAR_15);
 VAR_18 = FUNC_2(VAR_13, VAR_15 + 0xc);
 VAR_19 = FUNC_2(VAR_13, VAR_15 + 0x10);

 FUNC_3(VAR_13->fc.dev, "ch %1x cntl:0x%08x cmd:0x%08x match:0x%08x\n",
  VAR_14,
  VAR_16,
  VAR_18,
  VAR_19);
 VAR_17 &= 0xffff;
 if (VAR_17) {
  FUNC_3(VAR_13->fc.dev, "dma %d ch:%s%s%s%s%s%s %s(%x)\n",
   VAR_14,
   VAR_17 & VAR_10 ? "RUN," : "",
   VAR_17 & VAR_11 ? "WAKE," : "",
   VAR_17 & VAR_9 ? "DEAD," : "",
   VAR_17 & VAR_6 ? "ACTIVE," : "",
   VAR_17 & VAR_8 ? "BRANCH," : "",
   VAR_17 & VAR_7 ? "BADDMA," : "",
   VAR_12[VAR_17 & 0x1f],
   VAR_17 & 0x1f
  );
 } else {
  FUNC_3(VAR_13->fc.dev, "dma %d ch: Nostat\n", VAR_14);
 }
}
