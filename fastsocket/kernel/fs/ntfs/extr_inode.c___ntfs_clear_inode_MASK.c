
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; int * rl; } ;
struct TYPE_5__ {int lock; int * rl; } ;
struct TYPE_7__ {scalar_t__ name; scalar_t__ name_len; TYPE_2__ attr_list_rl; int * attr_list; TYPE_1__ runlist; } ;
typedef TYPE_3__ ntfs_inode ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(ntfs_inode *VAR_1)
{

 FUNC_1(&VAR_1->runlist.lock);
 if (VAR_1->runlist.rl) {
  FUNC_3(VAR_1->runlist.rl);
  VAR_1->runlist.rl = ((void*)0);
 }
 FUNC_4(&VAR_1->runlist.lock);

 if (VAR_1->attr_list) {
  FUNC_3(VAR_1->attr_list);
  VAR_1->attr_list = ((void*)0);
 }

 FUNC_1(&VAR_1->attr_list_rl.lock);
 if (VAR_1->attr_list_rl.rl) {
  FUNC_3(VAR_1->attr_list_rl.rl);
  VAR_1->attr_list_rl.rl = ((void*)0);
 }
 FUNC_4(&VAR_1->attr_list_rl.lock);

 if (VAR_1->name_len && VAR_1->name != VAR_0) {

  FUNC_0(!VAR_1->name);
  FUNC_2(VAR_1->name);
 }
}
