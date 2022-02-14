
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int txbr; } ;
struct TYPE_5__ {int rxbr; } ;
struct sysctl_ctx_list {int dummy; } ;
struct vmbus_channel {int ch_id; int ch_subidx; int ch_cpuid; TYPE_3__ ch_txbr; TYPE_2__ ch_rxbr; TYPE_1__* ch_prichan; int ch_dev; struct sysctl_ctx_list ch_sysctl_ctx; } ;
struct sysctl_oid {int dummy; } ;
typedef int name ;
struct TYPE_4__ {int ch_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct vmbus_channel*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int*,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 scalar_t__ FUNC_4 (struct vmbus_channel*) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (struct sysctl_ctx_list*) ;
 int FUNC_8 (struct sysctl_ctx_list*,struct sysctl_oid*,int *,char*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct vmbus_channel *VAR_5)
{
 struct sysctl_oid *VAR_6, *VAR_7, *VAR_8;
 struct sysctl_ctx_list *VAR_9;
 uint32_t VAR_10;
 char VAR_11[16];







 VAR_9 = &VAR_5->ch_sysctl_ctx;
 FUNC_7(VAR_9);




 VAR_6 = FUNC_0(VAR_9,
     FUNC_3(FUNC_5(VAR_5->ch_dev)),
     VAR_3, "channel", VAR_1 | VAR_0, 0, "");
 if (VAR_6 == ((void*)0))
  return;




 if (FUNC_4(VAR_5))
  VAR_10 = VAR_5->ch_id;
 else
  VAR_10 = VAR_5->ch_prichan->ch_id;
 FUNC_6(VAR_11, sizeof(VAR_11), "%d", VAR_10);
 VAR_7 = FUNC_0(VAR_9, FUNC_3(VAR_6),
     VAR_3, VAR_11, VAR_1 | VAR_0, 0, "");
 if (VAR_7 == ((void*)0))
  return;

 if (!FUNC_4(VAR_5)) {



  VAR_6 = FUNC_0(VAR_9, FUNC_3(VAR_7),
      VAR_3, "sub", VAR_1 | VAR_0, 0, "");
  if (VAR_6 == ((void*)0))
   return;







  FUNC_6(VAR_11, sizeof(VAR_11), "%d", VAR_5->ch_subidx);
  VAR_7 = FUNC_0(VAR_9, FUNC_3(VAR_6),
      VAR_3, VAR_11, VAR_1 | VAR_0, 0, "");
  if (VAR_7 == ((void*)0))
   return;

  FUNC_2(VAR_9, FUNC_3(VAR_7), VAR_3,
      "chanid", VAR_1, &VAR_5->ch_id, 0, "channel id");
 }

 FUNC_2(VAR_9, FUNC_3(VAR_7), VAR_3,
     "cpu", VAR_1, &VAR_5->ch_cpuid, 0, "owner CPU id");
 FUNC_1(VAR_9, FUNC_3(VAR_7), VAR_3,
     "mnf", VAR_2 | VAR_1 | VAR_0,
     VAR_5, 0, VAR_4, "I",
     "has monitor notification facilities");

 VAR_8 = FUNC_0(VAR_9, FUNC_3(VAR_7), VAR_3,
     "br", VAR_1 | VAR_0, 0, "");
 if (VAR_8 != ((void*)0)) {



  FUNC_8(VAR_9, VAR_8, &VAR_5->ch_rxbr.rxbr, "rx");



  FUNC_8(VAR_9, VAR_8, &VAR_5->ch_txbr.txbr, "tx");
 }
}
