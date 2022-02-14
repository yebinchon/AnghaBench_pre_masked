
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {scalar_t__ cmt_state; int cmt_wq; } ;
struct TYPE_2__ {int pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_3)
{
 FUNC_0("pid %d goes sleep", VAR_2->pid);
 FUNC_1(VAR_3->cmt_wq, VAR_3->cmt_state != VAR_0 &&
         VAR_3->cmt_state != VAR_1);
 FUNC_0("commit finished, pid %d woke up", VAR_2->pid);
 return 0;
}
