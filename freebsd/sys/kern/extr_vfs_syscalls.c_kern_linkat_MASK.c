
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
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct thread*,int ,int,char const*,int) ;
 int FUNC_4 (struct nameidata*) ;

int
FUNC_5(struct thread *VAR_5, int VAR_6, int VAR_7, const char *VAR_8,
    const char *VAR_9, enum uio_seg VAR_10, int VAR_11)
{
 struct nameidata VAR_12;
 int VAR_13;

 do {
  FUNC_2();
  FUNC_1(&VAR_12, VAR_2, VAR_11 | VAR_0, VAR_10,
      VAR_8, VAR_6, &VAR_4, VAR_5);
  if ((VAR_13 = FUNC_4(&VAR_12)) != 0)
   return (VAR_13);
  FUNC_0(&VAR_12, VAR_3);
  VAR_13 = FUNC_3(VAR_5, VAR_12.ni_vp, VAR_7, VAR_9, VAR_10);
 } while (VAR_13 == VAR_1);
 return (VAR_13);
}
