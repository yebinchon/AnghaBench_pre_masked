
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sli_valid; scalar_t__ sli_rev; scalar_t__ sli_if_type; scalar_t__ sli_hint1; scalar_t__ sli_func_type; } ;
struct TYPE_10__ {TYPE_1__ bits; int dw0; } ;
typedef TYPE_2__ pci_sli_intf_t ;
struct TYPE_11__ {int flags; void* db_res; void* db_vhandle; void* db_bhandle; void* db_btag; int dev; void* csr_res; void* csr_vhandle; void* csr_bhandle; void* csr_btag; void* devcfg_res; void* devcfg_vhandle; void* devcfg_bhandle; void* devcfg_btag; int fn; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 void* FUNC_4 (int ,int ,int*,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;
 void* FUNC_11 (void*) ;
 void* FUNC_12 (void*) ;
 void* FUNC_13 (void*) ;

int
FUNC_14(POCE_SOFTC VAR_18)
{
 int VAR_19, VAR_20 = 0;
 pci_sli_intf_t VAR_21;

 FUNC_8(VAR_18->dev);

 FUNC_6(VAR_18);

 VAR_18->fn = FUNC_9(VAR_18->dev);


 if (FUNC_0(VAR_18) && (VAR_18->flags & VAR_3))
  VAR_20 = VAR_1;
 else
  VAR_20 = VAR_2;

 VAR_19 = FUNC_2(VAR_20);

 if (FUNC_0(VAR_18) || FUNC_1(VAR_18))
  VAR_18->devcfg_res = FUNC_3(VAR_18->dev,
    VAR_17, &VAR_19,
    VAR_15|VAR_16);
 else
  VAR_18->devcfg_res = FUNC_4(VAR_18->dev,
    VAR_17, &VAR_19, 32768,
    VAR_15|VAR_16);

 if (!VAR_18->devcfg_res)
  goto error;

 VAR_18->devcfg_btag = FUNC_12(VAR_18->devcfg_res);
 VAR_18->devcfg_bhandle = FUNC_11(VAR_18->devcfg_res);
 VAR_18->devcfg_vhandle = FUNC_13(VAR_18->devcfg_res);




 VAR_21.dw0 = FUNC_10((VAR_18)->dev,VAR_9,4);

 if (VAR_21.bits.sli_valid != VAR_11)
  goto error;

 if (VAR_21.bits.sli_rev != VAR_10) {
  FUNC_5(VAR_18->dev, "Adapter doesnt support SLI4\n");
  goto error;
 }

 if (VAR_21.bits.sli_if_type == VAR_8)
  VAR_18->flags |= VAR_5;

 if (VAR_21.bits.sli_hint1 == VAR_7)
  VAR_18->flags |= VAR_4;

 if (VAR_21.bits.sli_func_type == VAR_12)
  VAR_18->flags |= VAR_6;


 if (FUNC_0(VAR_18) || FUNC_1(VAR_18)) {

  VAR_19 = FUNC_2(VAR_13);
  VAR_18->csr_res = FUNC_3(VAR_18->dev,
    VAR_17, &VAR_19, VAR_15|VAR_16);
  if (!VAR_18->csr_res)
   goto error;
  VAR_18->csr_btag = FUNC_12(VAR_18->csr_res);
  VAR_18->csr_bhandle = FUNC_11(VAR_18->csr_res);
  VAR_18->csr_vhandle = FUNC_13(VAR_18->csr_res);


  VAR_19 = FUNC_2(VAR_14);
  VAR_18->db_res = FUNC_3(VAR_18->dev,
    VAR_17, &VAR_19, VAR_15|VAR_16);
  if (!VAR_18->db_res)
   goto error;
  VAR_18->db_btag = FUNC_12(VAR_18->db_res);
  VAR_18->db_bhandle = FUNC_11(VAR_18->db_res);
  VAR_18->db_vhandle = FUNC_13(VAR_18->db_res);
 }

 return 0;

error:
 FUNC_7(VAR_18);
 return VAR_0;
}
