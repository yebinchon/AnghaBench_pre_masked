
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct smbnode {int n_size; int n_attrage; int n_dosattr; int n_mtime; } ;
struct smbfattr {int fa_size; int fa_attr; int fa_mtime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smbnode* FUNC_0 (struct vnode*) ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*,int) ;

void
FUNC_2(struct vnode *VAR_3, struct smbfattr *VAR_4)
{
 struct smbnode *VAR_5 = FUNC_0(VAR_3);

 if (VAR_3->v_type == VAR_1) {
  if (VAR_5->n_size != VAR_4->fa_size) {
   VAR_5->n_size = VAR_4->fa_size;
   FUNC_1(VAR_3, VAR_5->n_size);
  }
 } else if (VAR_3->v_type == VAR_0) {
  VAR_5->n_size = 16384;
 } else
  return;
 VAR_5->n_mtime = VAR_4->fa_mtime;
 VAR_5->n_dosattr = VAR_4->fa_attr;
 VAR_5->n_attrage = VAR_2;
 return;
}
