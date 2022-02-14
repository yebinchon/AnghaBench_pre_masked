
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* ibe_name; struct TYPE_4__* ibe_interpreter; struct TYPE_4__* ibe_mask; struct TYPE_4__* ibe_magic; } ;
typedef TYPE_1__ imgact_binmisc_entry_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(imgact_binmisc_entry_t *VAR_1)
{
 if (!VAR_1)
  return;
 if (VAR_1->ibe_magic)
  FUNC_0(VAR_1->ibe_magic, VAR_0);
 if (VAR_1->ibe_mask)
  FUNC_0(VAR_1->ibe_mask, VAR_0);
 if (VAR_1->ibe_interpreter)
  FUNC_0(VAR_1->ibe_interpreter, VAR_0);
 if (VAR_1->ibe_name)
  FUNC_0(VAR_1->ibe_name, VAR_0);
 if (VAR_1)
  FUNC_0(VAR_1, VAR_0);
}
