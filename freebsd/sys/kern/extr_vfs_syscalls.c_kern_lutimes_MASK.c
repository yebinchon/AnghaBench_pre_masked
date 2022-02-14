
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
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,struct thread*) ;
 int VAR_3 ;
 int FUNC_2 (struct timeval*,int,struct timespec*) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct thread*,int ,struct timespec*,int,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct thread *VAR_4, const char *VAR_5, enum uio_seg VAR_6,
    struct timeval *VAR_7, enum uio_seg VAR_8)
{
 struct timespec VAR_9[2];
 struct nameidata VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_9)) != 0)
  return (VAR_11);
 FUNC_1(&VAR_10, VAR_1, VAR_3 | VAR_0, VAR_6, VAR_5, VAR_4);
 if ((VAR_11 = FUNC_3(&VAR_10)) != 0)
  return (VAR_11);
 FUNC_0(&VAR_10, VAR_2);
 VAR_11 = FUNC_4(VAR_4, VAR_10.ni_vp, VAR_9, 2, VAR_7 == ((void*)0));
 FUNC_5(VAR_10.ni_vp);
 return (VAR_11);
}
