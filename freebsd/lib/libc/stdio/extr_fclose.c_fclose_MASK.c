
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_2 ;

int
FUNC_3(FILE *VAR_3)
{
 int VAR_4;

 if (VAR_3->_flags == 0) {
  VAR_2 = VAR_0;
  return (VAR_1);
 }

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_3, 1);
 FUNC_1();

 return (VAR_4);
}
