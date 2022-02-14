
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ DIR ;


 TYPE_1__* FUNC_0 (int) ;

DIR *
FUNC_1(int VAR_0)
{
 DIR *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1->fd = VAR_0;
 return VAR_1;
}
