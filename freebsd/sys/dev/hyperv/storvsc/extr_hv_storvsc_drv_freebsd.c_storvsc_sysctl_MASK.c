
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int * chan_send_cnt; int data_sg_cnt; int data_vaddr_cnt; int data_bio_cnt; } ;
struct storvsc_softc {int hs_nchan; TYPE_1__ sysctl_data; int * hs_sel_chan; } ;
typedef int name ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct storvsc_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_4)
{
 struct sysctl_oid_list *VAR_5;
 struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid *VAR_7, *VAR_8;
 struct storvsc_softc *VAR_9;
 char VAR_10[16];
 int VAR_11;

 VAR_9 = FUNC_3(VAR_4);
 VAR_6 = FUNC_4(VAR_4);
 VAR_5 = FUNC_2(FUNC_5(VAR_4));

 FUNC_1(VAR_6, VAR_5, VAR_3, "data_bio_cnt", VAR_2,
  &VAR_9->sysctl_data.data_bio_cnt, "# of bio data block");
 FUNC_1(VAR_6, VAR_5, VAR_3, "data_vaddr_cnt", VAR_2,
  &VAR_9->sysctl_data.data_vaddr_cnt, "# of vaddr data block");
 FUNC_1(VAR_6, VAR_5, VAR_3, "data_sg_cnt", VAR_2,
  &VAR_9->sysctl_data.data_sg_cnt, "# of sg data block");


 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_3, "channel",
  VAR_1 | VAR_0, 0, "");
 if (VAR_7 == ((void*)0))
  return;

 for (VAR_11 = 0; VAR_11 < VAR_9->hs_nchan; VAR_11++) {
  uint32_t VAR_12;

  VAR_12 = FUNC_7(VAR_9->hs_sel_chan[VAR_11]);
  FUNC_6(VAR_10, sizeof(VAR_10), "%d", VAR_12);

  VAR_8 = FUNC_0(VAR_6, FUNC_2(VAR_7),
   VAR_3, VAR_10, VAR_1 | VAR_0, 0, "");
  if (VAR_8 == ((void*)0))
   return;

  FUNC_1(VAR_6, FUNC_2(VAR_8), VAR_3,
   "send_req", VAR_1, &VAR_9->sysctl_data.chan_send_cnt[VAR_11],
   "# of request sending from this channel");
 }
}
