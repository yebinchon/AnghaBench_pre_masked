
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int table; int tree; } ;
struct rar {TYPE_2__ lengthcode; TYPE_2__ lowoffsetcode; TYPE_2__ offsetcode; TYPE_2__ maincode; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct archive_read *VAR_0)
{
  struct rar *VAR_1 = (struct rar *)(VAR_0->format->data);
  FUNC_0(VAR_1->maincode.tree);
  FUNC_0(VAR_1->offsetcode.tree);
  FUNC_0(VAR_1->lowoffsetcode.tree);
  FUNC_0(VAR_1->lengthcode.tree);
  FUNC_0(VAR_1->maincode.table);
  FUNC_0(VAR_1->offsetcode.table);
  FUNC_0(VAR_1->lowoffsetcode.table);
  FUNC_0(VAR_1->lengthcode.table);
  FUNC_1(&VAR_1->maincode, 0, sizeof(VAR_1->maincode));
  FUNC_1(&VAR_1->offsetcode, 0, sizeof(VAR_1->offsetcode));
  FUNC_1(&VAR_1->lowoffsetcode, 0, sizeof(VAR_1->lowoffsetcode));
  FUNC_1(&VAR_1->lengthcode, 0, sizeof(VAR_1->lengthcode));
}
