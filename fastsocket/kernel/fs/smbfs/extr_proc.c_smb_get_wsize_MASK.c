
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_xmit; } ;
struct smb_sb_info {TYPE_1__ opt; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct smb_sb_info*,int) ;

int
FUNC_2(struct smb_sb_info *VAR_1)
{

 int VAR_2 = VAR_0 + 14 * sizeof(__u16) + 2 + 1 + 2;
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_0("xmit=%d, size=%d\n", VAR_1->opt.max_xmit, VAR_3);

 return VAR_3;
}
