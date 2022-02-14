
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int _count; } ;
struct TYPE_5__ {TYPE_2__ _kern; } ;
typedef TYPE_1__ sem_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int*,unsigned int,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4(sem_t *VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_2(VAR_4) != 0)
  return (-1);

 do {
  VAR_5 = VAR_4->_kern._count;
  if (FUNC_0(VAR_5) + 1 > VAR_1) {
   VAR_3 = VAR_0;
   return (-1);
  }
 } while (!FUNC_1(&VAR_4->_kern._count, VAR_5, VAR_5 + 1));
 if (VAR_5 & VAR_2)
  FUNC_3(&VAR_4->_kern);
 return (0);
}
