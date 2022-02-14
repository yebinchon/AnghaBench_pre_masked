
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_6, int VAR_7, int VAR_8, struct thread *VAR_9)
{
 if (!VAR_3)
  return VAR_1;

 if (VAR_7 & VAR_2) {
  if (VAR_4) {
   return VAR_0;
  } else {
   VAR_4 = 1;
   VAR_5 = 0;
  }
 }
 return 0;
}
