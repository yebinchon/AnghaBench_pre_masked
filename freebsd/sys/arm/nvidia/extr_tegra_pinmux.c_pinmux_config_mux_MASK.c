
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_mux {int reg; } ;
struct pinmux_softc {int mux_mem_res; int dev; } ;
struct pincfg {int* params; int * function; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*,int *,char*) ;
 int FUNC_3 (struct tegra_mux const*,int *) ;

__attribute__((used)) static int
FUNC_4(struct pinmux_softc *VAR_17, char *VAR_18,
    const struct tegra_mux *VAR_19, struct pincfg *VAR_20)
{
 int VAR_21;
 uint32_t VAR_22;

 VAR_22 = FUNC_0(VAR_17->mux_mem_res, VAR_19->reg);

 if (VAR_20->function != ((void*)0)) {
  VAR_21 = FUNC_3(VAR_19, VAR_20->function);
  if (VAR_21 == -1) {
   FUNC_2(VAR_17->dev,
       "Unknown function %s for pin %s\n", VAR_20->function,
       VAR_18);
   return (VAR_0);
  }
  VAR_22 &= ~(VAR_9 << VAR_10);
  VAR_22 |= (VAR_21 & VAR_9) <<
      VAR_10;
 }
 if (VAR_20->params[VAR_5] != -1) {
  VAR_22 &= ~(VAR_13 << VAR_14);
  VAR_22 |= (VAR_20->params[VAR_5] & VAR_13) <<
      VAR_14;
 }
 if (VAR_20->params[VAR_7] != -1) {
  VAR_22 &= ~(1 << VAR_16);
  VAR_22 |= (VAR_20->params[VAR_7] & 1) <<
      VAR_16;
 }
 if (VAR_20->params[VAR_8] != -1) {
  VAR_22 &= ~(1 << VAR_8);
  VAR_22 |= (VAR_20->params[VAR_8] & 1) <<
      VAR_8;
 }
 if (VAR_20->params[VAR_1] != -1) {
  VAR_22 &= ~(1 << VAR_8);
  VAR_22 |= (VAR_20->params[VAR_1] & 1) <<
      VAR_8;
 }
 if (VAR_20->params[VAR_1] != -1) {
  VAR_22 &= ~(1 << VAR_8);
  VAR_22 |= (VAR_20->params[VAR_4] & 1) <<
      VAR_8;
 }
 if (VAR_20->params[VAR_3] != -1) {
  VAR_22 &= ~(1 << VAR_12);
  VAR_22 |= (VAR_20->params[VAR_3] & 1) <<
      VAR_12;
 }
 if (VAR_20->params[VAR_2] != -1) {
  VAR_22 &= ~(1 << VAR_11);
  VAR_22 |= (VAR_20->params[VAR_2] & 1) <<
      VAR_11;
 }
 if (VAR_20->params[VAR_6] != -1) {
  VAR_22 &= ~(1 << VAR_15);
  VAR_22 |= (VAR_20->params[VAR_6] & 1) <<
      VAR_15;
 }
 FUNC_1(VAR_17->mux_mem_res, VAR_19->reg, VAR_22);
 return (0);
}
