
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct uio {scalar_t__ uio_resid; int uio_offset; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int,struct uio*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_8, struct uio *VAR_9, int VAR_10)
{
 int VAR_11;
 u_char VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 uint16_t VAR_15;

 FUNC_1(&VAR_7);


 VAR_15 = FUNC_0(VAR_5 + VAR_3) << 8 |
       FUNC_0(VAR_5 + VAR_2);
 for (VAR_14 = VAR_0; VAR_14 <= VAR_1; VAR_14++)
  VAR_15 -= FUNC_0(VAR_5 + VAR_14);
 if (VAR_15 != 0) {
  FUNC_2(&VAR_7);
  return (VAR_4);
 }

 while (VAR_9->uio_resid > 0 && VAR_13 == 0) {
  VAR_11 = VAR_9->uio_offset + VAR_5;
  if (VAR_11 < VAR_5 || VAR_11 >= VAR_6) {
   FUNC_2(&VAR_7);
   return (0);
  }

  VAR_13 = FUNC_3(&VAR_12, 1, VAR_9);
  FUNC_4(VAR_11, VAR_12);
 }

 VAR_15 = 0;
 for (VAR_14 = VAR_0; VAR_14 <= VAR_1; VAR_14++)
  VAR_15 += FUNC_0(VAR_5 + VAR_14);
 FUNC_4(VAR_5 + VAR_3, VAR_15 >> 8);
 FUNC_4(VAR_5 + VAR_2, VAR_15);
 FUNC_2(&VAR_7);
 return (VAR_13);
}
