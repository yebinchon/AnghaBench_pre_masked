
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_time {scalar_t__ usec; scalar_t__ sec; } ;


 int FUNC_0 (scalar_t__,char*,long,unsigned int) ;
 int FUNC_1 (struct os_time*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,long,unsigned int) ;
 int VAR_1 ;

void FUNC_3(void)
{

 struct os_time VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_2);






 FUNC_2("%ld.%06u: ", (long) VAR_2.sec, (unsigned int) VAR_2.usec);

}
