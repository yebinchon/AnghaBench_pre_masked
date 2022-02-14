
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decNumber ;
struct TYPE_5__ {scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,TYPE_1__*) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;

void
FUNC_3 (REAL_VALUE_TYPE *VAR_1, const char *VAR_2)
{
  decNumber VAR_3;
  decContext VAR_4;
  FUNC_0 (&VAR_4, VAR_0);
  VAR_4.traps = 0;

  FUNC_1 (&VAR_3, (char *) VAR_2, &VAR_4);




  FUNC_2 (VAR_1, &VAR_3, &VAR_4);
}
