
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_inquiry_data {int dummy; } ;
struct TYPE_10__ {int atapi; int valid; } ;
struct TYPE_9__ {int atapi; int valid; } ;
struct TYPE_11__ {scalar_t__ valid; TYPE_4__ sata; TYPE_3__ ata; } ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_12__ {int func_code; } ;
struct ccb_trans_settings {scalar_t__ protocol; void* protocol_version; TYPE_5__ xport_specific; TYPE_1__ proto_specific; void* transport_version; int transport; int type; TYPE_6__ ccb_h; } ;
struct ccb_pathinq {void* protocol_version; void* transport_version; int transport; } ;
struct cam_path {TYPE_2__* device; } ;
struct ata_params {int config; int version_major; } ;
struct TYPE_8__ {int flags; scalar_t__ protocol; void* protocol_version; int transport; void* transport_version; struct ata_params ident_data; struct scsi_inquiry_data inq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_4 (TYPE_6__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_5(struct cam_path *VAR_14)
{
 struct ccb_pathinq VAR_15;
 struct ccb_trans_settings VAR_16;
 struct scsi_inquiry_data *VAR_17 = ((void*)0);
 struct ata_params *VAR_18 = ((void*)0);


 FUNC_3(&VAR_15, VAR_14);

 VAR_14->device->transport = VAR_15.transport;
 if ((VAR_14->device->flags & VAR_5) != 0)
  VAR_17 = &VAR_14->device->inq_data;
 if ((VAR_14->device->flags & VAR_4) != 0)
  VAR_18 = &VAR_14->device->ident_data;
 if (VAR_14->device->protocol == VAR_10) {
  VAR_14->device->protocol_version = VAR_18 ?
      FUNC_1(VAR_18->version_major) : VAR_15.protocol_version;
 } else if (VAR_14->device->protocol == VAR_11) {
  VAR_14->device->protocol_version = VAR_17 ?
      FUNC_0(VAR_17) : VAR_15.protocol_version;
 }
 VAR_14->device->transport_version = VAR_18 ?
     FUNC_1(VAR_18->version_major) : VAR_15.transport_version;


 FUNC_4(&VAR_16.ccb_h, VAR_14, VAR_6);
 VAR_16.ccb_h.func_code = VAR_13;
 VAR_16.type = VAR_9;
 VAR_16.transport = VAR_14->device->transport;
 VAR_16.transport_version = VAR_14->device->transport_version;
 VAR_16.protocol = VAR_14->device->protocol;
 VAR_16.protocol_version = VAR_14->device->protocol_version;
 VAR_16.proto_specific.valid = 0;
 if (VAR_18) {
  if (VAR_14->device->transport == VAR_12) {
   VAR_16.xport_specific.ata.atapi =
       (VAR_18->config == VAR_2) ? 0 :
       ((VAR_18->config & VAR_3) == VAR_1) ? 16 :
       ((VAR_18->config & VAR_3) == VAR_0) ? 12 : 0;
   VAR_16.xport_specific.ata.valid = VAR_7;
  } else {
   VAR_16.xport_specific.sata.atapi =
       (VAR_18->config == VAR_2) ? 0 :
       ((VAR_18->config & VAR_3) == VAR_1) ? 16 :
       ((VAR_18->config & VAR_3) == VAR_0) ? 12 : 0;
   VAR_16.xport_specific.sata.valid = VAR_8;
  }
 } else
  VAR_16.xport_specific.valid = 0;
 FUNC_2((union ccb *)&VAR_16);
}
