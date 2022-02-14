
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;

 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, unsigned long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_3);
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
