
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _flags; } ;
struct TYPE_6__ {scalar_t__ _magic; TYPE_1__ _kern; } ;
typedef TYPE_2__ sem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int
FUNC_1(sem_t *VAR_3)
{

 if (FUNC_0(VAR_3) != 0)
  return (-1);

 if (VAR_3->_kern._flags & VAR_1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 VAR_3->_magic = 0;
 return (0);
}
