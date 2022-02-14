
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_6__ {scalar_t__ valid; } ;
struct TYPE_8__ {int func_code; } ;
struct ccb_trans_settings {TYPE_3__ xport_specific; TYPE_2__ proto_specific; int protocol_version; int protocol; int transport_version; int transport; int type; TYPE_4__ ccb_h; } ;
struct ccb_pathinq {int protocol_version; int protocol; int transport_version; int transport; } ;
struct cam_path {TYPE_1__* device; } ;
struct TYPE_5__ {int protocol_version; int protocol; int transport_version; int transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union ccb*) ;
 int FUNC_1 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_2 (TYPE_4__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_3(struct cam_path *VAR_3)
{
 struct ccb_pathinq VAR_4;
 struct ccb_trans_settings VAR_5;



 FUNC_1(&VAR_4, VAR_3);

 VAR_3->device->transport = VAR_4.transport;
 VAR_3->device->transport_version = VAR_4.transport_version;

 VAR_3->device->protocol = VAR_4.protocol;
 VAR_3->device->protocol_version = VAR_4.protocol_version;


 FUNC_2(&VAR_5.ccb_h, VAR_3, VAR_0);
 VAR_5.ccb_h.func_code = VAR_2;
 VAR_5.type = VAR_1;
 VAR_5.transport = VAR_3->device->transport;
 VAR_5.transport_version = VAR_3->device->transport_version;
 VAR_5.protocol = VAR_3->device->protocol;
 VAR_5.protocol_version = VAR_3->device->protocol_version;
 VAR_5.proto_specific.valid = 0;
 VAR_5.xport_specific.valid = 0;
 FUNC_0((union ccb *)&VAR_5);
}
