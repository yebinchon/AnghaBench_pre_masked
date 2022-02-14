
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;


 int FUNC_0 (int ,char*) ;
 int ** VAR_0 ;
 int ** VAR_1 ;

void
FUNC_1(u_char VAR_2)
{

 FUNC_0(VAR_0[VAR_2] != ((void*)0),
     ("if_deregister_com_alloc: %d not registered", VAR_2));
 FUNC_0(VAR_1[VAR_2] != ((void*)0),
     ("if_deregister_com_alloc: %d free not registered", VAR_2));
 VAR_0[VAR_2] = ((void*)0);
 VAR_1[VAR_2] = ((void*)0);
}
