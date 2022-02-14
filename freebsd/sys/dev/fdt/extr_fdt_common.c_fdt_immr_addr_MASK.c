
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef void* u_long ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int,int ,void**,void**) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,char*) ;

int
FUNC_4(vm_offset_t VAR_4)
{
 phandle_t VAR_5;
 u_long VAR_6, VAR_7;
 int VAR_8;




 if ((VAR_5 = FUNC_0("soc")) != -1)
  if (FUNC_3(VAR_5, "simple-bus"))
   goto moveon;



 if ((VAR_5 = FUNC_0("/")) == -1)
  return (VAR_0);

 if ((VAR_5 = FUNC_1(VAR_5, "simple-bus", 0)) == 0)
  return (VAR_0);

moveon:
 if ((VAR_8 = FUNC_2(VAR_5, 0, &VAR_6, &VAR_7)) == 0) {
  VAR_1 = VAR_6;
  VAR_3 = VAR_4;
  VAR_2 = VAR_7;
 }

 return (VAR_8);
}
