
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_5__ {int _flags; scalar_t__ _count; } ;
struct TYPE_6__ {TYPE_1__ _kern; int _magic; } ;
typedef TYPE_2__ sem_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_4 ;

int
FUNC_1(sem_t *VAR_5, int VAR_6, unsigned int VAR_7)
{

 if (VAR_7 > VAR_2) {
  VAR_4 = VAR_0;
  return (-1);
 }

 FUNC_0(VAR_5, sizeof(sem_t));
 VAR_5->_magic = VAR_1;
 VAR_5->_kern._count = (u_int32_t)VAR_7;
 VAR_5->_kern._flags = VAR_6 ? VAR_3 : 0;
 return (0);
}
