
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct redirection_data {TYPE_1__* dup_block; } ;
typedef int basic_block ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ frequency; } ;


 TYPE_1__* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_2 (basic_block VAR_0, struct redirection_data *VAR_1)
{


  VAR_1->dup_block = FUNC_0 (VAR_0, ((void*)0), ((void*)0));


  VAR_1->dup_block->frequency = 0;
  VAR_1->dup_block->count = 0;







  FUNC_1 (VAR_1->dup_block, ((void*)0));
}
