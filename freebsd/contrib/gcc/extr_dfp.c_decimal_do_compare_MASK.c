
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int decimal128 ;
typedef int decNumber ;
struct TYPE_9__ {scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
struct TYPE_10__ {scalar_t__ sig; int decimal; } ;
typedef TYPE_2__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__ const*) ;

int
FUNC_7 (const REAL_VALUE_TYPE *VAR_1, const REAL_VALUE_TYPE *VAR_2,
      int VAR_3)
{
  decContext VAR_4;
  decNumber VAR_5, VAR_6, VAR_7;
  REAL_VALUE_TYPE VAR_8, VAR_9;


  if (!VAR_1->decimal)
    {
      FUNC_6 (&VAR_8, VAR_1);
      VAR_1 = &VAR_8;
    }
  if (!VAR_2->decimal)
    {
      FUNC_6 (&VAR_9, VAR_2);
      VAR_2 = &VAR_9;
    }


  FUNC_0 (&VAR_4, VAR_0);
  VAR_4.traps = 0;
  FUNC_5 ((decimal128 *) VAR_1->sig, &VAR_6);
  FUNC_5 ((decimal128 *) VAR_2->sig, &VAR_7);


  FUNC_1 (&VAR_5, &VAR_6, &VAR_7, &VAR_4);


  if (FUNC_2 (&VAR_5))
    return VAR_3;
  else if (FUNC_4 (&VAR_5))
    return 0;
  else if (FUNC_3 (&VAR_5))
    return -1;
  else
    return 1;
}
