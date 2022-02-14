
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
typedef int if_com_free_t ;
typedef int if_com_alloc_t ;


 int FUNC_0 (int ,char*) ;
 int ** VAR_0 ;
 int ** VAR_1 ;

void
FUNC_1(u_char VAR_2,
    if_com_alloc_t *VAR_3, if_com_free_t *VAR_4)
{

 FUNC_0(VAR_0[VAR_2] == ((void*)0),
     ("if_register_com_alloc: %d already registered", VAR_2));
 FUNC_0(VAR_1[VAR_2] == ((void*)0),
     ("if_register_com_alloc: %d free already registered", VAR_2));

 VAR_0[VAR_2] = VAR_3;
 VAR_1[VAR_2] = VAR_4;
}
