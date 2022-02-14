
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* dfp_binary_func ) (int *,int *,int *,TYPE_1__*) ;
typedef int decNumber ;
struct TYPE_6__ {int round; } ;
typedef TYPE_1__ decContext ;
typedef int IEEE_TYPE ;
typedef int DFP_C_TYPE ;


 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static inline int
FUNC_7 (dfp_binary_func VAR_3, DFP_C_TYPE VAR_4, DFP_C_TYPE VAR_5)
{
  IEEE_TYPE VAR_6, VAR_7;
  decContext VAR_8;
  decNumber VAR_9, VAR_10, VAR_11;
  int VAR_12;

  FUNC_2 (VAR_4, &VAR_6);
  FUNC_2 (VAR_5, &VAR_7);

  FUNC_4 (&VAR_8, VAR_0);
  VAR_8.round = VAR_1;

  FUNC_3 (&VAR_6, &VAR_9);
  FUNC_3 (&VAR_7, &VAR_10);


  VAR_3 (&VAR_11, &VAR_9, &VAR_10, &VAR_8);

  if (VAR_2 && FUNC_0 (VAR_8))
    FUNC_1 (0);

  if (FUNC_5 (&VAR_11))
    VAR_12 = -1;
  else if (FUNC_6 (&VAR_11))
    VAR_12 = 0;
  else
    VAR_12 = 1;

  return VAR_12;
}
