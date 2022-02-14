
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_18__ {void* perfh; void* mrqp; void* rxri; void* rxseq; void* hlm; void* iaar; void* fcpc; void* vf; void* dif; void* npiv; void* iaab; } ;
struct TYPE_22__ {TYPE_2__ flag; } ;
struct TYPE_19__ {TYPE_8__ features; scalar_t__ perf_hint; } ;
struct TYPE_16__ {int phys; scalar_t__ size; int virt; } ;
struct TYPE_17__ {TYPE_14__ data; } ;
struct TYPE_20__ {int sli_rev; scalar_t__ sli_family; TYPE_3__ config; int os; TYPE_1__ vpd; TYPE_14__ bmbx; int asic_rev; int asic_type; int if_type; int port_type; } ;
typedef TYPE_4__ sli4_t ;
typedef int sli4_port_type_e ;
typedef int sli4_mcqe_t ;
struct TYPE_21__ {scalar_t__ rev_id; scalar_t__ family; int rev; int type; } ;
typedef TYPE_5__ sli4_asic_entry_t ;
typedef int ocs_os_handle_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_14__*,int,int) ;
 int FUNC_5 (int ,char*,int ,int ,int ,...) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 TYPE_5__* VAR_12 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_18 (TYPE_4__*,TYPE_8__*,void*) ;

int32_t
FUNC_19(sli4_t *VAR_13, ocs_os_handle_t VAR_14, sli4_port_type_e VAR_15)
{
 uint32_t VAR_16 = VAR_11;
 uint32_t VAR_17 = 0;
 uint32_t VAR_18 = 0;
 uint32_t VAR_19 = 0;
 uint32_t VAR_20;
 sli4_asic_entry_t *VAR_21;

 FUNC_8(VAR_13, 0, sizeof(sli4_t));

 VAR_13->os = VAR_14;
 VAR_13->port_type = VAR_15;





 VAR_16 = FUNC_3(VAR_14, VAR_5);

 if (FUNC_15(VAR_16)) {
  FUNC_6(VAR_14, "SLI_INTF is not valid\n");
  return -1;
 }


 VAR_13->sli_rev = FUNC_14(VAR_16);
 if (4 != VAR_13->sli_rev) {
  FUNC_6(VAR_14, "Unsupported SLI revision (intf=%#x)\n",
    VAR_16);
  return -1;
 }

 VAR_13->sli_family = FUNC_13(VAR_16);

 VAR_13->if_type = FUNC_12(VAR_16);

 if (VAR_4 == VAR_13->if_type) {
  FUNC_5(VAR_14, "status=%#x error1=%#x error2=%#x\n",
    FUNC_17(VAR_13, VAR_9),
    FUNC_17(VAR_13, VAR_7),
    FUNC_17(VAR_13, VAR_8));
 }




 VAR_17 = FUNC_3(VAR_14, VAR_6);
 VAR_18 = FUNC_16(VAR_17);
 VAR_19 = VAR_13->sli_family;
 if (VAR_19 == VAR_3) {
  uint32_t VAR_22 = FUNC_3(VAR_14, VAR_0);
  VAR_19 = FUNC_9(VAR_22);
 }

 for (VAR_20 = 0, VAR_21 = VAR_12; VAR_20 < FUNC_0(VAR_12); VAR_20++, VAR_21++) {
  if ((VAR_18 == VAR_21->rev_id) && (VAR_19 == VAR_21->family)) {
   VAR_13->asic_type = VAR_21->type;
   VAR_13->asic_rev = VAR_21->rev;
   break;
  }
 }

 if( (VAR_13->asic_type == 0) || (VAR_13->asic_rev == 0)) {
  FUNC_6(VAR_14, "no matching asic family/rev found: %02x/%02x\n", VAR_19, VAR_18);
  return -1;
 }







 if (FUNC_4(VAR_13->os, &VAR_13->bmbx, VAR_2 +
    sizeof(sli4_mcqe_t), 16)) {
  FUNC_6(VAR_14, "bootstrap mailbox allocation failed\n");
  return -1;
 }

 if (VAR_13->bmbx.phys & VAR_1) {
  FUNC_6(VAR_14, "bad alignment for bootstrap mailbox\n");
  return -1;
 }

 FUNC_5(VAR_14, "bmbx v=%p p=0x%x %08x s=%zd\n", VAR_13->bmbx.virt,
  FUNC_1(VAR_13->bmbx.phys),
  FUNC_2(VAR_13->bmbx.phys),
  VAR_13->bmbx.size);


 if (FUNC_4(VAR_13->os, &VAR_13->vpd.data, 4096 , 4096)) {

  VAR_13->vpd.data.size = 0;
  FUNC_7(VAR_14, "VPD buffer allocation failed\n");
 }

 if (FUNC_10(VAR_13)) {
  FUNC_6(VAR_13->os, "FW initialization failed\n");
  return -1;
 }





 VAR_13->config.features.flag.iaab = VAR_10;
 VAR_13->config.features.flag.npiv = VAR_10;
 VAR_13->config.features.flag.dif = VAR_10;
 VAR_13->config.features.flag.vf = VAR_10;
 VAR_13->config.features.flag.fcpc = VAR_10;
 VAR_13->config.features.flag.iaar = VAR_10;
 VAR_13->config.features.flag.hlm = VAR_10;
 VAR_13->config.features.flag.perfh = VAR_10;
 VAR_13->config.features.flag.rxseq = VAR_10;
 VAR_13->config.features.flag.rxri = VAR_10;
 VAR_13->config.features.flag.mrqp = VAR_10;


 if (VAR_13->config.perf_hint) {
  VAR_13->config.features.flag.perfh = VAR_10;
 }

 if (FUNC_18(VAR_13, &VAR_13->config.features, VAR_10)) {
  return -1;
 }

 if (FUNC_11(VAR_13)) {
  return -1;
 }

 return 0;
}
