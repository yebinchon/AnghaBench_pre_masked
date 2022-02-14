
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct smbnode {char* n_rpath; int n_rplen; } ;
struct smbfattr {int dummy; } ;
struct mount {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct smbnode*) ;
 struct smbnode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,struct smbfattr*) ;
 int FUNC_4 (struct mount*,struct vnode*,char*,int,char const*,int,int,struct smbfattr*,struct vnode**) ;

int
FUNC_5(struct mount *VAR_0, struct vnode *VAR_1, const char *VAR_2, int VAR_3,
 struct smbfattr *VAR_4, struct vnode **VAR_5)
{
 struct smbnode *VAR_6, *VAR_7;
 struct vnode *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = (VAR_1) ? FUNC_2(VAR_1) : ((void*)0);
 VAR_10 = 0;
 if (VAR_6 != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_6);
  VAR_9 = FUNC_4(VAR_0, VAR_1, VAR_6->n_rpath, VAR_6->n_rplen,
      VAR_2, VAR_3, VAR_10, VAR_4, &VAR_8);
 } else
  VAR_9 = FUNC_4(VAR_0, ((void*)0), "\\", 1, VAR_2, VAR_3,
      VAR_10, VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;
 FUNC_0(VAR_8 != ((void*)0));
 VAR_7 = FUNC_2(VAR_8);
 if (VAR_4)
  FUNC_3(VAR_8, VAR_4);
 *VAR_5 = VAR_8;
 return 0;
}
