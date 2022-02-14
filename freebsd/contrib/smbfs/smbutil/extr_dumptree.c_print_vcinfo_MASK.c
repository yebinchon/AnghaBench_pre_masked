
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t sv_proto; int sv_maxvcs; int sv_maxmux; int sv_caps; int sv_sm; } ;
struct smb_vc_info {char* srvname; char* vcname; int mode; size_t iodstate; TYPE_1__ sopt; int usecount; int flags; int gid; int uid; } ;


 int VAR_0 ;
 int * VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_1 (int,char*,size_t,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int ) ;
 char* FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct smb_vc_info *VAR_5)
{
 char VAR_6[200];

 FUNC_2("VC: \\\\%s\\%s\n", VAR_5->srvname, VAR_5->vcname);
 FUNC_2("(%s:%s) %o", FUNC_4(VAR_5->uid, 0),
     FUNC_0(VAR_5->gid, 0), VAR_5->mode);
 FUNC_2("\n");
 if (!VAR_4)
  return;
 FUNC_1(4, "state:    %s\n", VAR_2[VAR_5->iodstate]);
 FUNC_1(4, "flags:    0x%04x %s\n", VAR_5->flags,
     FUNC_3(VAR_6, VAR_5->flags, VAR_3));
 FUNC_1(4, "usecount: %d\n", VAR_5->usecount);
 FUNC_1(4, "dialect:  %d (%s)\n", VAR_5->sopt.sv_proto, VAR_1[VAR_5->sopt.sv_proto]);
 FUNC_1(4, "smode:    %d\n", VAR_5->sopt.sv_sm);
 FUNC_1(4, "caps:     0x%04x %s\n", VAR_5->sopt.sv_caps,
     FUNC_3(VAR_6, VAR_5->sopt.sv_caps, VAR_0));
 FUNC_1(4, "maxmux:   %d\n", VAR_5->sopt.sv_maxmux);
 FUNC_1(4, "maxvcs:   %d\n", VAR_5->sopt.sv_maxvcs);
}
