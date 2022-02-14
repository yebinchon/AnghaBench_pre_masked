
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sys_info*) ;
 struct sys_info* FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char *VAR_4[])
{
 struct sys_info *VAR_5;

 if ((VAR_5 = FUNC_2()) == ((void*)0)) {
  VAR_2 = "could not retrieve U-Boot sys info!?";
  return (VAR_0);
 }

 FUNC_0("U-Boot system info:\n");
 FUNC_1(VAR_5);
 return (VAR_1);
}
