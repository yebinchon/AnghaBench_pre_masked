
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
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (int *,int *,TYPE_2__*) ;

void
FUNC_8 (HOST_WIDE_INT *VAR_2, HOST_WIDE_INT *VAR_3,
     const REAL_VALUE_TYPE *VAR_4)
{
  decContext VAR_5;
  decNumber VAR_6, VAR_7, VAR_8;
  REAL_VALUE_TYPE VAR_9;
  char VAR_10[256];

  FUNC_0 (&VAR_5, VAR_0);
  VAR_5.traps = 0;
  VAR_5.round = VAR_1;
  FUNC_5 ((decimal128 *) VAR_4->sig, &VAR_6);

  FUNC_2 (&VAR_7, &VAR_6, &VAR_5);
  FUNC_4 (&VAR_8);
  FUNC_1 (&VAR_6, &VAR_7, &VAR_8, &VAR_5);



  FUNC_3 (&VAR_6, VAR_10);
  FUNC_6 (&VAR_9, VAR_10);
  FUNC_7 (VAR_2, VAR_3, &VAR_9);
}
