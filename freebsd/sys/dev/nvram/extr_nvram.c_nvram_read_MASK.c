
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uio {scalar_t__ uio_resid; int uio_offset; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 int VAR_5;
 u_char VAR_6;
 int VAR_7 = 0;

 while (VAR_3->uio_resid > 0 && VAR_7 == 0) {
  VAR_5 = VAR_3->uio_offset + VAR_0;
  if (VAR_5 < VAR_0 || VAR_5 >= VAR_1)
   return (0);

  VAR_6 = FUNC_0(VAR_5);
  VAR_7 = FUNC_1(&VAR_6, 1, VAR_3);
 }
 return (VAR_7);

}
