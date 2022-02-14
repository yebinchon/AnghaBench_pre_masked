
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* fds_bits; } ;
typedef TYPE_1__ fd_set ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(int VAR_0)
{
 fd_set VAR_1;

 FUNC_0(&VAR_1);
 VAR_1.fds_bits[0] = VAR_0;
 FUNC_1(&VAR_1);
}
