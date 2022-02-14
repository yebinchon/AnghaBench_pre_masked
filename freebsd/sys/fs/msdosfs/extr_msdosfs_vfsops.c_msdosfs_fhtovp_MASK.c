
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct msdosfsmount {int dummy; } ;
struct mount {int dummy; } ;
struct fid {int dummy; } ;
struct denode {int de_FileSize; } ;
struct defid {int defid_dirofs; int defid_dirclust; } ;


 struct vnode* FUNC_0 (struct denode*) ;
 struct vnode* VAR_0 ;
 struct msdosfsmount* FUNC_1 (struct mount*) ;
 int VAR_1 ;
 int FUNC_2 (struct msdosfsmount*,int ,int ,struct denode**) ;
 int FUNC_3 (struct vnode*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_2, struct fid *VAR_3, int VAR_4, struct vnode **VAR_5)
{
 struct msdosfsmount *VAR_6 = FUNC_1(VAR_2);
 struct defid *VAR_7 = (struct defid *) VAR_3;
 struct denode *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_7->defid_dirclust, VAR_7->defid_dirofs, &VAR_8);
 if (VAR_9) {
  *VAR_5 = VAR_0;
  return (VAR_9);
 }
 *VAR_5 = FUNC_0(VAR_8);
 FUNC_3(*VAR_5, VAR_8->de_FileSize, VAR_1);
 return (0);
}
