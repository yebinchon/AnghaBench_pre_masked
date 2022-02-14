
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_share_info {int mode; int usecount; int flags; int gid; int uid; int sname; } ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_0 ;
 char* FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct smb_share_info *VAR_2)
{
 char VAR_3[200];

 FUNC_1(4, "Share:    %s", VAR_2->sname);
 FUNC_2("(%s:%s) %o", FUNC_4(VAR_2->uid, 0),
     FUNC_0(VAR_2->gid, 0), VAR_2->mode);
 FUNC_2("\n");
 if (!VAR_1)
  return;
 FUNC_1(8, "flags:    0x%04x %s\n", VAR_2->flags,
     FUNC_3(VAR_3, VAR_2->flags, VAR_0));
 FUNC_1(8, "usecount: %d\n", VAR_2->usecount);
}
