
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct msgbuf {int dummy; } ;
struct cdev {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct msgbuf*,char*,int) ;
 scalar_t__ FUNC_3 (struct msgbuf*) ;
 int VAR_3 ;
 struct msgbuf* VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 char VAR_8[128];
 struct msgbuf *VAR_9 = VAR_4;
 int VAR_10 = 0, VAR_11;

 FUNC_4(&VAR_3);
 while (FUNC_3(VAR_9) == 0) {
  if (VAR_7 & VAR_1) {
   FUNC_5(&VAR_3);
   return (VAR_0);
  }
  if ((VAR_10 = FUNC_0(&VAR_2, &VAR_3)) != 0) {
   FUNC_5(&VAR_3);
   return (VAR_10);
  }
 }

 while (VAR_6->uio_resid > 0) {
  VAR_11 = FUNC_1(sizeof(VAR_8), VAR_6->uio_resid);
  VAR_11 = FUNC_2(VAR_9, VAR_8, VAR_11);
  if (VAR_11 == 0)
   break;
  FUNC_5(&VAR_3);
  VAR_10 = FUNC_6(VAR_8, VAR_11, VAR_6);
  if (VAR_10 || VAR_6->uio_resid == 0)
   return (VAR_10);
  FUNC_4(&VAR_3);
 }
 FUNC_5(&VAR_3);
 return (VAR_10);
}
