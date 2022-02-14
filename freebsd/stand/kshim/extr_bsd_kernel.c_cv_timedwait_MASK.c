
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct cv {int sleeping; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;
 int VAR_2 ;
 int FUNC_4 () ;

int
FUNC_5(struct cv *VAR_3, struct mtx *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2;
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_3->sleeping)
  return (VAR_0);

 VAR_3->sleeping = 1;

 while (VAR_3->sleeping) {
  if (VAR_5 >= 0) {
   VAR_7 = VAR_2 - VAR_6;
   if (VAR_7 >= VAR_5 || VAR_7 < 0)
    break;
  }
  FUNC_3(VAR_4);

  FUNC_4();

  if (++VAR_8 >= (1000000 / VAR_1)) {
   VAR_8 = 0;
   FUNC_0(1);
  }


  FUNC_1(1);

  FUNC_2(VAR_4);
 }

 if (VAR_3->sleeping) {
  VAR_3->sleeping = 0;
  return (VAR_0);
 }
 return (0);
}
