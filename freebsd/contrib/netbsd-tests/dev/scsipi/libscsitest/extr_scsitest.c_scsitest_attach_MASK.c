
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int adapt_nchannels; int adapt_max_periph; int adapt_openings; int chan_ntargets; int chan_nluns; struct TYPE_3__* chan_adapter; int chan_flags; scalar_t__ chan_id; int * chan_bustype; int adapt_dev; int adapt_minphys; int adapt_request; } ;
struct scsitest {TYPE_1__ sc_channel; TYPE_1__ sc_adapter; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,TYPE_1__*,int ) ;
 struct scsitest* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(device_t VAR_5, device_t VAR_6, void *VAR_7)
{
 struct scsitest *VAR_8 = FUNC_3(VAR_6);

 FUNC_0("\n");
 FUNC_1("\n");

 FUNC_4(&VAR_8->sc_adapter, 0, sizeof(VAR_8->sc_adapter));
 VAR_8->sc_adapter.adapt_nchannels = 1;
 VAR_8->sc_adapter.adapt_request = VAR_4;
 VAR_8->sc_adapter.adapt_minphys = VAR_1;
 VAR_8->sc_adapter.adapt_dev = VAR_6;
 VAR_8->sc_adapter.adapt_max_periph = 1;
 VAR_8->sc_adapter.adapt_openings = 1;

 FUNC_4(&VAR_8->sc_channel, 0, sizeof(VAR_8->sc_channel));
 VAR_8->sc_channel.chan_bustype = &VAR_2;
 VAR_8->sc_channel.chan_ntargets = 2;
 VAR_8->sc_channel.chan_nluns = 1;
 VAR_8->sc_channel.chan_id = 0;
 VAR_8->sc_channel.chan_flags = VAR_0;
 VAR_8->sc_channel.chan_adapter = &VAR_8->sc_adapter;

 FUNC_2(VAR_6, "scsi", &VAR_8->sc_channel, VAR_3);
}
