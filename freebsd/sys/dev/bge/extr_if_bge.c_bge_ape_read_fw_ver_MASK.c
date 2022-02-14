
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_dev; int bge_mfw_flags; } ;


 int FUNC_0 (struct bge_softc*,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct bge_softc *VAR_18)
{
 const char *VAR_19;
 uint32_t VAR_20, VAR_21;


 VAR_20 = FUNC_0(VAR_18, VAR_13);
 if (VAR_20 != VAR_14) {
  VAR_18->bge_mfw_flags &= ~ VAR_15;
  return;
 }


 VAR_20 = FUNC_0(VAR_18, VAR_3);
 if ((VAR_20 & VAR_4) == 0) {
  FUNC_1(VAR_18->bge_dev, "APE signature found "
      "but FW status not ready! 0x%08x\n", VAR_20);
  return;
 }

 VAR_18->bge_mfw_flags |= VAR_15;


 VAR_20 = FUNC_0(VAR_18, VAR_5);
 VAR_21 = FUNC_0(VAR_18, VAR_0);
 if ((VAR_21 & VAR_2) != 0) {
  VAR_18->bge_mfw_flags |= VAR_17;
  VAR_19 = "NCSI";
 } else if ((VAR_21 & VAR_1) != 0) {
  VAR_18->bge_mfw_flags |= VAR_16;
  VAR_19 = "DASH";
 } else
  VAR_19 = "UNKN";


 FUNC_1(VAR_18->bge_dev, "APE FW version: %s v%d.%d.%d.%d\n",
     VAR_19,
     (VAR_20 & VAR_7) >> VAR_8,
     (VAR_20 & VAR_9) >> VAR_10,
     (VAR_20 & VAR_11) >> VAR_12,
     (VAR_20 & VAR_6));
}
