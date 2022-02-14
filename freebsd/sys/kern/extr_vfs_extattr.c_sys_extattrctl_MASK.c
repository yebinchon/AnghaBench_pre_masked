
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct thread {int dummy; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct mount {int dummy; } ;
struct extattrctl_args {int * attrname; int attrnamespace; int cmd; int * path; int * filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct nameidata*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct nameidata*,int ,int,int ,int *,struct thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct mount*,int ,struct vnode*,int ,char*) ;
 int FUNC_6 (struct vnode*,int ) ;
 int VAR_11 ;
 int FUNC_7 (int *,char*,int,int *) ;
 int FUNC_8 (struct nameidata*) ;
 int FUNC_9 (struct mount*,int ) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct mount*) ;
 int FUNC_12 (struct vnode*,int ) ;
 int FUNC_13 (struct vnode*,struct mount**,int) ;
 int FUNC_14 (struct vnode*) ;

int
FUNC_15(struct thread *VAR_12, struct extattrctl_args *VAR_13)
{
 struct vnode *VAR_14;
 struct nameidata VAR_15;
 struct mount *VAR_16, *VAR_17;
 char VAR_18[VAR_2];
 int VAR_19;

 FUNC_0(VAR_13->cmd);
 FUNC_2(VAR_13->attrnamespace);




 if (VAR_13->attrname != ((void*)0)) {
  VAR_19 = FUNC_7(VAR_13->attrname, VAR_18, VAR_2,
      ((void*)0));
  if (VAR_19)
   return (VAR_19);
 }
 FUNC_1(VAR_18);

 VAR_16 = ((void*)0);
 VAR_14 = ((void*)0);
 if (VAR_13->filename != ((void*)0)) {
  FUNC_4(&VAR_15, VAR_6, VAR_3 | VAR_1,
      VAR_10, VAR_13->filename, VAR_12);
  VAR_19 = FUNC_8(&VAR_15);
  if (VAR_19)
   return (VAR_19);
  VAR_14 = VAR_15.ni_vp;
  FUNC_3(&VAR_15, VAR_7);
 }


 FUNC_4(&VAR_15, VAR_6, VAR_3 | VAR_5 | VAR_0,
     VAR_10, VAR_13->path, VAR_12);
 VAR_19 = FUNC_8(&VAR_15);
 if (VAR_19)
  goto out;
 VAR_16 = VAR_15.ni_vp->v_mount;
 VAR_19 = FUNC_9(VAR_16, 0);
 if (VAR_19) {
  FUNC_3(&VAR_15, 0);
  VAR_16 = ((void*)0);
  goto out;
 }
 FUNC_6(VAR_15.ni_vp, 0);
 VAR_19 = FUNC_13(VAR_15.ni_vp, &VAR_17, VAR_11 | VAR_9);
 FUNC_3(&VAR_15, VAR_8);
 if (VAR_19)
  goto out;
 if (VAR_14 != ((void*)0)) {





  VAR_19 = FUNC_12(VAR_14, VAR_4);
  if (VAR_19) {
   FUNC_11(VAR_17);
   goto out;
  }
 }

 VAR_19 = FUNC_5(VAR_16, VAR_13->cmd, VAR_14, VAR_13->attrnamespace,
     VAR_13->attrname != ((void*)0) ? VAR_18 : ((void*)0));

 FUNC_11(VAR_17);
out:
 if (VAR_16 != ((void*)0))
  FUNC_10(VAR_16);





 if (VAR_14 != ((void*)0))
  FUNC_14(VAR_14);
 return (VAR_19);
}
