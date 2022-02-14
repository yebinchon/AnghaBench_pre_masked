
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct iodesc {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void**) ;

__attribute__((used)) static ssize_t
FUNC_2(struct iodesc *VAR_0, void **VAR_1, time_t VAR_2)
{
 time_t VAR_3;
 void *VAR_4;
 int VAR_5 = -1;

 VAR_3 = FUNC_0();
 while ((FUNC_0() - VAR_3) < VAR_2) {
  VAR_5 = FUNC_1(&VAR_4);
  if (VAR_5 != -1) {
   *VAR_1 = VAR_4;
   break;
  }
 }
 return (VAR_5);
}
