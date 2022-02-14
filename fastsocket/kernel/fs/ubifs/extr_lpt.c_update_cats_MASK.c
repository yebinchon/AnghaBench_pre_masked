
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {TYPE_1__* lprops; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int flags; int lnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_2, struct ubifs_pnode *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  int VAR_5 = VAR_3->lprops[VAR_4].flags & VAR_0;
  int VAR_6 = VAR_3->lprops[VAR_4].lnum;

  if (!VAR_6)
   return;
  FUNC_0(VAR_2, &VAR_3->lprops[VAR_4], VAR_5);
 }
}
