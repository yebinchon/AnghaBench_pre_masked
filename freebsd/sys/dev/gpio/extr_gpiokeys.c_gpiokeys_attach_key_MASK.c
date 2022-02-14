
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct gpiokeys_softc {int sc_dev; } ;
struct gpiokey {int repeat_delay; int repeat; int debounce_interval; scalar_t__ keycode; int autorepeat; int * irq_res; int * pin; int irq_rid; int intr_hl; int mtx; int repeat_callout; int debounce_callout; struct gpiokeys_softc* parent_sc; } ;
typedef int prop ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpiokey*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*,void**) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int,int *,int ,struct gpiokey*,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ,char*,char const*,...) ;
 void* FUNC_9 (int ) ;
 int * FUNC_10 (int ,int *,int ,int *,int ) ;
 int FUNC_11 (int ,int ,int ,int **) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (void*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_14(struct gpiokeys_softc *VAR_11, phandle_t VAR_12,
    struct gpiokey *VAR_13)
{
 pcell_t VAR_14;
 char *VAR_15;
 uint32_t VAR_16;
 int VAR_17;
 const char *VAR_18;

 FUNC_0(VAR_13);
 VAR_13->parent_sc = VAR_11;
 FUNC_7(&VAR_13->debounce_callout, &VAR_13->mtx, 0);
 FUNC_7(&VAR_13->repeat_callout, &VAR_13->mtx, 0);

 VAR_15 = ((void*)0);
 if (FUNC_2(VAR_12, "label", (void **)&VAR_15) == -1)
  FUNC_2(VAR_12, "name", (void **)&VAR_15);

 if (VAR_15 != ((void*)0))
  VAR_18 = VAR_15;
 else
  VAR_18 = "unknown";

 VAR_13->autorepeat = FUNC_3(VAR_12, "autorepeat");

 VAR_13->repeat_delay = (VAR_10 * VAR_0) / 1000;
 if (VAR_13->repeat_delay == 0)
  VAR_13->repeat_delay = 1;

 VAR_13->repeat = (VAR_10 * VAR_1) / 1000;
 if (VAR_13->repeat == 0)
  VAR_13->repeat = 1;

 if ((FUNC_1(VAR_12, "debounce-interval", &VAR_14, sizeof(VAR_14))) > 0)
  VAR_13->debounce_interval = FUNC_9(VAR_14);
 else
  VAR_13->debounce_interval = 5;

 if ((FUNC_1(VAR_12, "freebsd,code", &VAR_14, sizeof(VAR_14))) > 0)
  VAR_13->keycode = FUNC_9(VAR_14);
 else if ((FUNC_1(VAR_12, "linux,code", &VAR_14, sizeof(VAR_14))) > 0) {
  VAR_16 = FUNC_9(VAR_14);
  VAR_13->keycode = FUNC_13(VAR_16);
  if (VAR_13->keycode == VAR_2)
   FUNC_8(VAR_11->sc_dev, "<%s> failed to map linux,code value 0x%x\n",
       VAR_18, VAR_16);
 }
 else
  FUNC_8(VAR_11->sc_dev, "<%s> no linux,code or freebsd,code property\n",
      VAR_18);

 VAR_17 = FUNC_11(VAR_11->sc_dev, VAR_12, 0, &VAR_13->pin);
 if (VAR_17) {
  FUNC_8(VAR_11->sc_dev, "<%s> failed to map pin\n", VAR_18);
  if (VAR_15)
   FUNC_4(VAR_15);
  return;
 }

 VAR_13->irq_res = FUNC_10(VAR_11->sc_dev, &VAR_13->irq_rid,
     VAR_6, VAR_13->pin, VAR_3);
 if (!VAR_13->irq_res) {
  FUNC_8(VAR_11->sc_dev, "<%s> cannot allocate interrupt\n", VAR_18);
  FUNC_12(VAR_13->pin);
  VAR_13->pin = ((void*)0);
  if (VAR_15)
   FUNC_4(VAR_15);
  return;
 }

 if (FUNC_6(VAR_11->sc_dev, VAR_13->irq_res, VAR_5 | VAR_4,
   ((void*)0), VAR_9, VAR_13,
   &VAR_13->intr_hl) != 0) {
  FUNC_8(VAR_11->sc_dev, "<%s> unable to setup the irq handler\n", VAR_18);
  FUNC_5(VAR_11->sc_dev, VAR_7, VAR_13->irq_rid,
      VAR_13->irq_res);
  FUNC_12(VAR_13->pin);
  VAR_13->pin = ((void*)0);
  VAR_13->irq_res = ((void*)0);
  if (VAR_15)
   FUNC_4(VAR_15);
  return;
 }

 if (VAR_8)
  FUNC_8(VAR_11->sc_dev, "<%s> code=%08x, autorepeat=%d, " "repeat=%d, repeat_delay=%d\n", VAR_18, VAR_13->keycode,

      VAR_13->autorepeat, VAR_13->repeat, VAR_13->repeat_delay);

 if (VAR_15)
  FUNC_4(VAR_15);
}
