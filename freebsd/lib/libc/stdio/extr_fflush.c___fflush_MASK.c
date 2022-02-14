
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

int
FUNC_2(FILE *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return (FUNC_1(VAR_2));
 if ((VAR_3->_flags & (VAR_1 | VAR_0)) == 0)
  VAR_4 = 0;
 else
  VAR_4 = FUNC_0(VAR_3);
 return (VAR_4);
}
