
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct syscon {int dummy; } ;
struct rk_pinctrl_softc {TYPE_2__* conf; int dev; } ;
typedef int phandle_t ;
struct TYPE_4__ {int iomux_nbanks; int (* get_pd_offset ) (struct rk_pinctrl_softc*,int) ;TYPE_1__* iomux_conf; struct syscon* (* get_syscon ) (struct rk_pinctrl_softc*,int) ;} ;
struct TYPE_3__ {int bank; int subbank; int offset; int nbits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct syscon*,int,int,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct rk_pinctrl_softc*,int,int,int*,int*,int*) ;
 int FUNC_4 (struct rk_pinctrl_softc*,int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rk_pinctrl_softc*,int ,int,int,int*,int*) ;
 struct syscon* FUNC_7 (struct rk_pinctrl_softc*,int) ;
 int FUNC_8 (struct rk_pinctrl_softc*,int) ;

__attribute__((used)) static void
FUNC_9(struct rk_pinctrl_softc *VAR_0, uint32_t *VAR_1)
{
 phandle_t VAR_2;
 struct syscon *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_4 = VAR_1[0];
 VAR_6 = VAR_1[1];
 VAR_7 = VAR_1[2];
 VAR_2 = FUNC_0(VAR_1[3]);
 VAR_5 = VAR_6 / 8;

 for (VAR_13 = 0; VAR_13 < VAR_0->conf->iomux_nbanks; VAR_13++)
  if (VAR_0->conf->iomux_conf[VAR_13].bank == VAR_4 &&
      VAR_0->conf->iomux_conf[VAR_13].subbank == VAR_5)
   break;

 if (VAR_13 == VAR_0->conf->iomux_nbanks) {
  FUNC_2(VAR_0->dev, "Unknown pin %d in bank %d\n", VAR_6,
      VAR_4);
  return;
 }


 VAR_3 = VAR_0->conf->get_syscon(VAR_0, VAR_4);


 VAR_11 = VAR_0->conf->iomux_conf[VAR_13].offset;
 switch (VAR_0->conf->iomux_conf[VAR_13].nbits) {
 case 4:
  if ((VAR_6 % 8) >= 4)
   VAR_11 += 0x4;
  VAR_9 = (VAR_6 % 4) * 4;
  VAR_10 = (0xF << VAR_9);
  break;
 case 3:
  if ((VAR_6 % 8) >= 5)
   VAR_11 += 4;
  VAR_9 = (VAR_6 % 8 % 5) * 3;
  VAR_10 = (0x7 << VAR_9);
  break;
 case 2:
  VAR_9 = (VAR_6 % 8) * 2;
  VAR_10 = (0x3 << VAR_9);
  break;
 default:
  FUNC_2(VAR_0->dev,
      "Unknown pin stride width %d in bank %d\n",
      VAR_0->conf->iomux_conf[VAR_13].nbits, VAR_4);
  return;
 }
 FUNC_3(VAR_0, VAR_4, VAR_6, &VAR_11, &VAR_10, &VAR_9);







 FUNC_1(VAR_3, VAR_11, VAR_10, VAR_7 << VAR_9 | (VAR_10 << 16));


 VAR_8 = FUNC_5(VAR_2);
 if (VAR_8 >= 0) {
  VAR_11 = VAR_0->conf->get_pd_offset(VAR_0, VAR_4);

  VAR_11 += VAR_4 * 0x10 + ((VAR_6 / 8) * 0x4);
  VAR_9 = (VAR_6 % 8) * 2;
  VAR_10 = (0x3 << VAR_9) << 16;
  FUNC_1(VAR_3, VAR_11, VAR_10, VAR_8 << VAR_9 | (VAR_10 << 16));
 }


 VAR_14 = FUNC_6(VAR_0, VAR_2, VAR_4, VAR_5, &VAR_12, &VAR_11);
 if (VAR_14 == 0) {
  VAR_9 = (VAR_6 % 8) * 2;
  VAR_10 = (0x3 << VAR_9) << 16;
  FUNC_1(VAR_3, VAR_11, VAR_10, VAR_12 << VAR_9 | (VAR_10 << 16));
 }


 VAR_14 = FUNC_4(VAR_0, VAR_2, VAR_4, VAR_6);
}
