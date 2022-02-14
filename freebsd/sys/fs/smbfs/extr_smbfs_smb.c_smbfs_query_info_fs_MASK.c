
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int uint32_t ;
struct statfs {int f_bsize; int f_files; int f_ffree; void* f_bavail; void* f_bfree; void* f_blocks; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
struct smb_t2rq {int t2_maxpcount; int t2_maxdcount; struct mdchain t2_rdata; struct mbchain t2_tparam; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct mbchain*) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (struct mdchain*,scalar_t__*) ;
 int FUNC_4 (struct mdchain*,int*) ;
 int FUNC_5 (int ,int ,struct smb_cred*,struct smb_t2rq**) ;
 int FUNC_6 (struct smb_t2rq*) ;
 int FUNC_7 (struct smb_t2rq*) ;

__attribute__((used)) static int
FUNC_8(struct smb_share *VAR_2, struct statfs *VAR_3,
 struct smb_cred *VAR_4)
{
 struct smb_t2rq *VAR_5;
 struct mbchain *VAR_6;
 struct mdchain *VAR_7;
 uint32_t VAR_8, VAR_9;
 int64_t VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(FUNC_0(VAR_2), VAR_1,
     VAR_4, &VAR_5);
 if (VAR_12)
  return (VAR_12);
 VAR_6 = &VAR_5->t2_tparam;
 FUNC_1(VAR_6);
 FUNC_2(VAR_6, VAR_0);
 VAR_5->t2_maxpcount = 2;
 VAR_5->t2_maxdcount = sizeof(int64_t) * 2 + sizeof(uint32_t) * 2;
 VAR_12 = FUNC_7(VAR_5);
 if (VAR_12) {
  FUNC_6(VAR_5);
  return (VAR_12);
 }
 VAR_7 = &VAR_5->t2_rdata;
 FUNC_3(VAR_7, &VAR_10);
 FUNC_3(VAR_7, &VAR_11);
 FUNC_4(VAR_7, &VAR_9);
 FUNC_4(VAR_7, &VAR_8);
 VAR_3->f_bsize = VAR_9 * VAR_8;
 VAR_3->f_blocks= (uint64_t)VAR_10;
 VAR_3->f_bfree = (uint64_t)VAR_11;
 VAR_3->f_bavail= (uint64_t)VAR_11;
 VAR_3->f_files = 0xffff;
 VAR_3->f_ffree = 0xffff;
 FUNC_6(VAR_5);
 return (0);
}
