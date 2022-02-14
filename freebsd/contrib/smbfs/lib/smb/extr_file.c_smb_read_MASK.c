
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_rw {char* ioc_base; size_t ioc_cnt; int ioc_offset; int ioc_fh; } ;
struct smb_ctx {int ct_fd; } ;
typedef int smbfh ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct smbioc_rw*) ;

int
FUNC_1(struct smb_ctx *VAR_1, smbfh VAR_2, off_t VAR_3, size_t VAR_4, char *VAR_5)
{
 struct smbioc_rw VAR_6;

 VAR_6.ioc_fh = VAR_2;
 VAR_6.ioc_base = VAR_5;
 VAR_6.ioc_cnt = VAR_4;
 VAR_6.ioc_offset = VAR_3;
 if (FUNC_0(VAR_1->ct_fd, VAR_0, &VAR_6) == -1)
  return -1;
 return VAR_6.ioc_cnt;
}
