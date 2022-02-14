
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _orientation; } ;
typedef TYPE_1__ FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(FILE *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);

 if (VAR_1 != 0 && VAR_0->_orientation == 0)
  VAR_0->_orientation = VAR_1 > 0 ? 1 : -1;
 VAR_2 = VAR_0->_orientation;
 FUNC_1(VAR_0);

 return (VAR_2);
}
