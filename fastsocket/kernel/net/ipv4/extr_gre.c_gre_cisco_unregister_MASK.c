
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gre_cisco_protocol {size_t priority; } ;


 int VAR_0 ;
 struct gre_cisco_protocol* FUNC_0 (struct gre_cisco_protocol**,struct gre_cisco_protocol*,int *) ;
 int * VAR_1 ;
 int FUNC_1 () ;

int FUNC_2(struct gre_cisco_protocol *VAR_2)
{
 struct gre_cisco_protocol **VAR_3 = (struct gre_cisco_protocol **)
         &VAR_1[VAR_2->priority];
 int VAR_4;

 VAR_4 = (FUNC_0(VAR_3, VAR_2, ((void*)0)) == VAR_2) ? 0 : -VAR_0;

 if (VAR_4)
  return VAR_4;

 FUNC_1();
 return 0;
}
