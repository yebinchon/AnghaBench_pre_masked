
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_4 ;
 int FUNC_2 (struct timeval*,int,struct timespec*) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct thread*,int ,struct timespec*,int,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct thread *VAR_5, int VAR_6, const char *VAR_7,
    enum uio_seg VAR_8, struct timeval *VAR_9, enum uio_seg VAR_10)
{
 struct nameidata VAR_11;
 struct timespec VAR_12[2];
 int VAR_13;

 if ((VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_12)) != 0)
  return (VAR_13);
 FUNC_1(&VAR_11, VAR_2, VAR_1 | VAR_0, VAR_8, VAR_7, VAR_6,
     &VAR_4, VAR_5);

 if ((VAR_13 = FUNC_3(&VAR_11)) != 0)
  return (VAR_13);
 FUNC_0(&VAR_11, VAR_3);
 VAR_13 = FUNC_4(VAR_5, VAR_11.ni_vp, VAR_12, 2, VAR_9 == ((void*)0));
 FUNC_5(VAR_11.ni_vp);
 return (VAR_13);
}
