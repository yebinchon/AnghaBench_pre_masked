
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gre_cisco_protocol {size_t priority; } ;


 int VAR_0 ;
 int * FUNC_0 (struct gre_cisco_protocol**,int *,struct gre_cisco_protocol*) ;
 int * VAR_1 ;

int FUNC_1(struct gre_cisco_protocol *VAR_2)
{
 struct gre_cisco_protocol **VAR_3 = (struct gre_cisco_protocol **)
         &VAR_1[VAR_2->priority];

 return (FUNC_0(VAR_3, ((void*)0), VAR_2) == ((void*)0)) ? 0 : -VAR_0;
}
