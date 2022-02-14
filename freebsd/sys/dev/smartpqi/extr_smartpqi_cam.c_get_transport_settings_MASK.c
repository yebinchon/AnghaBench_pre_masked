
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pqisrc_softstate {int dummy; } ;
struct ccb_trans_settings_spi {int flags; int valid; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct ccb_trans_settings_sas {int valid; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {struct ccb_trans_settings_spi spi; struct ccb_trans_settings_sas sas; } ;
struct TYPE_4__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {int transport_version; TYPE_3__ ccb_h; int transport; int protocol_version; int protocol; TYPE_2__ xport_specific; TYPE_1__ proto_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct pqisrc_softstate *VAR_9,
  struct ccb_trans_settings *VAR_10)
{
 struct ccb_trans_settings_scsi *VAR_11 = &VAR_10->proto_specific.scsi;
 struct ccb_trans_settings_sas *VAR_12 = &VAR_10->xport_specific.sas;
 struct ccb_trans_settings_spi *VAR_13 = &VAR_10->xport_specific.spi;

 FUNC_0("IN\n");

 VAR_10->protocol = VAR_6;
 VAR_10->protocol_version = VAR_7;
 VAR_10->transport = VAR_8;
 VAR_10->transport_version = 2;
 VAR_13->valid = VAR_5;
 VAR_13->flags = VAR_4;
 VAR_11->valid = VAR_3;
 VAR_11->flags = VAR_2;
 VAR_12->valid = VAR_1;
 VAR_10->ccb_h.status = VAR_0;

 FUNC_0("OUT\n");
}
