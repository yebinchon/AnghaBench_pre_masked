
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* dfp_unary_func ) (int *,int *,TYPE_1__*) ;
typedef int decNumber ;
struct TYPE_7__ {int round; } ;
typedef TYPE_1__ decContext ;
typedef int IEEE_TYPE ;
typedef int DFP_C_TYPE ;


 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static inline DFP_C_TYPE
FUNC_7 (dfp_unary_func VAR_3, DFP_C_TYPE VAR_4)
{
  DFP_C_TYPE VAR_5;
  decContext VAR_6;
  decNumber VAR_7, VAR_8;
  IEEE_TYPE VAR_9, VAR_10;

  FUNC_2 (VAR_4, &VAR_9);

  FUNC_6 (&VAR_6, VAR_0);
  VAR_6.round = VAR_1;

  FUNC_5 (&VAR_9, &VAR_7);


  VAR_3 (&VAR_8, &VAR_7, &VAR_6);

  if (VAR_2 && FUNC_0 (VAR_6))
    FUNC_1 (0);

  FUNC_4 (&VAR_10, &VAR_8, &VAR_6);
  FUNC_3 (VAR_10, &VAR_5);
  return VAR_5;
}
