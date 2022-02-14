
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_supplement_adapter_info {char* AdapterTypeText; } ;
struct TYPE_4__ {char* major; int dash; int minor; } ;
struct TYPE_5__ {TYPE_1__ comp; } ;
struct TYPE_6__ {int buildNumber; TYPE_2__ external; } ;
struct aac_softc {int supported_options; int aac_io_lock; int aac_dev; TYPE_3__ aac_revision; } ;
struct aac_fib {scalar_t__* data; } ;
struct aac_adapter_info {int TotalMem; int BufferMem; int ExecutionMem; int SerialNumber; TYPE_3__ KernelRevision; int batteryPlatform; int ClockSpeed; int CpuVariant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aac_softc*,struct aac_fib**) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct aac_softc*) ;
 scalar_t__ FUNC_3 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct aac_softc*,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct aac_softc *VAR_11)
{
 struct aac_fib *VAR_12;
 struct aac_adapter_info *VAR_13;
 char *VAR_14 = "Adaptec RAID controller";

 FUNC_5(VAR_11, VAR_5, "");

 FUNC_6(&VAR_11->aac_io_lock);
 FUNC_0(VAR_11, &VAR_12);

 VAR_12->data[0] = 0;
 if (FUNC_3(VAR_11, VAR_6, 0, VAR_12, 1)) {
  FUNC_4(VAR_11->aac_dev, "RequestAdapterInfo failed\n");
  FUNC_2(VAR_11);
  FUNC_7(&VAR_11->aac_io_lock);
  return;
 }


 VAR_13 = (struct aac_adapter_info *)&VAR_12->data[0];
 VAR_11->aac_revision = VAR_13->KernelRevision;

 if (VAR_10) {
  FUNC_4(VAR_11->aac_dev, "%s %dMHz, %dMB memory "
      "(%dMB cache, %dMB execution), %s\n",
      FUNC_1(VAR_9, VAR_13->CpuVariant),
      VAR_13->ClockSpeed, VAR_13->TotalMem / (1024 * 1024),
      VAR_13->BufferMem / (1024 * 1024),
      VAR_13->ExecutionMem / (1024 * 1024),
      FUNC_1(VAR_8,
      VAR_13->batteryPlatform));

  FUNC_4(VAR_11->aac_dev,
      "Kernel %d.%d-%d, Build %d, S/N %6X\n",
      VAR_13->KernelRevision.external.comp.major,
      VAR_13->KernelRevision.external.comp.minor,
      VAR_13->KernelRevision.external.comp.dash,
      VAR_13->KernelRevision.buildNumber,
      (u_int32_t)(VAR_13->SerialNumber & 0xffffff));

  FUNC_4(VAR_11->aac_dev, "Supported Options=%b\n",
         VAR_11->supported_options,
         "\20"
         "\1SNAPSHOT"
         "\2CLUSTERS"
         "\3WCACHE"
         "\4DATA64"
         "\5HOSTTIME"
         "\6RAID50"
         "\7WINDOW4GB"
         "\10SCSIUPGD"
         "\11SOFTERR"
         "\12NORECOND"
         "\13SGMAP64"
         "\14ALARM"
         "\15NONDASD"
         "\16SCSIMGT"
         "\17RAIDSCSI"
         "\21ADPTINFO"
         "\22NEWCOMM"
         "\23ARRAY64BIT"
         "\24HEATSENSOR");
 }

 if (VAR_11->supported_options & VAR_4) {
  VAR_12->data[0] = 0;
  if (FUNC_3(VAR_11, VAR_7, 0, VAR_12, 1))
   FUNC_4(VAR_11->aac_dev,
       "RequestSupplementAdapterInfo failed\n");
  else
   VAR_14 = ((struct aac_supplement_adapter_info *)
       &VAR_12->data[0])->AdapterTypeText;
 }
 FUNC_4(VAR_11->aac_dev, "%s, aac driver %d.%d.%d-%d\n",
  VAR_14,
  VAR_2, VAR_3,
  VAR_0, VAR_1);

 FUNC_2(VAR_11);
 FUNC_7(&VAR_11->aac_io_lock);
}
