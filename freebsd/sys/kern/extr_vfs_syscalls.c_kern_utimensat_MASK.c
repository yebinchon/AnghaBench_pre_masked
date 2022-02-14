
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct timespec*,int,struct timespec*,int*) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct thread*,int ,struct timespec*,int,int) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct thread *VAR_12, int VAR_13, const char *VAR_14,
    enum uio_seg VAR_15, struct timespec *VAR_16, enum uio_seg VAR_17,
    int VAR_18)
{
 struct nameidata VAR_19;
 struct timespec VAR_20[2];
 int VAR_21, VAR_22;

 if ((VAR_18 & ~(VAR_1 | VAR_0)) != 0)
  return (VAR_4);

 if ((VAR_21 = FUNC_2(VAR_16, VAR_17, VAR_20, &VAR_22)) != 0)
  return (VAR_21);
 FUNC_1(&VAR_19, VAR_6, ((VAR_18 & VAR_1) ? VAR_8 :
     VAR_5) | ((VAR_18 & VAR_0) != 0 ? VAR_3 : 0) | VAR_2,
     VAR_15, VAR_14, VAR_13, &VAR_11, VAR_12);
 if ((VAR_21 = FUNC_3(&VAR_19)) != 0)
  return (VAR_21);






 FUNC_0(&VAR_19, VAR_7);
 if ((VAR_22 & VAR_9) == 0)
  VAR_21 = FUNC_4(VAR_12, VAR_19.ni_vp, VAR_20, 2, VAR_22 & VAR_10);
 FUNC_5(VAR_19.ni_vp);
 return (VAR_21);
}
