
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int decimal128 ;
typedef int decNumber ;
struct TYPE_7__ {scalar_t__ status; int round; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *,char const*,TYPE_1__*) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;

decimal128 *
FUNC_4 (decimal128 * VAR_1, const char *VAR_2, decContext * VAR_3)
{
  decContext VAR_4;
  decNumber VAR_5;

  FUNC_0 (&VAR_4, VAR_0);
  VAR_4.round = VAR_3->round;

  FUNC_2 (&VAR_5, VAR_2, &VAR_4);
  FUNC_3 (VAR_1, &VAR_5, &VAR_4);
  if (VAR_4.status != 0)
    {
      FUNC_1 (VAR_3, VAR_4.status);
    }
  return VAR_1;
}
