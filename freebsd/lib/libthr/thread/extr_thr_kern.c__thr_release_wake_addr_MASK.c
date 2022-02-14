
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_addr {struct wake_addr* link; } ;
struct pthread {int dummy; } ;


 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 struct pthread* FUNC_2 () ;
 int VAR_0 ;
 struct wake_addr VAR_1 ;
 struct wake_addr* VAR_2 ;

void
FUNC_3(struct wake_addr *VAR_3)
{
 struct pthread *VAR_4 = FUNC_2();

 if (VAR_3 == &VAR_1)
  return;
 FUNC_0(VAR_4, &VAR_0);
 VAR_3->link = VAR_2;
 VAR_2 = VAR_3;
 FUNC_1(VAR_4, &VAR_0);
}
