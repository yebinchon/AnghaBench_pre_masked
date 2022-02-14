
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbnode {int dummy; } ;
struct smbfs_fctx {int f_attrmask; char* f_wildcard; int f_wclen; int f_fname; int f_name; } ;
struct smb_cred {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct smbfs_fctx *VAR_0, struct smbnode *VAR_1,
 const char *VAR_2, int VAR_3, int VAR_4, struct smb_cred *VAR_5)
{
 VAR_0->f_attrmask = VAR_4;
 if (VAR_2) {
  if (VAR_3 == 1 && VAR_2[0] == '*') {
   VAR_0->f_wildcard = "*.*";
   VAR_0->f_wclen = 3;
  } else {
   VAR_0->f_wildcard = VAR_2;
   VAR_0->f_wclen = VAR_3;
  }
 } else {
  VAR_0->f_wildcard = ((void*)0);
  VAR_0->f_wclen = 0;
 }
 VAR_0->f_name = VAR_0->f_fname;
 return 0;
}
