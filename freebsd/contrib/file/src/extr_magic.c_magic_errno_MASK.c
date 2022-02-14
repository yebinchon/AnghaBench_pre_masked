
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magic_set {int event_flags; int error; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct magic_set *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return VAR_0;
 return (VAR_2->event_flags & VAR_1) ? VAR_2->error : 0;
}
