
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int basic_block ;
struct TYPE_2__ {int (* create_basic_block ) (void*,void*,int ) ;int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (void*,void*,int ) ;

basic_block
FUNC_3 (void *VAR_4, void *VAR_5, basic_block VAR_6)
{
  basic_block VAR_7;

  if (!VAR_2->create_basic_block)
    FUNC_1 ("%s does not support create_basic_block", VAR_2->name);

  VAR_7 = VAR_2->create_basic_block (VAR_4, VAR_5, VAR_6);

  if (VAR_3[VAR_0])
    FUNC_0 (VAR_0, VAR_7);
  if (VAR_3[VAR_1])
    FUNC_0 (VAR_1, VAR_7);

  return VAR_7;
}
