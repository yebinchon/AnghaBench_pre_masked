
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {void* arg; int * function; struct cleanup* next; } ;
typedef int make_cleanup_ftype ;


 scalar_t__ FUNC_0 (int) ;

struct cleanup *
FUNC_1 (struct cleanup **VAR_0, make_cleanup_ftype *VAR_1,
   void *VAR_2)
{
  struct cleanup *VAR_3
    = (struct cleanup *) FUNC_0 (sizeof (struct cleanup));
  struct cleanup *VAR_4 = *VAR_0;

  VAR_3->next = *VAR_0;
  VAR_3->function = VAR_1;
  VAR_3->arg = VAR_2;
  *VAR_0 = VAR_3;

  return VAR_4;
}
