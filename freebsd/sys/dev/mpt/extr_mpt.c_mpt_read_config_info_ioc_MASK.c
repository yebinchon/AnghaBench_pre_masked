
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int raid_max_volumes; size_t raid_page0_len; int raid_max_disks; TYPE_3__* ioc_page3; TYPE_4__* ioc_page2; int * raid_disks; struct mpt_raid_volume* raid_volumes; } ;
struct mpt_raid_volume {int * config_page; } ;
struct mpt_raid_disk {int dummy; } ;
typedef int hdr ;
struct TYPE_8__ {int CapabilitiesFlags; int NumActiveVolumes; int MaxVolumes; int NumActivePhysDisks; int MaxPhysDisks; int Header; } ;
struct TYPE_7__ {int Header; } ;
struct TYPE_6__ {int PageLength; int PageType; int PageNumber; int PageVersion; } ;
typedef int RAID_VOL0_PHYS_DISK ;
typedef TYPE_1__ CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (size_t,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,int ,int,int ,int ) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;
 int FUNC_6 (struct mpt_softc*,char*) ;
 int FUNC_7 (struct mpt_softc*) ;
 int FUNC_8 (struct mpt_softc*) ;
 int FUNC_9 (struct mpt_softc*,int ,int,int ,TYPE_1__*,int ,int) ;
 int FUNC_10 (struct mpt_softc*,int ,int *,size_t,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct mpt_softc *VAR_9)
{
 CONFIG_PAGE_HEADER VAR_10;
 struct mpt_raid_volume *VAR_11;
 int VAR_12;
 int VAR_13;
 size_t VAR_14;

 VAR_12 = FUNC_9(VAR_9, VAR_4,
  2, 0, &VAR_10, VAR_3, 5000);



 if (VAR_12 == VAR_0) {
  return (0);
 }
 if (VAR_12) {
  return (VAR_12);
 }

 FUNC_4(VAR_9, VAR_5,
     "IOC Page 2 Header: Version %x len %x PageNumber %x PageType %x\n",
     VAR_10.PageVersion, VAR_10.PageLength << 2,
     VAR_10.PageNumber, VAR_10.PageType);

 VAR_14 = VAR_10.PageLength * sizeof(uint32_t);
 VAR_9->ioc_page2 = FUNC_0(VAR_14, VAR_6, VAR_7 | VAR_8);
 if (VAR_9->ioc_page2 == ((void*)0)) {
  FUNC_5(VAR_9, "unable to allocate memory for IOC page 2\n");
  FUNC_7(VAR_9);
  return (VAR_2);
 }
 FUNC_1(&VAR_9->ioc_page2->Header, &VAR_10, sizeof(VAR_10));
 VAR_12 = FUNC_10(VAR_9, 0,
     &VAR_9->ioc_page2->Header, VAR_14, VAR_3, 5000);
 if (VAR_12) {
  FUNC_5(VAR_9, "failed to read IOC Page 2\n");
  FUNC_7(VAR_9);
  return (VAR_1);
 }
 FUNC_2(VAR_9->ioc_page2);

 if (VAR_9->ioc_page2->CapabilitiesFlags != 0) {
  uint32_t VAR_15;

  FUNC_5(VAR_9, "Capabilities: (");
  for (VAR_15 = 1; VAR_15 != 0; VAR_15 <<= 1) {
   if ((VAR_9->ioc_page2->CapabilitiesFlags & VAR_15) == 0) {
    continue;
   }
   switch (VAR_15) {
   case 130:
    FUNC_6(VAR_9, " RAID-0");
    break;
   case 132:
    FUNC_6(VAR_9, " RAID-1E");
    break;
   case 131:
    FUNC_6(VAR_9, " RAID-1");
    break;
   case 128:
    FUNC_6(VAR_9, " SES");
    break;
   case 129:
    FUNC_6(VAR_9, " SAFTE");
    break;
   case 133:
    FUNC_6(VAR_9, " Multi-Channel-Arrays");
   default:
    break;
   }
  }
  FUNC_6(VAR_9, " )\n");
  if ((VAR_9->ioc_page2->CapabilitiesFlags
     & (130
      | 132
      | 131)) != 0) {
   FUNC_5(VAR_9, "%d Active Volume%s(%d Max)\n",
    VAR_9->ioc_page2->NumActiveVolumes,
    VAR_9->ioc_page2->NumActiveVolumes != 1
         ? "s " : " ",
    VAR_9->ioc_page2->MaxVolumes);
   FUNC_5(VAR_9, "%d Hidden Drive Member%s(%d Max)\n",
    VAR_9->ioc_page2->NumActivePhysDisks,
    VAR_9->ioc_page2->NumActivePhysDisks != 1
         ? "s " : " ",
    VAR_9->ioc_page2->MaxPhysDisks);
  }
 }

 VAR_14 = VAR_9->ioc_page2->MaxVolumes * sizeof(struct mpt_raid_volume);
 VAR_9->raid_volumes = FUNC_0(VAR_14, VAR_6, VAR_7 | VAR_8);
 if (VAR_9->raid_volumes == ((void*)0)) {
  FUNC_5(VAR_9, "Could not allocate RAID volume data\n");
  FUNC_7(VAR_9);
  return (VAR_2);
 }






 VAR_9->raid_max_volumes = VAR_9->ioc_page2->MaxVolumes;

 VAR_14 = sizeof(*VAR_9->raid_volumes->config_page) +
     (sizeof (RAID_VOL0_PHYS_DISK) * (VAR_9->ioc_page2->MaxPhysDisks - 1));
 for (VAR_13 = 0; VAR_13 < VAR_9->ioc_page2->MaxVolumes; VAR_13++) {
  VAR_11 = &VAR_9->raid_volumes[VAR_13];
  VAR_11->config_page =
      FUNC_0(VAR_14, VAR_6, VAR_7 | VAR_8);
  if (VAR_11->config_page == ((void*)0)) {
   FUNC_5(VAR_9, "Could not allocate RAID page data\n");
   FUNC_7(VAR_9);
   return (VAR_2);
  }
 }
 VAR_9->raid_page0_len = VAR_14;

 VAR_14 = VAR_9->ioc_page2->MaxPhysDisks * sizeof(struct mpt_raid_disk);
 VAR_9->raid_disks = FUNC_0(VAR_14, VAR_6, VAR_7 | VAR_8);
 if (VAR_9->raid_disks == ((void*)0)) {
  FUNC_5(VAR_9, "Could not allocate RAID disk data\n");
  FUNC_7(VAR_9);
  return (VAR_2);
 }
 VAR_9->raid_max_disks = VAR_9->ioc_page2->MaxPhysDisks;




 VAR_12 = FUNC_9(VAR_9, VAR_4,
     3, 0, &VAR_10, VAR_3, 5000);
 if (VAR_12) {
  FUNC_7(VAR_9);
  return (VAR_1);
 }

 FUNC_4(VAR_9, VAR_5, "IOC Page 3 Header: %x %x %x %x\n",
     VAR_10.PageVersion, VAR_10.PageLength, VAR_10.PageNumber, VAR_10.PageType);

 VAR_14 = VAR_10.PageLength * sizeof(uint32_t);
 VAR_9->ioc_page3 = FUNC_0(VAR_14, VAR_6, VAR_7 | VAR_8);
 if (VAR_9->ioc_page3 == ((void*)0)) {
  FUNC_5(VAR_9, "unable to allocate memory for IOC page 3\n");
  FUNC_7(VAR_9);
  return (VAR_2);
 }
 FUNC_1(&VAR_9->ioc_page3->Header, &VAR_10, sizeof(VAR_10));
 VAR_12 = FUNC_10(VAR_9, 0,
     &VAR_9->ioc_page3->Header, VAR_14, VAR_3, 5000);
 if (VAR_12) {
  FUNC_7(VAR_9);
  return (VAR_1);
 }
 FUNC_3(VAR_9->ioc_page3);
 FUNC_8(VAR_9);
 return (0);
}
