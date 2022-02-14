
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,struct thread*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct thread*) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct thread *VAR_6, const char *VAR_7, enum uio_seg VAR_8)
{
 struct nameidata VAR_9;
 int VAR_10;

 FUNC_1(&VAR_9, VAR_4, VAR_1 | VAR_3 | VAR_2 | VAR_0,
     VAR_8, VAR_7, VAR_6);
 if ((VAR_10 = FUNC_4(&VAR_9)) != 0)
  return (VAR_10);
 if ((VAR_10 = FUNC_3(VAR_9.ni_vp, VAR_6)) != 0) {
  FUNC_6(VAR_9.ni_vp);
  FUNC_0(&VAR_9, VAR_5);
  return (VAR_10);
 }
 FUNC_2(VAR_9.ni_vp, 0);
 FUNC_0(&VAR_9, VAR_5);
 FUNC_5(VAR_6, VAR_9.ni_vp);
 return (0);
}
