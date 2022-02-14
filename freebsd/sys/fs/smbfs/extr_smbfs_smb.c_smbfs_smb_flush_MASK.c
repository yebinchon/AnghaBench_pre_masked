
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbnode {int n_flag; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smbnode*,struct smb_cred*) ;

int
FUNC_1(struct smbnode *VAR_1, struct smb_cred *VAR_2)
{
 if (VAR_1->n_flag & VAR_0)
  return (FUNC_0(VAR_1, VAR_2));
 return (0);
}
