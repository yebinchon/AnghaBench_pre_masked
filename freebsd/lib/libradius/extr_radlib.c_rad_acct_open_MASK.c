
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int type; } ;


 int VAR_0 ;
 struct rad_handle* FUNC_0 () ;

struct rad_handle *
FUNC_1(void)
{
 struct rad_handle *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 != ((void*)0))
         VAR_1->type = VAR_0;
 return VAR_1;
}
