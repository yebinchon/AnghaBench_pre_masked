
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int decimal128 ;
typedef int decNumber ;
struct TYPE_9__ {int round; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
struct TYPE_10__ {scalar_t__ sig; } ;
typedef TYPE_2__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *,TYPE_1__*) ;

void
FUNC_4 (REAL_VALUE_TYPE *VAR_2, const REAL_VALUE_TYPE *VAR_3)
{
  decNumber VAR_4, VAR_5;
  decContext VAR_6;

  FUNC_0 (&VAR_6, VAR_0);
  VAR_6.traps = 0;
  VAR_6.round = VAR_1;
  FUNC_2 ((decimal128 *) VAR_3->sig, &VAR_5);

  FUNC_1 (&VAR_4, &VAR_5, &VAR_6);
  FUNC_3 (VAR_2, &VAR_4, &VAR_6);
}
