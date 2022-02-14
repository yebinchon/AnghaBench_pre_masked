
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int last_halt_chanerr; int channel_halts; int descriptors_error; int descriptors_submitted; int descriptors_processed; int interrupts; } ;
struct ioat_softc {TYPE_1__ stats; int cached_intrdelay; int is_submitter_processing; int * comp_update; int tail; int head; int ring_size_order; int intrdelay_max; int intrdelay_supported; int max_xfer_size; int version; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ioat_softc* FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ioat_softc*,int ,int ,char*,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_6 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_7 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_8 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_9 (int ) ;
 struct sysctl_oid* FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_11(device_t VAR_9)
{
 struct sysctl_oid_list *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 struct sysctl_ctx_list *VAR_14;
 struct sysctl_oid *VAR_15, *VAR_16;
 struct ioat_softc *VAR_17;

 VAR_17 = FUNC_0(VAR_9);
 VAR_14 = FUNC_9(VAR_9);
 VAR_15 = FUNC_10(VAR_9);
 VAR_10 = FUNC_8(VAR_15);

 FUNC_1(VAR_14, VAR_10, VAR_5, "version", VAR_0,
     &VAR_17->version, 0, "HW version (0xMM form)");
 FUNC_6(VAR_14, VAR_10, VAR_5, "max_xfer_size", VAR_0,
     &VAR_17->max_xfer_size, 0, "HW maximum transfer size");
 FUNC_1(VAR_14, VAR_10, VAR_5, "intrdelay_supported", VAR_0,
     &VAR_17->intrdelay_supported, 0, "Is INTRDELAY supported");
 FUNC_4(VAR_14, VAR_10, VAR_5, "intrdelay_max", VAR_0,
     &VAR_17->intrdelay_max, 0,
     "Maximum configurable INTRDELAY on this channel (microseconds)");

 VAR_16 = FUNC_2(VAR_14, VAR_10, VAR_5, "state", VAR_0, ((void*)0),
     "IOAT channel internal state");
 VAR_12 = FUNC_8(VAR_16);

 FUNC_6(VAR_14, VAR_12, VAR_5, "ring_size_order", VAR_0,
     &VAR_17->ring_size_order, 0, "SW descriptor ring size order");
 FUNC_6(VAR_14, VAR_12, VAR_5, "head", VAR_0, &VAR_17->head,
     0, "SW descriptor head pointer index");
 FUNC_6(VAR_14, VAR_12, VAR_5, "tail", VAR_0, &VAR_17->tail,
     0, "SW descriptor tail pointer index");

 FUNC_7(VAR_14, VAR_12, VAR_5, "last_completion", VAR_0,
     VAR_17->comp_update, "HW addr of last completion");

 FUNC_1(VAR_14, VAR_12, VAR_5, "is_submitter_processing",
     VAR_0, &VAR_17->is_submitter_processing, 0,
     "submitter processing");

 FUNC_3(VAR_14, VAR_12, VAR_5, "chansts",
     VAR_4 | VAR_0, VAR_17, 0, VAR_6, "A",
     "String of the channel status");

 FUNC_4(VAR_14, VAR_12, VAR_5, "intrdelay", VAR_0,
     &VAR_17->cached_intrdelay, 0,
     "Current INTRDELAY on this channel (cached, microseconds)");

 VAR_16 = FUNC_2(VAR_14, VAR_10, VAR_5, "hammer", VAR_0, ((void*)0),
     "Big hammers (mostly for testing)");
 VAR_13 = FUNC_8(VAR_16);

 FUNC_3(VAR_14, VAR_13, VAR_5, "force_hw_reset",
     VAR_3 | VAR_1, VAR_17, 0, VAR_8, "I",
     "Set to non-zero to reset the hardware");

 VAR_16 = FUNC_2(VAR_14, VAR_10, VAR_5, "stats", VAR_0, ((void*)0),
     "IOAT channel statistics");
 VAR_11 = FUNC_8(VAR_16);

 FUNC_7(VAR_14, VAR_11, VAR_5, "interrupts",
     VAR_1 | VAR_2, &VAR_17->stats.interrupts,
     "Number of interrupts processed on this channel");
 FUNC_7(VAR_14, VAR_11, VAR_5, "descriptors",
     VAR_1 | VAR_2, &VAR_17->stats.descriptors_processed,
     "Number of descriptors processed on this channel");
 FUNC_7(VAR_14, VAR_11, VAR_5, "submitted",
     VAR_1 | VAR_2, &VAR_17->stats.descriptors_submitted,
     "Number of descriptors submitted to this channel");
 FUNC_7(VAR_14, VAR_11, VAR_5, "errored",
     VAR_1 | VAR_2, &VAR_17->stats.descriptors_error,
     "Number of descriptors failed by channel errors");
 FUNC_5(VAR_14, VAR_11, VAR_5, "halts",
     VAR_1 | VAR_2, &VAR_17->stats.channel_halts, 0,
     "Number of times the channel has halted");
 FUNC_5(VAR_14, VAR_11, VAR_5, "last_halt_chanerr",
     VAR_1 | VAR_2, &VAR_17->stats.last_halt_chanerr, 0,
     "The raw CHANERR when the channel was last halted");

 FUNC_3(VAR_14, VAR_11, VAR_5, "desc_per_interrupt",
     VAR_4 | VAR_0, VAR_17, 0, VAR_7, "A",
     "Descriptors per interrupt");
}
