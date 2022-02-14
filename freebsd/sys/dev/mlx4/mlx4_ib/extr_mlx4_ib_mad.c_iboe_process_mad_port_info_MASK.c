
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_class_port_info {int capability_mask; } ;
typedef int cpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,struct ib_class_port_info*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 struct ib_class_port_info VAR_4 = {};

 VAR_4.capability_mask = VAR_2;
 FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4));
 return VAR_1 | VAR_0;
}
