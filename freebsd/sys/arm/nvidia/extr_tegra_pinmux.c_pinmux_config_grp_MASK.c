
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_grp {int drvdn_mask; int drvdn_shift; int drvup_mask; int drvup_shift; int reg; } ;
struct pinmux_softc {int pad_mem_res; } ;
struct pincfg {int* params; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct pinmux_softc *VAR_15, char *VAR_16,
    const struct tegra_grp *VAR_17, struct pincfg *VAR_18)
{
 uint32_t VAR_19;

 VAR_19 = FUNC_0(VAR_15->pad_mem_res, VAR_17->reg);

 if (VAR_18->params[VAR_3] != -1) {
  VAR_19 &= ~(1 << VAR_13);
  VAR_19 |= (VAR_18->params[VAR_3] & 1) <<
      VAR_13;
 }
 if (VAR_18->params[VAR_4] != -1) {
  VAR_19 &= ~(1 << VAR_14);
  VAR_19 |= (VAR_18->params[VAR_4] & 1) <<
      VAR_14;
 }
 if (VAR_18->params[VAR_1] != -1) {
  VAR_19 &= ~(VAR_11 << VAR_12);
  VAR_19 |= (VAR_18->params[VAR_1] &
      VAR_11) << VAR_12;
 }
 if (VAR_18->params[VAR_6] != -1) {
  VAR_19 &= ~(VAR_7 <<
      VAR_8);
  VAR_19 |= (VAR_18->params[VAR_6] &
      VAR_7) <<
      VAR_8;
 }
 if (VAR_18->params[VAR_5] != -1) {
  VAR_19 &= ~(VAR_9 <<
      VAR_10);
  VAR_19 |= (VAR_18->params[VAR_5] &
      VAR_9) <<
      VAR_10;
 }
 if ((VAR_18->params[VAR_0] != -1) &&
   (VAR_17->drvdn_mask != -1)) {
  VAR_19 &= ~(VAR_17->drvdn_shift << VAR_17->drvdn_mask);
  VAR_19 |= (VAR_18->params[VAR_0] &
      VAR_17->drvdn_mask) << VAR_17->drvdn_shift;
 }
 if ((VAR_18->params[VAR_2] != -1) &&
   (VAR_17->drvup_mask != -1)) {
  VAR_19 &= ~(VAR_17->drvup_shift << VAR_17->drvup_mask);
  VAR_19 |= (VAR_18->params[VAR_2] &
      VAR_17->drvup_mask) << VAR_17->drvup_shift;
 }
 FUNC_1(VAR_15->pad_mem_res, VAR_17->reg, VAR_19);
 return (0);
}
