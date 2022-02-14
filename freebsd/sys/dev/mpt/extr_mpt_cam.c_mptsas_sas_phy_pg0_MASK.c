
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {void* dev_handle; } ;
struct TYPE_10__ {void* dev_handle; } ;
struct mptsas_phyinfo {TYPE_2__ attached; TYPE_1__ identify; int programmed_link_rate; int hw_link_rate; } ;
struct mpt_softc {int dummy; } ;
struct TYPE_13__ {scalar_t__ ExtPageLength; } ;
struct TYPE_12__ {int AttachedDevHandle; int OwnerDevHandle; int ProgrammedLinkRate; int HwLinkRate; } ;
typedef TYPE_3__ SasPhyPage0_t ;
typedef TYPE_4__ ConfigExtendedPageHeader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 void* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct mpt_softc*,int ,int ,int ,int ,TYPE_4__*,int ,int) ;
 int FUNC_4 (struct mpt_softc*,int ,scalar_t__,TYPE_4__*,TYPE_3__*,int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_8, struct mptsas_phyinfo *VAR_9,
 uint32_t VAR_10, uint32_t VAR_11)
{
 ConfigExtendedPageHeader_t VAR_12;
 SasPhyPage0_t *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_8, VAR_4, 0, 0,
           VAR_3, &VAR_12,
           0, 10000);
 if (VAR_14)
  goto out;
 if (VAR_12.ExtPageLength == 0) {
  VAR_14 = VAR_1;
  goto out;
 }

 VAR_13 = FUNC_2(sizeof(SasPhyPage0_t), VAR_5, VAR_6|VAR_7);
 if (VAR_13 == ((void*)0)) {
  VAR_14 = VAR_0;
  goto out;
 }

 VAR_14 = FUNC_4(VAR_8, VAR_2,
         VAR_10 + VAR_11, &VAR_12, VAR_13,
         sizeof(SasPhyPage0_t), 0, 10000);
 if (VAR_14) {
  FUNC_0(VAR_13, VAR_5);
  goto out;
 }

 VAR_9->hw_link_rate = VAR_13->HwLinkRate;
 VAR_9->programmed_link_rate = VAR_13->ProgrammedLinkRate;
 VAR_9->identify.dev_handle = FUNC_1(VAR_13->OwnerDevHandle);
 VAR_9->attached.dev_handle = FUNC_1(VAR_13->AttachedDevHandle);

 FUNC_0(VAR_13, VAR_5);
out:
 return (VAR_14);
}
