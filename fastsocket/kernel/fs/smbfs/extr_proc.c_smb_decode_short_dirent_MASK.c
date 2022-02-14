
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int case_handling; } ;
struct smb_sb_info {int local_nls; int remote_nls; TYPE_3__* ops; TYPE_2__ opt; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct smb_fattr {char attr; TYPE_1__ f_mtime; TYPE_1__ f_atime; TYPE_1__ f_ctime; int f_size; scalar_t__ f_ino; } ;
struct qstr {char* name; int len; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int (* convert ) (unsigned char*,int ,char*,int,int ,int ) ;} ;


 int FUNC_0 (char*,int,int,unsigned char*) ;
 int FUNC_1 (char*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct smb_sb_info*,int ,int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (struct smb_sb_info*,struct smb_fattr*) ;
 int FUNC_5 (struct smb_sb_info*,struct smb_fattr*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (unsigned char*,int ,char*,int,int ,int ) ;

__attribute__((used)) static char *
FUNC_10(struct smb_sb_info *VAR_3, char *VAR_4,
   struct qstr *VAR_5, struct smb_fattr *VAR_6,
   unsigned char *VAR_7)
{
 int VAR_8;




 FUNC_5(VAR_3, VAR_6);
 VAR_6->f_ino = 0;

 VAR_4 += VAR_1;
 VAR_6->attr = *VAR_4;
 VAR_6->f_mtime.tv_sec = FUNC_3(VAR_3, FUNC_2(VAR_4, 3), FUNC_2(VAR_4, 1));
 VAR_6->f_mtime.tv_nsec = 0;
 VAR_6->f_size = FUNC_1(VAR_4, 5);
 VAR_6->f_ctime = VAR_6->f_mtime;
 VAR_6->f_atime = VAR_6->f_mtime;
 VAR_5->name = VAR_4 + 9;
 VAR_8 = FUNC_8(VAR_5->name, 12);




 while (VAR_8 > 2 && VAR_5->name[VAR_8-1] == ' ')
  VAR_8--;

 FUNC_4(VAR_3, VAR_6);
 VAR_5->len = 0;
 VAR_8 = VAR_3->ops->convert(VAR_7, VAR_0,
       VAR_5->name, VAR_8,
       VAR_3->remote_nls, VAR_3->local_nls);
 if (VAR_8 > 0) {
  VAR_5->len = VAR_8;
  VAR_5->name = VAR_7;
  FUNC_0("len=%d, name=%.*s\n",VAR_5->len,VAR_5->len,VAR_5->name);
 }

 return VAR_4 + 22;
}
