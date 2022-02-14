
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _flags; } ;
typedef TYPE_1__ FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_2)
{
 int VAR_3 = 0;

 if ((VAR_2->_flags & (VAR_0|VAR_1)) == (VAR_0|VAR_1)) {
  FUNC_0(VAR_2);
  VAR_3 = FUNC_2(VAR_2);
  FUNC_1();
 }
 return (VAR_3);
}
