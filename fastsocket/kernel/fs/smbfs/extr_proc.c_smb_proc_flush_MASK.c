
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_flags; int rq_header; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct smb_request* FUNC_1 (struct smb_sb_info*,int ) ;
 int FUNC_2 (struct smb_request*,int ,int ,int ) ;
 int FUNC_3 (struct smb_request*) ;
 int FUNC_4 (struct smb_request*,int ,int,int ) ;
 int VAR_3 ;

int
FUNC_5(struct smb_sb_info *VAR_4, __u16 VAR_5)
{
 int VAR_6;
 struct smb_request *VAR_7;

 VAR_6 = -VAR_0;
 if (! (VAR_7 = FUNC_1(VAR_4, 0)))
  goto out;

 FUNC_4(VAR_7, VAR_2, 1, 0);
 FUNC_0(VAR_7->rq_header, VAR_3, VAR_5);
 VAR_7->rq_flags |= VAR_1;
 VAR_6 = FUNC_2(VAR_7, VAR_2, 0, 0);

 FUNC_3(VAR_7);
out:
 return VAR_6;
}
