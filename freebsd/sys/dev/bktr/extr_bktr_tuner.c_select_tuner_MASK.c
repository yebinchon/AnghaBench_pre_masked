
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_4__ {int * tuner; } ;
struct TYPE_5__ {TYPE_1__ card; } ;


 int VAR_0 ;
 int * VAR_1 ;

void FUNC_0( bktr_ptr_t VAR_2, int VAR_3 ) {
 if (VAR_3 < VAR_0) {
  VAR_2->card.tuner = &VAR_1[ VAR_3 ];
 } else {
  VAR_2->card.tuner = ((void*)0);
 }
}
