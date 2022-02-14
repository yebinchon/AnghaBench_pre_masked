
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct fde_entry {int * start_address; } ;
struct TYPE_4__ {TYPE_1__* frch_cfi_data; } ;
struct TYPE_3__ {int * last_address; } ;


 struct fde_entry* FUNC_0 () ;
 TYPE_2__* VAR_0 ;

void
FUNC_1 (symbolS *VAR_1)
{
  struct fde_entry *VAR_2 = FUNC_0 ();
  VAR_2->start_address = VAR_1;
  VAR_0->frch_cfi_data->last_address = VAR_1;
}
