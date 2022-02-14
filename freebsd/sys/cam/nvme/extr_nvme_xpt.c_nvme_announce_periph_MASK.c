
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct sbuf {int dummy; } ;
struct ccb_trans_settings_nvme {int valid; int max_speed; int speed; int max_lanes; int lanes; int spec; } ;
struct TYPE_3__ {struct ccb_trans_settings_nvme nvme; } ;
struct TYPE_4__ {int status; int func_code; } ;
struct ccb_trans_settings {TYPE_1__ xport_specific; TYPE_2__ ccb_h; int type; } ;
struct ccb_pathinq {int dummy; } ;
struct cam_periph {int unit_number; int periph_name; struct cam_path* path; } ;
struct cam_path {int dummy; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cam_periph*,int ) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,int,int ) ;
 int FUNC_5 (struct sbuf*,char*,...) ;
 int FUNC_6 (struct sbuf*) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_9 (TYPE_2__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_10(struct cam_periph *VAR_8)
{
 struct ccb_pathinq VAR_9;
 struct ccb_trans_settings VAR_10;
 struct cam_path *VAR_11 = VAR_8->path;
 struct ccb_trans_settings_nvme *VAR_12;
 struct sbuf VAR_13;
 char VAR_14[120];

 FUNC_2(VAR_8, VAR_5);


 FUNC_9(&VAR_10.ccb_h, VAR_11, VAR_0);
 VAR_10.ccb_h.func_code = VAR_7;
 VAR_10.type = VAR_4;
 FUNC_7((union ccb*)&VAR_10);
 if ((VAR_10.ccb_h.status & VAR_2) != VAR_1)
  return;
 VAR_12 = &VAR_10.xport_specific.nvme;


 FUNC_8(&VAR_9, VAR_8->path);
 FUNC_4(&VAR_13, VAR_14, sizeof(VAR_14), VAR_6);
 FUNC_5(&VAR_13, "%s%d: nvme version %d.%d",
     VAR_8->periph_name, VAR_8->unit_number,
     FUNC_0(VAR_12->spec),
     FUNC_1(VAR_12->spec));
 if (VAR_12->valid & VAR_3)
  FUNC_5(&VAR_13, " x%d (max x%d) lanes PCIe Gen%d (max Gen%d) link",
      VAR_12->lanes, VAR_12->max_lanes,
      VAR_12->speed, VAR_12->max_speed);
 FUNC_5(&VAR_13, "\n");
 FUNC_3(&VAR_13);
 FUNC_6(&VAR_13);
}
