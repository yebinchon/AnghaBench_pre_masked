
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbnode {int dummy; } ;
struct smbfs_fctx {int f_attrmask; char const* f_wildcard; int f_wclen; int f_ssp; int f_infolevel; void* f_name; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct smbfs_fctx *VAR_6, struct smbnode *VAR_7,
 const char *VAR_8, int VAR_9, int VAR_10, struct smb_cred *VAR_11)
{
 if (FUNC_1(FUNC_2(VAR_6->f_ssp))) {
  VAR_6->f_name = FUNC_3(VAR_5 * 2, VAR_0, VAR_1);
 } else
  VAR_6->f_name = FUNC_3(VAR_5, VAR_0, VAR_1);
 VAR_6->f_infolevel = FUNC_0(FUNC_2(VAR_6->f_ssp)) < VAR_2 ?
     VAR_4 : VAR_3;
 VAR_6->f_attrmask = VAR_10;
 VAR_6->f_wildcard = VAR_8;
 VAR_6->f_wclen = VAR_9;
 return 0;
}
