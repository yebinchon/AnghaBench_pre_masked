
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_softc {int sc_hdmi_evh; void* sc_mem_res; scalar_t__ sc_mem_rid; void* sc_irq_res; scalar_t__ sc_irq_rid; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ipu_softc*,int ) ;
 int FUNC_1 (struct ipu_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,void*) ;
 struct ipu_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct ipu_softc *VAR_8;

 if (VAR_4)
  return (VAR_0);

 VAR_8 = FUNC_4(VAR_7);
 VAR_8->sc_dev = VAR_7;

 VAR_8->sc_mem_rid = 0;
 VAR_8->sc_mem_res = FUNC_2(VAR_7, VAR_3,
     &VAR_8->sc_mem_rid, VAR_1);
 if (!VAR_8->sc_mem_res) {
  FUNC_5(VAR_7, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_8->sc_irq_rid = 0;
 VAR_8->sc_irq_res = FUNC_2(VAR_7, VAR_2,
     &VAR_8->sc_irq_rid, VAR_1);
 if (!VAR_8->sc_irq_res) {
  FUNC_3(VAR_7, VAR_3,
      VAR_8->sc_mem_rid, VAR_8->sc_mem_res);
  FUNC_5(VAR_7, "cannot allocate interrupt\n");
  return (VAR_0);
 }


 FUNC_6(1);

 if (FUNC_7() != 0) {
  FUNC_5(VAR_7, "failed to reset IPU\n");
  return (VAR_0);
 }

 FUNC_1(VAR_8);

 VAR_8->sc_hdmi_evh = FUNC_0(VAR_5,
     VAR_6, VAR_8, 0);

 VAR_4 = 1;

 return (0);
}
