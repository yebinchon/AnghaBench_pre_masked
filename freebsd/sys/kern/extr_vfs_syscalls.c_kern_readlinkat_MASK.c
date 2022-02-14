
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct nameidata {struct vnode* ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,struct thread*) ;
 int VAR_7 ;
 int FUNC_2 (struct vnode*,char*,int,size_t,struct thread*) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct thread *VAR_8, int VAR_9, const char *VAR_10,
    enum uio_seg VAR_11, char *VAR_12, enum uio_seg VAR_13, size_t VAR_14)
{
 struct vnode *VAR_15;
 struct nameidata VAR_16;
 int VAR_17;

 if (VAR_14 > VAR_2)
  return (VAR_1);

 FUNC_1(&VAR_16, VAR_5, VAR_7 | VAR_4 | VAR_3 | VAR_0,
     VAR_11, VAR_10, VAR_9, VAR_8);

 if ((VAR_17 = FUNC_3(&VAR_16)) != 0)
  return (VAR_17);
 FUNC_0(&VAR_16, VAR_6);
 VAR_15 = VAR_16.ni_vp;

 VAR_17 = FUNC_2(VAR_15, VAR_12, VAR_13, VAR_14, VAR_8);
 FUNC_4(VAR_15);

 return (VAR_17);
}
