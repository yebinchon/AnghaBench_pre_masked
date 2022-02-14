
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_flags; int rq_header; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 struct smb_request* FUNC_2 (struct smb_sb_info*,int ) ;
 int FUNC_3 (struct smb_request*,int ,int ,int ) ;
 int FUNC_4 (struct smb_request*) ;
 int FUNC_5 (struct smb_request*,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct smb_sb_info*,int ) ;

__attribute__((used)) static int
FUNC_7(struct smb_sb_info *VAR_5, __u16 VAR_6, __u32 VAR_7)
{
 struct smb_request *VAR_8;
 int VAR_9 = -VAR_0;

 if (! (VAR_8 = FUNC_2(VAR_5, 0)))
  goto out;

 FUNC_5(VAR_8, VAR_2, 3, 0);
 FUNC_1(VAR_8->rq_header, VAR_3, VAR_6);
 FUNC_0(VAR_8->rq_header, VAR_4, FUNC_6(VAR_5, VAR_7));
 VAR_8->rq_flags |= VAR_1;
 VAR_9 = FUNC_3(VAR_8, VAR_2, 0, 0);

 FUNC_4(VAR_8);
out:
 return VAR_9;
}
