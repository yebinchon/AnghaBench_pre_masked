
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_header; int rq_flags; } ;
typedef int off_t ;
typedef int __u16 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 struct smb_request* FUNC_3 (struct smb_sb_info*,int ) ;
 int FUNC_4 (struct smb_request*,int ,int,int ) ;
 int FUNC_5 (struct smb_request*) ;
 int FUNC_6 (struct smb_request*,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct smb_sb_info *VAR_6, __u16 VAR_7,
       __u16 VAR_8, off_t VAR_9)
{
 int VAR_10;
 struct smb_request *VAR_11;

 VAR_10 = -VAR_0;
 if (! (VAR_11 = FUNC_3(VAR_6, 0)))
  goto out;

 FUNC_6(VAR_11, VAR_2, 4, 0);
 FUNC_2(VAR_11->rq_header, VAR_3, VAR_7);
 FUNC_2(VAR_11->rq_header, VAR_4, VAR_8);
 FUNC_0(VAR_11->rq_header, VAR_5, VAR_9);
 VAR_11->rq_flags |= VAR_1;

 VAR_10 = FUNC_4(VAR_11, VAR_2, 2, 0);
 if (VAR_10 < 0) {
  VAR_10 = 0;
  goto out_free;
 }

 VAR_10 = FUNC_1(VAR_11->rq_header, VAR_3);
out_free:
 FUNC_5(VAR_11);
out:
 return VAR_10;
}
