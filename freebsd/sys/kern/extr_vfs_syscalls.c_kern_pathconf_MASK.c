
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,struct thread*) ;
 int FUNC_2 (int ,int,long*) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct thread *VAR_5, const char *VAR_6, enum uio_seg VAR_7,
    int VAR_8, u_long VAR_9, long *VAR_10)
{
 struct nameidata VAR_11;
 int VAR_12;

 FUNC_1(&VAR_11, VAR_3, VAR_2 | VAR_1 | VAR_0 | VAR_9,
     VAR_7, VAR_6, VAR_5);
 if ((VAR_12 = FUNC_3(&VAR_11)) != 0)
  return (VAR_12);
 FUNC_0(&VAR_11, VAR_4);

 VAR_12 = FUNC_2(VAR_11.ni_vp, VAR_8, VAR_10);
 FUNC_4(VAR_11.ni_vp);
 return (VAR_12);
}
