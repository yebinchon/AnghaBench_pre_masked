
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct aac_softc {int aac_hwif; int flags; int aac_parent_dmat; int aac_dev; int * aac_irq; void* aac_bhandle0; void* aac_bhandle1; void* aac_btag0; void* aac_btag1; int * aac_regs_res0; int * aac_regs_res1; int * aac_if; } ;
struct aac_ident {int hwif; int quirks; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct aac_softc*) ;
 scalar_t__ VAR_15 ;
 struct aac_ident* FUNC_2 (int ) ;
 int FUNC_3 (struct aac_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 struct aac_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct aac_softc*,char*,char*) ;
 scalar_t__ FUNC_10 (int ,int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;
 void* FUNC_13 (int *) ;
 void* FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_19)
{
 struct aac_softc *VAR_20;
 const struct aac_ident *VAR_21;
 int VAR_22, VAR_23, VAR_24;

 FUNC_9(((void*)0), VAR_6, "");




 VAR_20 = FUNC_7(VAR_19);
 VAR_20->aac_dev = VAR_19;


 VAR_23 = VAR_5;




 FUNC_11(VAR_19);
 if (!(FUNC_12(VAR_19, VAR_10, 2) & VAR_9)) {
  FUNC_8(VAR_19, "can't enable bus-master feature\n");
  goto out;
 }





 VAR_21 = FUNC_2(VAR_19);
 VAR_20->aac_hwif = VAR_21->hwif;
 switch(VAR_20->aac_hwif) {
 case 131:
 case 130:
  FUNC_9(VAR_20, VAR_7,
      "set hardware up for i960Rx/NARK");
  VAR_20->aac_if = &VAR_17;
  break;
 case 128:
  FUNC_9(VAR_20, VAR_7,
      "set hardware up for StrongARM");
  VAR_20->aac_if = &VAR_18;
  break;
 case 129:
  FUNC_9(VAR_20, VAR_7,
      "set hardware up for Rocket/MIPS");
  VAR_20->aac_if = &VAR_16;
  break;
 default:
  VAR_20->aac_hwif = VAR_1;
  FUNC_8(VAR_19, "unknown hardware type\n");
  goto out;
 }


 VAR_20->flags = VAR_21->quirks;




 VAR_24 = FUNC_0(0);
 if ((VAR_20->aac_regs_res0 = FUNC_4(VAR_19,
     VAR_14, &VAR_24, VAR_11)) == ((void*)0)) {
  FUNC_8(VAR_19, "can't allocate register window 0\n");
  goto out;
 }
 VAR_20->aac_btag0 = FUNC_14(VAR_20->aac_regs_res0);
 VAR_20->aac_bhandle0 = FUNC_13(VAR_20->aac_regs_res0);

 if (VAR_20->aac_hwif == 130) {
  VAR_24 = FUNC_0(1);
  if ((VAR_20->aac_regs_res1 = FUNC_4(VAR_19,
      VAR_14, &VAR_24, VAR_11)) == ((void*)0)) {
   FUNC_8(VAR_19,
       "can't allocate register window 1\n");
   goto out;
  }
  VAR_20->aac_btag1 = FUNC_14(VAR_20->aac_regs_res1);
  VAR_20->aac_bhandle1 = FUNC_13(VAR_20->aac_regs_res1);
 } else {
  VAR_20->aac_regs_res1 = VAR_20->aac_regs_res0;
  VAR_20->aac_btag1 = VAR_20->aac_btag0;
  VAR_20->aac_bhandle1 = VAR_20->aac_bhandle0;
 }




 VAR_24 = 0;
 if (VAR_15 != 0 && (VAR_20->flags & VAR_0) == 0) {
  VAR_22 = 1;
  if (FUNC_10(VAR_19, &VAR_22) == 0)
   VAR_24 = 1;
 }
 if ((VAR_20->aac_irq = FUNC_4(VAR_20->aac_dev, VAR_13,
     &VAR_24, VAR_11 | (VAR_24 != 0 ? 0 : VAR_12))) == ((void*)0)) {
  FUNC_8(VAR_19, "can't allocate interrupt\n");
  goto out;
 }






 if (FUNC_5(FUNC_6(VAR_19),
          VAR_8,
          ((bus_size_t)((uint64_t)1 << 32)),
          VAR_2,
          VAR_2,
          ((void*)0), ((void*)0),
          VAR_3,
          VAR_4,
          VAR_3,
          0,
          ((void*)0), ((void*)0),
          &VAR_20->aac_parent_dmat)) {
  FUNC_8(VAR_19, "can't allocate parent DMA tag\n");
  goto out;
 }




 VAR_23 = FUNC_1(VAR_20);

out:
 if (VAR_23)
  FUNC_3(VAR_20);
 return(VAR_23);
}
