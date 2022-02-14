
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* rtx ;
typedef TYPE_3__* basic_block ;
struct TYPE_9__ {TYPE_1__* rtl; } ;
struct TYPE_10__ {TYPE_2__ il; } ;
struct TYPE_8__ {int * footer; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,void*) ;

__attribute__((used)) static basic_block
FUNC_1 (basic_block VAR_0, void *VAR_1)
{
  rtx VAR_2 = VAR_1;
  basic_block VAR_3 = FUNC_0 (VAR_0, VAR_2);

  VAR_3->il.rtl->footer = VAR_0->il.rtl->footer;
  VAR_0->il.rtl->footer = ((void*)0);

  return VAR_3;
}
