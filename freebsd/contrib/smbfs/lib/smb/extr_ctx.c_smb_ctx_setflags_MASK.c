
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_flags {int ioc_level; int ioc_mask; int ioc_flags; } ;
struct smb_ctx {int ct_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct smbioc_flags*) ;

int
FUNC_1(struct smb_ctx *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct smbioc_flags VAR_7;

 if (VAR_3->ct_fd == -1)
  return VAR_0;
 VAR_7.ioc_level = VAR_4;
 VAR_7.ioc_mask = VAR_5;
 VAR_7.ioc_flags = VAR_6;
 if (FUNC_0(VAR_3->ct_fd, VAR_1, &VAR_7) == -1)
  return VAR_2;
 return 0;
}
