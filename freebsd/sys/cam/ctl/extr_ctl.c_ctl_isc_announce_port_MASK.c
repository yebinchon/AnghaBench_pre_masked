
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int lun_map_len; int port_devid_len; int target_devid_len; int init_devid_len; int * data; scalar_t__ name_len; int status; int virtual_port; int physical_port; int port_type; } ;
struct TYPE_8__ {scalar_t__ targ_port; } ;
struct TYPE_9__ {TYPE_1__ nexus; int msg_type; } ;
union ctl_ha_msg {TYPE_6__ port; TYPE_2__ hdr; } ;
typedef int uint32_t ;
struct ctl_softc {scalar_t__ port_min; scalar_t__ port_max; scalar_t__ ha_link; int ha_id; } ;
struct ctl_port {scalar_t__ targ_port; char* port_name; int lun_map_size; TYPE_5__* init_devid; TYPE_4__* target_devid; TYPE_3__* port_devid; int lun_map; int status; int virtual_port; int physical_port; int port_type; struct ctl_softc* ctl_softc; } ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_11__ {int len; int data; } ;
struct TYPE_10__ {int len; int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (int ,TYPE_6__*,int,int ) ;
 int FUNC_2 (union ctl_ha_msg*,int ) ;
 union ctl_ha_msg* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,char*,int,char*) ;
 int FUNC_6 (char*) ;

void
FUNC_7(struct ctl_port *VAR_5)
{
 struct ctl_softc *VAR_6 = VAR_5->ctl_softc;
 union ctl_ha_msg *VAR_7;
 int VAR_8;

 if (VAR_5->targ_port < VAR_6->port_min ||
     VAR_5->targ_port >= VAR_6->port_max ||
     VAR_6->ha_link != VAR_1)
  return;
 VAR_8 = sizeof(VAR_7->port) + FUNC_6(VAR_5->port_name) + 1;
 if (VAR_5->lun_map)
  VAR_8 += VAR_5->lun_map_size * sizeof(uint32_t);
 if (VAR_5->port_devid)
  VAR_8 += VAR_5->port_devid->len;
 if (VAR_5->target_devid)
  VAR_8 += VAR_5->target_devid->len;
 if (VAR_5->init_devid)
  VAR_8 += VAR_5->init_devid->len;
 VAR_7 = FUNC_3(VAR_8, VAR_3, VAR_4);
 FUNC_0(&VAR_7->port, sizeof(VAR_7->port));
 VAR_7->hdr.msg_type = VAR_2;
 VAR_7->hdr.nexus.targ_port = VAR_5->targ_port;
 VAR_7->port.port_type = VAR_5->port_type;
 VAR_7->port.physical_port = VAR_5->physical_port;
 VAR_7->port.virtual_port = VAR_5->virtual_port;
 VAR_7->port.status = VAR_5->status;
 VAR_8 = 0;
 VAR_7->port.name_len = FUNC_5(&VAR_7->port.data[VAR_8],
     "%d:%s", VAR_6->ha_id, VAR_5->port_name) + 1;
 VAR_8 += VAR_7->port.name_len;
 if (VAR_5->lun_map) {
  VAR_7->port.lun_map_len = VAR_5->lun_map_size * sizeof(uint32_t);
  FUNC_4(&VAR_7->port.data[VAR_8], VAR_5->lun_map,
      VAR_7->port.lun_map_len);
  VAR_8 += VAR_7->port.lun_map_len;
 }
 if (VAR_5->port_devid) {
  VAR_7->port.port_devid_len = VAR_5->port_devid->len;
  FUNC_4(&VAR_7->port.data[VAR_8], VAR_5->port_devid->data,
      VAR_7->port.port_devid_len);
  VAR_8 += VAR_7->port.port_devid_len;
 }
 if (VAR_5->target_devid) {
  VAR_7->port.target_devid_len = VAR_5->target_devid->len;
  FUNC_4(&VAR_7->port.data[VAR_8], VAR_5->target_devid->data,
      VAR_7->port.target_devid_len);
  VAR_8 += VAR_7->port.target_devid_len;
 }
 if (VAR_5->init_devid) {
  VAR_7->port.init_devid_len = VAR_5->init_devid->len;
  FUNC_4(&VAR_7->port.data[VAR_8], VAR_5->init_devid->data,
      VAR_7->port.init_devid_len);
  VAR_8 += VAR_7->port.init_devid_len;
 }
 FUNC_1(VAR_0, &VAR_7->port, sizeof(VAR_7->port) + VAR_8,
     VAR_4);
 FUNC_2(VAR_7, VAR_3);
}
