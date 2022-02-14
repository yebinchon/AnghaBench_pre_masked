
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int multi_channels_cnt; } ;
struct vstor_packet {scalar_t__ operation; scalar_t__ status; TYPE_1__ u; int flags; } ;
struct vmbus_channel {int dummy; } ;
struct hv_storvsc_request {int synch_sema; struct vstor_packet vstor_packet; } ;
struct storvsc_softc {int hs_nchan; int hs_chan; struct hv_storvsc_request hs_init_req; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct hv_storvsc_request*,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct storvsc_softc*,struct vmbus_channel*) ;
 int FUNC_6 (int ,int ,int ,struct vstor_packet*,int ,int ) ;
 struct vmbus_channel** FUNC_7 (int ,int) ;
 int FUNC_8 (struct vmbus_channel**,int) ;

__attribute__((used)) static void
FUNC_9(struct storvsc_softc *VAR_8, int VAR_9)
{
 struct vmbus_channel **VAR_10;
 struct hv_storvsc_request *VAR_11;
 struct vstor_packet *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;


 VAR_13 = FUNC_0(VAR_9, VAR_7 - 1);

 VAR_11 = &VAR_8->hs_init_req;


 FUNC_1(VAR_11, 0, sizeof(struct hv_storvsc_request));

 FUNC_3(&VAR_11->synch_sema, 0, ("stor_synch_sema"));

 VAR_12 = &VAR_11->vstor_packet;

 VAR_12->operation = VAR_4;
 VAR_12->flags = VAR_0;
 VAR_12->u.multi_channels_cnt = VAR_13;

 VAR_14 = FUNC_6(VAR_8->hs_chan,
     VAR_2, VAR_1,
     VAR_12, VAR_5, (uint64_t)(uintptr_t)VAR_11);

 FUNC_4(&VAR_11->synch_sema);

 if (VAR_12->operation != VAR_3 ||
     VAR_12->status != 0) {
  FUNC_2("Storvsc_error: create multi-channel invalid operation "
      "(%d) or statue (%u)\n",
      VAR_12->operation, VAR_12->status);
  return;
 }


 VAR_8->hs_nchan = VAR_13 + 1;


 VAR_10 = FUNC_7(VAR_8->hs_chan, VAR_13);


 for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15)
  FUNC_5(VAR_8, VAR_10[VAR_15]);


 FUNC_8(VAR_10, VAR_13);

 if (VAR_6)
  FUNC_2("Storvsc create multi-channel success!\n");
}
