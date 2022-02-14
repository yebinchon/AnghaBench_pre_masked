
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int decNumber ;
struct TYPE_6__ {int status; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int const*,int *) ;

__attribute__((used)) static bool
FUNC_5 (REAL_VALUE_TYPE *VAR_2, const REAL_VALUE_TYPE *VAR_3,
  const REAL_VALUE_TYPE *VAR_4, int VAR_5)
{
  decNumber VAR_6;
  decContext VAR_7;
  decNumber VAR_8, VAR_9;

  FUNC_4 (VAR_3, &VAR_8);
  FUNC_4 (VAR_4, &VAR_9);

  FUNC_0 (&VAR_7, VAR_0);
  VAR_7.traps = 0;

  if (VAR_5)
    FUNC_2 (&VAR_6, &VAR_8, &VAR_9, &VAR_7);
  else
    FUNC_1 (&VAR_6, &VAR_8, &VAR_9, &VAR_7);

  FUNC_3 (VAR_2, &VAR_6, &VAR_7);


  return (VAR_7.status & VAR_1);
}
