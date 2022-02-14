
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ DIR ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(DIR *VAR_0)
{
 FUNC_0(VAR_0->fd);
 VAR_0->fd = -1;
 FUNC_1(VAR_0);
 return 0;
}
