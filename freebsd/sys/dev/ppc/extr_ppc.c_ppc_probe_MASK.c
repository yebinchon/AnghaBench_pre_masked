
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int rid_ioport; scalar_t__ res_ioport; int ppc_flags; scalar_t__ res_irq; int rid_irq; scalar_t__ res_drq; int rid_drq; int ppc_epp; int ppc_type; int ppc_mode; int ppc_model; int ppc_dev; void* ppc_dmachan; void* ppc_irq; void* ppc_base; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 short VAR_0 ;
 scalar_t__* VAR_1 ;
 struct ppc_data* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 void* FUNC_2 (int ,int ,int*,int ,int ) ;
 int FUNC_3 (int ,int ,int,scalar_t__*,int *) ;
 int FUNC_4 (int ,int ,int,scalar_t__) ;
 int FUNC_5 (int ,int ,int,scalar_t__,int ) ;
 int FUNC_6 (struct ppc_data*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (struct ppc_data*,int) ;
 void* FUNC_10 (scalar_t__) ;

int
FUNC_11(device_t VAR_14, int VAR_15)
{



 struct ppc_data *VAR_16;
 int VAR_17;
 rman_res_t VAR_18;




 VAR_16 = FUNC_0(VAR_14);
 FUNC_6(VAR_16, sizeof(struct ppc_data));

 VAR_16->rid_ioport = VAR_15;


 VAR_17 = FUNC_3(VAR_14, VAR_11, VAR_15, &VAR_18, ((void*)0));
 VAR_16->res_ioport = FUNC_2(VAR_14, VAR_11,
            &VAR_16->rid_ioport,
            VAR_4,
            VAR_8);

 if (VAR_16->res_ioport != 0) {
  if (VAR_13)
   FUNC_8(VAR_14, "using extended I/O port range\n");
 } else {

   VAR_16->res_ioport = FUNC_2(VAR_14,
                VAR_11,
              &VAR_16->rid_ioport,
              VAR_5,
              VAR_8);
  if (VAR_16->res_ioport != 0) {
   if (VAR_13)
    FUNC_8(VAR_14, "using normal I/O port range\n");
  } else {
   if (VAR_13)
    FUNC_8(VAR_14, "cannot reserve I/O port range\n");
   goto error;
  }
 }

  VAR_16->ppc_base = FUNC_10(VAR_16->res_ioport);

 VAR_16->ppc_flags = FUNC_7(VAR_14);

 if (!(VAR_16->ppc_flags & 0x20)) {
  VAR_16->res_irq = FUNC_1(VAR_14, VAR_12,
            &VAR_16->rid_irq,
            VAR_9);
  VAR_16->res_drq = FUNC_1(VAR_14, VAR_10,
            &VAR_16->rid_drq,
            VAR_8);
 }

 if (VAR_16->res_irq)
  VAR_16->ppc_irq = FUNC_10(VAR_16->res_irq);
 if (VAR_16->res_drq)
  VAR_16->ppc_dmachan = FUNC_10(VAR_16->res_drq);

 VAR_16->ppc_dev = VAR_14;
 VAR_16->ppc_model = VAR_3;

 VAR_16->ppc_mode = VAR_6;
 VAR_16->ppc_epp = (VAR_16->ppc_flags & 0x10) >> 4;

 VAR_16->ppc_type = VAR_7;




 if (FUNC_9(VAR_16, VAR_16->ppc_flags & 0xf))
  goto error;

 return (0);

error:
 if (VAR_16->res_irq != 0) {
  FUNC_4(VAR_14, VAR_12, VAR_16->rid_irq,
         VAR_16->res_irq);
 }
 if (VAR_16->res_ioport != 0) {
  FUNC_4(VAR_14, VAR_11, VAR_16->rid_ioport,
         VAR_16->res_ioport);
 }
 if (VAR_16->res_drq != 0) {
  FUNC_4(VAR_14, VAR_10, VAR_16->rid_drq,
         VAR_16->res_drq);
 }
 return (VAR_2);
}
