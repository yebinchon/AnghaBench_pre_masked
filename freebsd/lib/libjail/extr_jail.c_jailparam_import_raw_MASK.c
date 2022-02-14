
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {size_t jp_valuelen; int jp_flags; void* jp_value; } ;


 int VAR_0 ;

int
FUNC_0(struct jailparam *VAR_1, void *VAR_2, size_t VAR_3)
{

 VAR_1->jp_value = VAR_2;
 VAR_1->jp_valuelen = VAR_3;
 VAR_1->jp_flags |= VAR_0;
 return (0);
}
