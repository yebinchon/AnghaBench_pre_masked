
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int s_block; int s_inode; TYPE_1__* list; } ;
struct TYPE_6__ {struct TYPE_6__* fts_link; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ DISPLAY ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (char) ;

void
FUNC_3(const DISPLAY *VAR_0)
{
 FTSENT *VAR_1;

 for (VAR_1 = VAR_0->list; VAR_1; VAR_1 = VAR_1->fts_link) {
  if (FUNC_0(VAR_1))
   continue;
  (void)FUNC_1(VAR_1, VAR_0->s_inode, VAR_0->s_block);
  (void)FUNC_2('\n');
 }
}
