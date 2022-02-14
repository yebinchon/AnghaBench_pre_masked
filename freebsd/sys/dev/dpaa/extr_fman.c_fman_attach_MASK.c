
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dev; } ;
struct fman_softc {int mem_rid; int irq_rid; int err_irq_rid; int * fm_handle; void* err_irq_res; void* irq_res; void* mem_res; void* qman_chan_count; void* qman_chan_base; TYPE_1__ sc_base; } ;
struct fman_config {uintptr_t irq_num; uintptr_t err_irq_num; int bus_error_callback; int exception_callback; int mem_base_addr; int fm_id; void* fman_device; } ;
typedef int qchan_range ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef void* device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,void**,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 void* FUNC_3 (void*,int ,int*,int) ;
 int FUNC_4 (void*) ;
 struct fman_softc* FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,char*) ;
 int FUNC_8 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_9 (struct fman_softc*,struct fman_config*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;

int
FUNC_13(device_t VAR_8)
{
 struct fman_softc *VAR_9;
 struct fman_config VAR_10;
 pcell_t VAR_11[2];
 phandle_t VAR_12;

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->sc_base.dev = VAR_8;


 if (FUNC_2() != VAR_1) {
  FUNC_7(VAR_8, "could not initialize smart allocator.\n");
  return (VAR_0);
 }

 VAR_12 = FUNC_10(VAR_8);
 if (FUNC_0(VAR_12, "fsl,qman-channel-range", VAR_11,
     sizeof(VAR_11)) <= 0) {
  FUNC_7(VAR_8, "Missing QMan channel range property!\n");
  return (VAR_0);
 }
 VAR_9->qman_chan_base = VAR_11[0];
 VAR_9->qman_chan_count = VAR_11[1];
 VAR_9->mem_rid = 0;
 VAR_9->mem_res = FUNC_3(VAR_8, VAR_5, &VAR_9->mem_rid,
     VAR_2 | VAR_3);
 if (!VAR_9->mem_res) {
  FUNC_7(VAR_8, "could not allocate memory.\n");
  return (VAR_0);
 }

 VAR_9->irq_rid = 0;
 VAR_9->irq_res = FUNC_3(VAR_8, VAR_4, &VAR_9->irq_rid,
     VAR_2);
 if (!VAR_9->irq_res) {
  FUNC_7(VAR_8, "could not allocate interrupt.\n");
  goto err;
 }






 FUNC_1(FUNC_12(VAR_9->irq_res));

 VAR_9->err_irq_rid = 1;
 VAR_9->err_irq_res = FUNC_3(VAR_8, VAR_4,
     &VAR_9->err_irq_rid, VAR_2 | VAR_3);
 if (!VAR_9->err_irq_res) {
  FUNC_7(VAR_8, "could not allocate error interrupt.\n");
  goto err;
 }


 VAR_10.fman_device = VAR_8;
 VAR_10.fm_id = FUNC_6(VAR_8);
 VAR_10.mem_base_addr = FUNC_11(VAR_9->mem_res);
 VAR_10.irq_num = (uintptr_t)VAR_9->irq_res;
 VAR_10.err_irq_num = (uintptr_t)VAR_9->err_irq_res;
 VAR_10.exception_callback = VAR_7;
 VAR_10.bus_error_callback = VAR_6;

 VAR_9->fm_handle = FUNC_9(VAR_9, &VAR_10);
 if (VAR_9->fm_handle == ((void*)0)) {
  FUNC_7(VAR_8, "could not be configured\n");
  return (VAR_0);
 }

 return (FUNC_4(VAR_8));

err:
 FUNC_8(VAR_8);
 return (VAR_0);
}
