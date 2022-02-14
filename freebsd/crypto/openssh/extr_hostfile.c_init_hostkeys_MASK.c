
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostkeys {int * entries; } ;


 struct hostkeys* FUNC_0 (int,int) ;

struct hostkeys *
FUNC_1(void)
{
 struct hostkeys *VAR_0 = FUNC_0(1, sizeof(*VAR_0));

 VAR_0->entries = ((void*)0);
 return VAR_0;
}
