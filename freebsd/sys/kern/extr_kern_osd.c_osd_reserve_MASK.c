
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 void** FUNC_2 (int,int ,int) ;

void **
FUNC_3(u_int VAR_3)
{

 FUNC_0(VAR_3 > 0, ("Invalid slot."));

 FUNC_1("Reserving slot array (slot=%u).", VAR_3);
 return (FUNC_2(sizeof(void *) * VAR_3, VAR_0, VAR_1 | VAR_2));
}
