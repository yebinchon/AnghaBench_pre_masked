
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct smb_sb_info {int dummy; } ;
struct smb_request {int* rq_header; int rq_iovlen; int rq_flags; TYPE_1__* rq_iov; } ;
struct inode {int i_ino; } ;
typedef int loff_t ;
struct TYPE_4__ {int fileid; } ;
struct TYPE_3__ {int* iov_base; int iov_len; } ;


 int FUNC_0 (int*,int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int,int,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int*,int) ;
 struct smb_sb_info* FUNC_5 (struct inode*) ;
 struct smb_request* FUNC_6 (struct smb_sb_info*,int ) ;
 int FUNC_7 (struct smb_request*,int ,int,int ) ;
 int FUNC_8 (struct smb_request*) ;
 int FUNC_9 (struct smb_request*,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_7, loff_t VAR_8, int VAR_9, const char *VAR_10)
{
 struct smb_sb_info *VAR_11 = FUNC_5(VAR_7);
 int VAR_12;
 u16 VAR_13 = FUNC_1(VAR_7)->fileid;
 u8 VAR_14[4];
 struct smb_request *VAR_15;

 VAR_12 = -VAR_0;
 if (! (VAR_15 = FUNC_6(VAR_11, 0)))
  goto out;

 FUNC_2("ino=%ld, fileid=%d, count=%d@%Ld\n",
  VAR_7->i_ino, VAR_13, VAR_9, VAR_8);

 FUNC_9(VAR_15, VAR_2, 5, VAR_9 + 3);
 FUNC_3(VAR_15->rq_header, VAR_3, VAR_13);
 FUNC_3(VAR_15->rq_header, VAR_4, VAR_9);
 FUNC_0(VAR_15->rq_header, VAR_5, VAR_8);
 FUNC_3(VAR_15->rq_header, VAR_6, 0);

 VAR_14[0] = 1;
 FUNC_3(VAR_14, 1, VAR_9);
 VAR_15->rq_iov[1].iov_base = VAR_14;
 VAR_15->rq_iov[1].iov_len = 3;
 VAR_15->rq_iov[2].iov_base = (char *) VAR_10;
 VAR_15->rq_iov[2].iov_len = VAR_9;
 VAR_15->rq_iovlen = 3;
 VAR_15->rq_flags |= VAR_1;

 VAR_12 = FUNC_7(VAR_15, VAR_2, 1, 0);
 if (VAR_12 >= 0)
  VAR_12 = FUNC_4(VAR_15->rq_header, VAR_3);

 FUNC_8(VAR_15);
out:
 return VAR_12;
}
