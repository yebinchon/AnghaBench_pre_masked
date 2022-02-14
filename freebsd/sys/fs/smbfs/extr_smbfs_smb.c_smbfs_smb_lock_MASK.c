
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbnode {TYPE_1__* n_mount; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {struct smb_share* sm_share; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct smbnode*,int,uintptr_t,int ,int ,struct smb_cred*) ;

int
FUNC_3(struct smbnode *VAR_2, int VAR_3, caddr_t VAR_4,
 off_t VAR_5, off_t VAR_6, struct smb_cred *VAR_7)
{
 struct smb_share *VAR_8 = VAR_2->n_mount->sm_share;

 if (FUNC_0(FUNC_1(VAR_8)) < VAR_1)



  return VAR_0;
 else
  return FUNC_2(VAR_2, VAR_3, (uintptr_t)VAR_4, VAR_5, VAR_6, VAR_7);
}
