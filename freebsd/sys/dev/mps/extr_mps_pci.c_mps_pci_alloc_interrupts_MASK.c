
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {scalar_t__ disable_msix; int max_msix; scalar_t__ disable_msi; int msi_msgs; int mps_flags; int mps_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mps_softc*,int) ;
 int FUNC_2 (struct mps_softc*,int) ;
 int FUNC_3 (struct mps_softc*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct mps_softc *VAR_5)
{
 device_t VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_5->mps_dev;
 VAR_7 = 0;
 VAR_8 = 0;

 if (VAR_5->disable_msix == 0) {
  VAR_8 = FUNC_5(VAR_6);
  FUNC_3(VAR_5, VAR_2, "Counted %d MSI-X messages\n", VAR_8);
  VAR_8 = FUNC_0(VAR_8, VAR_5->max_msix);
  VAR_8 = FUNC_0(VAR_8, VAR_3);
  VAR_8 = FUNC_0(VAR_8, 1);
  if (VAR_8 != 0) {
   FUNC_3(VAR_5, VAR_2, "Attempting to allocate %d "
       "MSI-X messages\n", VAR_8);
   VAR_7 = FUNC_2(VAR_5, VAR_8);
  }
 }
 if (((VAR_7 != 0) || (VAR_8 == 0)) && (VAR_5->disable_msi == 0)) {
  VAR_8 = FUNC_4(VAR_6);
  FUNC_3(VAR_5, VAR_2, "Counted %d MSI messages\n", VAR_8);
  VAR_8 = FUNC_0(VAR_8, VAR_4);
  if (VAR_8 != 0) {
   FUNC_3(VAR_5, VAR_2, "Attempting to allocate %d "
       "MSI messages\n", VAR_4);
   VAR_7 = FUNC_1(VAR_5, VAR_4);
  }
 }
 if ((VAR_7 != 0) || (VAR_8 == 0)) {




  FUNC_3(VAR_5, VAR_2, "Falling back to legacy INTx\n");
  VAR_5->mps_flags |= VAR_0;
  VAR_8 = 1;
 } else
  VAR_5->mps_flags |= VAR_1;

 VAR_5->msi_msgs = VAR_8;
 FUNC_3(VAR_5, VAR_2, "Allocated %d interrupts\n", VAR_8);

 return (VAR_7);
}
