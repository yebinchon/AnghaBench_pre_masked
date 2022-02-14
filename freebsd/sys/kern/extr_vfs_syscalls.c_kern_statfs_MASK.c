
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct statfs {int dummy; } ;
struct nameidata {TYPE_1__* ni_vp; } ;
struct mount {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_2__ {struct mount* v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,struct thread*) ;
 int FUNC_2 (struct thread*,struct mount*,struct statfs*) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct thread *VAR_6, const char *VAR_7, enum uio_seg VAR_8,
    struct statfs *VAR_9)
{
 struct mount *VAR_10;
 struct nameidata VAR_11;
 int VAR_12;

 FUNC_1(&VAR_11, VAR_4, VAR_1 | VAR_3 | VAR_2 | VAR_0,
     VAR_8, VAR_7, VAR_6);
 VAR_12 = FUNC_3(&VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);
 VAR_10 = VAR_11.ni_vp->v_mount;
 FUNC_4(VAR_10);
 FUNC_0(&VAR_11, VAR_5);
 FUNC_5(VAR_11.ni_vp);
 return (FUNC_2(VAR_6, VAR_10, VAR_9));
}
