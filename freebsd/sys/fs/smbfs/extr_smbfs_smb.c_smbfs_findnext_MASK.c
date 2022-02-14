
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_5__ {int fa_ino; } ;
struct smbfs_fctx {int f_flags; int f_nmlen; char* f_name; TYPE_3__* f_dnp; TYPE_2__ f_attr; int f_ssp; struct smb_cred* f_scred; } ;
struct smb_cred {int dummy; } ;
struct TYPE_6__ {TYPE_1__* n_mount; } ;
struct TYPE_4__ {int sm_caseopt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct smbfs_fctx*,int) ;
 int FUNC_5 (struct smbfs_fctx*,int) ;
 int FUNC_6 (int ,char*,int*,int ) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;

int
FUNC_8(struct smbfs_fctx *VAR_1, int VAR_2, struct smb_cred *VAR_3)
{
 int VAR_4;

 if (VAR_2 == 0)
  VAR_2 = 1000000;
 else if (VAR_2 > 1)
  VAR_2 *= 4;
 VAR_1->f_scred = VAR_3;
 for (;;) {
  if (VAR_1->f_flags & VAR_0) {
   VAR_4 = FUNC_4(VAR_1, VAR_2);
  } else
   VAR_4 = FUNC_5(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
  if (FUNC_0(FUNC_1(VAR_1->f_ssp))) {
   if ((VAR_1->f_nmlen == 2 &&
        *(u_int16_t *)VAR_1->f_name == FUNC_2(0x002e)) ||
       (VAR_1->f_nmlen == 4 &&
        *(u_int32_t *)VAR_1->f_name == FUNC_3(0x002e002e)))
    continue;
  } else
   if ((VAR_1->f_nmlen == 1 && VAR_1->f_name[0] == '.') ||
       (VAR_1->f_nmlen == 2 && VAR_1->f_name[0] == '.' &&
        VAR_1->f_name[1] == '.'))
    continue;
  break;
 }
 FUNC_6(FUNC_1(VAR_1->f_ssp), VAR_1->f_name, &VAR_1->f_nmlen,
       VAR_1->f_dnp->n_mount->sm_caseopt);
 VAR_1->f_attr.fa_ino = FUNC_7(VAR_1->f_dnp, VAR_1->f_name, VAR_1->f_nmlen);
 return 0;
}
