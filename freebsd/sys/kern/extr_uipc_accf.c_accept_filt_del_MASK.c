
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct accept_filter {int * accf_callback; } ;


 int VAR_0 ;
 struct accept_filter* FUNC_0 (char*) ;

int
FUNC_1(char *VAR_1)
{
 struct accept_filter *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 VAR_2->accf_callback = ((void*)0);
 return (0);
}
