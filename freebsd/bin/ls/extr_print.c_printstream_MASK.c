
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_block; int s_inode; TYPE_1__* list; } ;
struct TYPE_5__ {scalar_t__ fts_number; struct TYPE_5__* fts_link; int fts_name; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ DISPLAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_4(const DISPLAY *VAR_2)
{
 FTSENT *VAR_3;
 int VAR_4;

 for (VAR_3 = VAR_2->list, VAR_4 = 0; VAR_3; VAR_3 = VAR_3->fts_link) {
  if (VAR_3->fts_number == VAR_0)
   continue;

  if (FUNC_3(VAR_3->fts_name) + VAR_4 +
      (VAR_3->fts_link ? 2 : 0) >= (unsigned)VAR_1) {
   FUNC_2('\n');
   VAR_4 = 0;
  }
  VAR_4 += FUNC_0(VAR_3, VAR_2->s_inode, VAR_2->s_block);
  if (VAR_3->fts_link) {
   FUNC_1(", ");
   VAR_4 += 2;
  }
 }
 if (VAR_4)
  FUNC_2('\n');
}
