
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; int mfi_regs_rid; int mfi_irq_rid; int mfi_dev; int * mfi_irq; int mfi_parent_dmat; int * mfi_regs_resource; int mfi_bhandle; int mfi_btag; } ;
struct mfi_ident {int flags; } ;
typedef int device_t ;


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
 void* FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mfi_softc*,int) ;
 struct mfi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct mfi_softc*) ;
 struct mfi_ident* FUNC_8 (int ) ;
 int FUNC_9 (struct mfi_softc*) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (struct mfi_softc*) ;
 scalar_t__ FUNC_11 (int ,int*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_16)
{
 struct mfi_softc *VAR_17;
 struct mfi_ident *VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_5(VAR_16);
 FUNC_4(VAR_17, sizeof(*VAR_17));
 VAR_17->mfi_dev = VAR_16;
 VAR_18 = FUNC_8(VAR_16);
 VAR_17->mfi_flags = VAR_18->flags;


 FUNC_12(VAR_16);


 if ((VAR_17->mfi_flags & VAR_6) ||
     (VAR_17->mfi_flags & VAR_7)) {

  VAR_17->mfi_regs_rid = FUNC_0(0);
 }
 else if ((VAR_17->mfi_flags & VAR_8) ||
   (VAR_17->mfi_flags & VAR_9) ||
  (VAR_17->mfi_flags & VAR_10)) {

  VAR_17->mfi_regs_rid = FUNC_0(1);
 }
 if ((VAR_17->mfi_regs_resource = FUNC_1(VAR_17->mfi_dev,
     VAR_14, &VAR_17->mfi_regs_rid, VAR_11)) == ((void*)0)) {
  FUNC_6(VAR_16, "Cannot allocate PCI registers\n");
  return (VAR_5);
 }
 VAR_17->mfi_btag = FUNC_14(VAR_17->mfi_regs_resource);
 VAR_17->mfi_bhandle = FUNC_13(VAR_17->mfi_regs_resource);

 VAR_20 = VAR_4;


 if (FUNC_2( FUNC_3(VAR_16),
    1, 0,
    VAR_0,
    VAR_0,
    ((void*)0), ((void*)0),
    VAR_1,
    VAR_2,
    VAR_1,
    0,
    ((void*)0), ((void*)0),
    &VAR_17->mfi_parent_dmat)) {
  FUNC_6(VAR_16, "Cannot allocate parent DMA tag\n");
  goto out;
 }


 VAR_17->mfi_irq_rid = 0;
 VAR_19 = 1;
 if (VAR_15 && FUNC_11(VAR_17->mfi_dev, &VAR_19) == 0) {
  FUNC_6(VAR_17->mfi_dev, "Using MSI\n");
  VAR_17->mfi_irq_rid = 1;
 }
 if ((VAR_17->mfi_irq = FUNC_1(VAR_17->mfi_dev, VAR_13,
     &VAR_17->mfi_irq_rid, VAR_12 | VAR_11)) == ((void*)0)) {
  FUNC_6(VAR_17->mfi_dev, "Cannot allocate interrupt\n");
  VAR_20 = VAR_3;
  goto out;
 }

 VAR_20 = FUNC_7(VAR_17);
out:
 if (VAR_20) {
  FUNC_9(VAR_17);
  FUNC_10(VAR_17);
 }

 return (VAR_20);
}
