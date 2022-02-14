
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 if (VAR_5 & VAR_0) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   if (VAR_3 & (1 << VAR_8))
    FUNC_0(VAR_8);
  }
  VAR_2 = 0;
 }
 return 0;
}
