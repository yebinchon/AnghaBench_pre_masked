
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int fd; int type; } ;


 int VAR_0 ;
 struct rad_handle* FUNC_0 () ;

struct rad_handle *
FUNC_1(int VAR_1)
{
 struct rad_handle *VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2 != ((void*)0)) {
         VAR_2->type = VAR_0;
         VAR_2->fd = VAR_1;
 }
 return VAR_2;
}
