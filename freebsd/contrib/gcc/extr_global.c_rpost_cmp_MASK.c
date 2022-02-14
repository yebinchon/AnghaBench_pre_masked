
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int basic_block ;
struct TYPE_2__ {int rts_number; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  basic_block VAR_2 = *(basic_block *) VAR_0, VAR_3 = *(basic_block *) VAR_1;

  return FUNC_0 (VAR_3)->rts_number - FUNC_0 (VAR_2)->rts_number;
}
