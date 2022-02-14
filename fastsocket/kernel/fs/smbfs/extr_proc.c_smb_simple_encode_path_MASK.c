
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* mnt; } ;
struct smb_request {int rq_bufsize; scalar_t__ rq_buffer; struct smb_sb_info* rq_server; } ;
struct qstr {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_sb_info*,char*,int,struct dentry*,struct qstr*) ;

__attribute__((used)) static int FUNC_1(struct smb_request *VAR_2, char **VAR_3,
      struct dentry * VAR_4, struct qstr * VAR_5)
{
 struct smb_sb_info *VAR_6 = VAR_2->rq_server;
 char *VAR_7 = *VAR_3;
 int VAR_8;
 int VAR_9 = ((char *)VAR_2->rq_buffer + VAR_2->rq_bufsize) - VAR_7;
 int VAR_10 = (VAR_6->mnt->flags & VAR_1);

 if (!VAR_9)
  return -VAR_0;
 *VAR_7++ = 4;





 if (VAR_10) {
  int VAR_11 = VAR_7 - (char *)VAR_2->rq_buffer;
  if (!(VAR_11 & 1)) {
   *VAR_7++ = '\0';
   VAR_9--;
  }
 }

 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_9-1, VAR_4, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 *VAR_3 = VAR_7 + VAR_8;
 return 0;
}
