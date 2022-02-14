
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int cancel_async; } ;


 int VAR_0 ;


 struct pthread* FUNC_0 () ;
 int FUNC_1 (struct pthread*) ;

int
FUNC_2(int VAR_1, int *VAR_2)
{
 struct pthread *VAR_3 = FUNC_0();
 int VAR_4;

 VAR_4 = VAR_3->cancel_async;
 switch (VAR_1) {
 case 129:
  VAR_3->cancel_async = 1;
  FUNC_1(VAR_3);
  break;
 case 128:
  VAR_3->cancel_async = 0;
  break;
 default:
  return (VAR_0);
 }

 if (VAR_2) {
  *VAR_2 = VAR_4 ? 129 :
    128;
 }
 return (0);
}
