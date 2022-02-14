
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_cmd_resp {int response; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static cam_status
FUNC_0(struct virtio_scsi_cmd_resp *VAR_8)
{
 cam_status VAR_9;

 switch (VAR_8->response) {
 case 132:
  VAR_9 = VAR_2;
  break;
 case 131:
  VAR_9 = VAR_0;
  break;
 case 136:
  VAR_9 = VAR_1;
  break;
 case 135:
  VAR_9 = VAR_7;
  break;
 case 130:
  VAR_9 = VAR_5;
  break;
 case 134:
  VAR_9 = VAR_4;
  break;
 case 128:
 case 129:
 case 133:
  VAR_9 = VAR_6;
  break;
 default:
  VAR_9 = VAR_3;
  break;
 }

 return (VAR_9);
}
