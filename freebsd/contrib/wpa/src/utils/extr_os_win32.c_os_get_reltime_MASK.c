
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_time {int usec; int sec; } ;
struct os_reltime {int usec; int sec; } ;


 int FUNC_0 (struct os_time*) ;

int FUNC_1(struct os_reltime *VAR_0)
{

 struct os_time VAR_1;
 int VAR_2 = FUNC_0(&VAR_1);
 VAR_0->sec = VAR_1.sec;
 VAR_0->usec = VAR_1.usec;
 return VAR_2;
}
