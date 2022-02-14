
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; int v_type; } ;
struct mount {int mnt_flag; struct fdescmount* mnt_data; int mnt_optnew; } ;
struct fdescmount {struct vnode* f_root; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vnode*,int ) ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int ,struct mount*,struct vnode**) ;
 int FUNC_2 (struct fdescmount*,int ) ;
 struct fdescmount* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct mount*) ;
 scalar_t__ FUNC_5 (int ,char*,int *,int *) ;
 int FUNC_6 (struct mount*,char*) ;

__attribute__((used)) static int
FUNC_7(struct mount *VAR_10)
{
 struct fdescmount *VAR_11;
 struct vnode *VAR_12;
 int VAR_13;




 if (VAR_10->mnt_flag & (VAR_5 | VAR_4))
  return (VAR_0);

 VAR_11 = FUNC_3(sizeof(struct fdescmount),
    VAR_6, VAR_7);





 VAR_10->mnt_data = VAR_11;
 VAR_11->flags = 0;
 if (FUNC_5(VAR_10->mnt_optnew, "linrdlnk", ((void*)0), ((void*)0)) == 0)
  VAR_11->flags |= VAR_2;
 VAR_13 = FUNC_1(VAR_3, -1, VAR_1, VAR_10, &VAR_12);
 if (VAR_13) {
  FUNC_2(VAR_11, VAR_6);
  VAR_10->mnt_data = ((void*)0);
  return (VAR_13);
 }
 VAR_12->v_type = VAR_8;
 VAR_12->v_vflag |= VAR_9;
 VAR_11->f_root = VAR_12;
 FUNC_0(VAR_12, 0);


 FUNC_4(VAR_10);

 FUNC_6(VAR_10, "fdescfs");
 return (0);
}
