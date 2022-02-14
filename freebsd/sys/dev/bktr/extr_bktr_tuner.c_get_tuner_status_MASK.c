
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_5__ {scalar_t__ tuner_pllAddr; int * tuner; } ;
struct TYPE_6__ {TYPE_1__ card; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int * VAR_1 ;

int FUNC_1( bktr_ptr_t VAR_2 ) {
 if (VAR_2->card.tuner == &VAR_1[VAR_0])
  return 0;
 return FUNC_0( VAR_2, VAR_2->card.tuner_pllAddr + 1 );
}
