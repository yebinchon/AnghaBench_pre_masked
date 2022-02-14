
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_pcib_softc {int msi_intr_cookie; int msi_irq_res; int msi_page; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tegra_pcib_softc*,int ) ;
 int FUNC_3 (struct tegra_pcib_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int,int ,int *,struct tegra_pcib_softc*,int *) ;
 struct tegra_pcib_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct tegra_pcib_softc*) ;
 int FUNC_9 (struct tegra_pcib_softc*) ;
 int VAR_10 ;
 int FUNC_10 (struct tegra_pcib_softc*,int,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_11)
{
 struct tegra_pcib_softc *VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_5(VAR_11);

 VAR_12->msi_page = FUNC_7(VAR_8, VAR_7, 0,
     VAR_3, VAR_8, 0, VAR_9);


 FUNC_10(VAR_12, 9, FUNC_11(VAR_12->msi_page), FUNC_11(VAR_12->msi_page),
     VAR_8, 0);


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  FUNC_3(VAR_12, FUNC_0(VAR_14), 0);
  FUNC_3(VAR_12, FUNC_1(VAR_14), 0xFFFFFFFF);
 }
 VAR_15 = FUNC_4(VAR_11, VAR_12->msi_irq_res, VAR_6 | VAR_5,
     VAR_10, ((void*)0), VAR_12, &VAR_12->msi_intr_cookie);
 if (VAR_15 != 0) {
  FUNC_6(VAR_11, "cannot setup MSI interrupt handler\n");
  VAR_15 = VAR_4;
  goto out;
 }

 if (FUNC_8(VAR_12) != 0) {
  FUNC_6(VAR_11, "WARNING: unable to attach PIC\n");
  FUNC_9(VAR_12);
  goto out;
 }


 VAR_13 = FUNC_2(VAR_12, VAR_0);
 VAR_13 |= VAR_1;
 FUNC_3(VAR_12, VAR_0, VAR_13);

out:
 return (VAR_15);
}
