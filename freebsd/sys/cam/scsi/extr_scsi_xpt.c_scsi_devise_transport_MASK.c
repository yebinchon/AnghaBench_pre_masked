
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_inquiry_data {int spi3data; } ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_6__ {scalar_t__ valid; } ;
struct TYPE_8__ {int func_code; } ;
struct ccb_trans_settings {int transport_version; int protocol_version; TYPE_3__ xport_specific; TYPE_2__ proto_specific; int protocol; int transport; int type; TYPE_4__ ccb_h; } ;
struct ccb_pathinq {int protocol_version; int transport_version; int transport; TYPE_4__ ccb_h; } ;
struct cam_path {struct cam_ed* device; TYPE_1__* target; } ;
struct cam_ed {int flags; int protocol_version; int transport_version; int protocol; int transport; struct scsi_inquiry_data inq_data; } ;
struct TYPE_5__ {int ed_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_4 ;
 struct cam_ed* FUNC_1 (int *) ;
 struct cam_ed* FUNC_2 (struct cam_ed*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (TYPE_4__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_5(struct cam_path *VAR_9)
{
 struct ccb_pathinq VAR_10;
 struct ccb_trans_settings VAR_11;
 struct scsi_inquiry_data *VAR_12;


 FUNC_4(&VAR_10.ccb_h, VAR_9, VAR_1);
 VAR_10.ccb_h.func_code = VAR_6;
 FUNC_3((union ccb *)&VAR_10);

 VAR_12 = ((void*)0);
 if ((VAR_9->device->flags & VAR_0) != 0)
  VAR_12 = &VAR_9->device->inq_data;
 VAR_9->device->protocol = VAR_3;
 VAR_9->device->protocol_version =
     VAR_12 != ((void*)0) ? FUNC_0(VAR_12) : VAR_10.protocol_version;
 VAR_9->device->transport = VAR_10.transport;
 VAR_9->device->transport_version = VAR_10.transport_version;





 if (VAR_12 != ((void*)0)) {
  if (VAR_9->device->transport == VAR_5
   && (VAR_12->spi3data & VAR_4) == 0
   && VAR_9->device->transport_version > 2)
   VAR_9->device->transport_version = 2;
 } else {
  struct cam_ed* VAR_13;

  for (VAR_13 = FUNC_1(&VAR_9->target->ed_entries);
       VAR_13 != ((void*)0);
       VAR_13 = FUNC_2(VAR_13, VAR_8)) {
   if (VAR_13 != VAR_9->device)
    break;
  }

  if (VAR_13 != ((void*)0)) {




   VAR_9->device->protocol_version =
       VAR_13->protocol_version;
   VAR_9->device->transport_version =
       VAR_13->transport_version;
  } else {

   VAR_9->device->protocol_version = 2;
   if (VAR_9->device->transport == VAR_5)
    VAR_9->device->transport_version = 2;
   else
    VAR_9->device->transport_version = 0;
  }
 }
 FUNC_4(&VAR_11.ccb_h, VAR_9, VAR_1);
 VAR_11.ccb_h.func_code = VAR_7;
 VAR_11.type = VAR_2;
 VAR_11.transport = VAR_9->device->transport;
 VAR_11.transport_version = VAR_9->device->transport_version;
 VAR_11.protocol = VAR_9->device->protocol;
 VAR_11.protocol_version = VAR_9->device->protocol_version;
 VAR_11.proto_specific.valid = 0;
 VAR_11.xport_specific.valid = 0;
 FUNC_3((union ccb *)&VAR_11);
}
