
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_3__ {scalar_t__ _fl_owner; int _fl_count; int _fl_mutex; } ;
typedef TYPE_1__ FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

void
FUNC_2(FILE *VAR_0)
{
 pthread_t VAR_1 = FUNC_1();

 if (VAR_0->_fl_owner == VAR_1)
  VAR_0->_fl_count++;
 else {




  FUNC_0(&VAR_0->_fl_mutex);
  VAR_0->_fl_owner = VAR_1;
  VAR_0->_fl_count = 1;
 }
}
