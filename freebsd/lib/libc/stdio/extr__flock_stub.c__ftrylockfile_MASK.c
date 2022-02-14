
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_3__ {scalar_t__ _fl_owner; int _fl_count; int _fl_mutex; } ;
typedef TYPE_1__ FILE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(FILE *VAR_0)
{
 pthread_t VAR_1 = FUNC_1();
 int VAR_2 = 0;

 if (VAR_0->_fl_owner == VAR_1)
  VAR_0->_fl_count++;




 else if (FUNC_0(&VAR_0->_fl_mutex) == 0) {
  VAR_0->_fl_owner = VAR_1;
  VAR_0->_fl_count = 1;
 }
 else
  VAR_2 = -1;
 return (VAR_2);
}
