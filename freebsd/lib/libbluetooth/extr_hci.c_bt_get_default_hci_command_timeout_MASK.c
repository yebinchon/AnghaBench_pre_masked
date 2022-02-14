
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to ;
typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static time_t
FUNC_1(void)
{
 int VAR_2;
 size_t VAR_3 = sizeof(VAR_2);

 if (FUNC_0("net.bluetooth.hci.command_timeout",
    &VAR_2, &VAR_3, ((void*)0), 0) < 0)
  return (-1);


 if (VAR_2 <= 0) {
  VAR_1 = VAR_0;
  return (-1);
 }

 return ((time_t)VAR_2);
}
