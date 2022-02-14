
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct pfilioc_list {int dummy; } ;
struct pfilioc_link {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;



 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct pfilioc_link*) ;
 int FUNC_4 (struct pfilioc_list*) ;
 int FUNC_5 (struct pfilioc_list*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 int VAR_6;

 FUNC_1(FUNC_2(VAR_5));
 VAR_6 = 0;
 switch (VAR_2) {
 case 129:
  VAR_6 = FUNC_4((struct pfilioc_list *)VAR_3);
  break;
 case 128:
  VAR_6 = FUNC_5((struct pfilioc_list *)VAR_3);
  break;
 case 130:
  VAR_6 = FUNC_3((struct pfilioc_link *)VAR_3);
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }
 FUNC_0();
 return (VAR_6);
}
