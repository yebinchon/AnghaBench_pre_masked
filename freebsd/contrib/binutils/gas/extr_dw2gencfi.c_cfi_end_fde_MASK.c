
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_6__ {TYPE_2__* frch_cfi_data; } ;
struct TYPE_5__ {TYPE_1__* cur_fde_data; } ;
struct TYPE_4__ {int * end_address; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (symbolS *VAR_1)
{
  VAR_0->frch_cfi_data->cur_fde_data->end_address = VAR_1;
  FUNC_0 (VAR_0->frch_cfi_data);
  VAR_0->frch_cfi_data = ((void*)0);
}
