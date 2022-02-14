
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {int status; int func_code; } ;
struct ccb_en_lun {int grp6_len; int grp7_len; int enable; TYPE_1__ ccb_h; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ccb*) ;
 int FUNC_1 (struct cam_path*,char*,char*,int) ;
 int FUNC_2 (TYPE_1__*,struct cam_path*,int ) ;

__attribute__((used)) static cam_status
FUNC_3(struct cam_path *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct ccb_en_lun VAR_8;
 cam_status VAR_9;


 FUNC_2(&VAR_8.ccb_h, VAR_4, VAR_0);
 VAR_8.ccb_h.func_code = VAR_3;

 VAR_8.grp6_len = VAR_6;
 VAR_8.grp7_len = VAR_7;
 VAR_8.enable = VAR_5 ? 1 : 0;
 FUNC_0((union ccb *)&VAR_8);
 VAR_9 = VAR_8.ccb_h.status & VAR_2;
 if (VAR_9 != VAR_1) {
  FUNC_1(VAR_4, "%sable lun CCB rejected, status %#x\n",
      VAR_5 ? "en" : "dis", VAR_9);
 }
 return (VAR_9);
}
