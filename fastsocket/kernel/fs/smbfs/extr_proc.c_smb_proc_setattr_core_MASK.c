
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_bufsize; scalar_t__ rq_buffer; int rq_header; } ;
struct dentry {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 struct smb_request* FUNC_2 (struct smb_sb_info*,int ) ;
 int FUNC_3 (struct smb_request*,int ,int ,int ) ;
 int FUNC_4 (struct smb_request*) ;
 int FUNC_5 (struct smb_request*,char*) ;
 char* FUNC_6 (struct smb_request*,int ,int,int ) ;
 int FUNC_7 (struct smb_request*,char**,struct dentry*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_8(struct smb_sb_info *VAR_11, struct dentry *VAR_12,
        __u16 VAR_13)
{
 char *VAR_14;
 int VAR_15;
 struct smb_request *VAR_16;

 VAR_15 = -VAR_1;
 if (! (VAR_16 = FUNC_2(VAR_11, VAR_2)))
  goto out;

 VAR_14 = FUNC_6(VAR_16, VAR_3, 8, 0);
 FUNC_1(VAR_16->rq_header, VAR_4, VAR_13);
 FUNC_0(VAR_16->rq_header, VAR_5, 0);
 FUNC_1(VAR_16->rq_header, VAR_6, 0);
 FUNC_1(VAR_16->rq_header, VAR_7, 0);
 FUNC_1(VAR_16->rq_header, VAR_8, 0);
 FUNC_1(VAR_16->rq_header, VAR_9, 0);
 FUNC_1(VAR_16->rq_header, VAR_10, 0);
 VAR_15 = FUNC_7(VAR_16, &VAR_14, VAR_12, ((void*)0));
 if (VAR_15 < 0)
  goto out_free;
 if (VAR_14 + 2 > (char *)VAR_16->rq_buffer + VAR_16->rq_bufsize) {
  VAR_15 = -VAR_0;
  goto out_free;
 }
 *VAR_14++ = 4;
 *VAR_14++ = 0;
 FUNC_5(VAR_16, VAR_14);

 VAR_15 = FUNC_3(VAR_16, VAR_3, 0, 0);
 if (VAR_15 < 0)
  goto out_free;
 VAR_15 = 0;

out_free:
 FUNC_4(VAR_16);
out:
 return VAR_15;
}
