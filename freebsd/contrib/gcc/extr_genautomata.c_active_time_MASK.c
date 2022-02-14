
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int incremented_off_time; int modified_creation_time; } ;
typedef TYPE_1__ ticker_t ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (ticker_t VAR_0)
{
  if (VAR_0.incremented_off_time != 0)
    return VAR_0.incremented_off_time - 1 - VAR_0.modified_creation_time;
  else
    return FUNC_0 () - VAR_0.modified_creation_time;
}
