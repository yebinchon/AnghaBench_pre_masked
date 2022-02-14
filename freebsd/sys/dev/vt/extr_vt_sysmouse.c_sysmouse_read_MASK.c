
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {unsigned int uio_resid; } ;
struct cdev {int dummy; } ;
typedef unsigned int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uio*,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 unsigned int VAR_10;
 ssize_t VAR_11;
 int VAR_12 = 0;

 VAR_11 = VAR_8->uio_resid;

 FUNC_1(&VAR_5);
 VAR_10 = VAR_4 >= 1 ? VAR_2 :
     VAR_1;

 while (VAR_8->uio_resid >= VAR_10) {
  VAR_12 = FUNC_3(VAR_8, VAR_10);
  if (VAR_12 == 0) {

   continue;
  } else if (VAR_12 != VAR_0) {

   break;
  } else {

   if (VAR_11 != VAR_8->uio_resid || VAR_9 & VAR_3)
    break;
   VAR_12 = FUNC_0(&VAR_6, &VAR_5);
   if (VAR_12 != 0)
    break;
  }
 }
 FUNC_2(&VAR_5);

 return (VAR_12);
}
