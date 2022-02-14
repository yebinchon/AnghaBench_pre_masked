
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct nameidata {int ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct thread*,int ,int ,int,int) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct thread *VAR_9, int VAR_10, const char *VAR_11,
    enum uio_seg VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 struct nameidata VAR_16;
 int VAR_17, VAR_18;

 FUNC_0(VAR_13, VAR_14);
 VAR_18 = (VAR_15 & VAR_1) ? VAR_7 : VAR_4;
 VAR_18 |= (VAR_15 & VAR_0) != 0 ? VAR_3 : 0;
 FUNC_2(&VAR_16, VAR_5, VAR_18 | VAR_2, VAR_12, VAR_11, VAR_10,
     &VAR_8, VAR_9);

 if ((VAR_17 = FUNC_3(&VAR_16)) != 0)
  return (VAR_17);
 FUNC_1(&VAR_16, VAR_6);
 VAR_17 = FUNC_4(VAR_9, VAR_9->td_ucred, VAR_16.ni_vp, VAR_13, VAR_14);
 FUNC_5(VAR_16.ni_vp);
 return (VAR_17);
}
