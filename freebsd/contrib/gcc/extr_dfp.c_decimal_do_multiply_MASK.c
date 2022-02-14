
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decNumber ;
struct TYPE_5__ {int status; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int const*,int *) ;

__attribute__((used)) static bool
FUNC_4 (REAL_VALUE_TYPE *VAR_2, const REAL_VALUE_TYPE *VAR_3,
       const REAL_VALUE_TYPE *VAR_4)
{
  decContext VAR_5;
  decNumber VAR_6, VAR_7, VAR_8;

  FUNC_3 (VAR_3, &VAR_7);
  FUNC_3 (VAR_4, &VAR_8);

  FUNC_0 (&VAR_5, VAR_0);
  VAR_5.traps = 0;

  FUNC_1 (&VAR_6, &VAR_7, &VAR_8, &VAR_5);
  FUNC_2 (VAR_2, &VAR_6, &VAR_5);


  return (VAR_5.status & VAR_1);
}
