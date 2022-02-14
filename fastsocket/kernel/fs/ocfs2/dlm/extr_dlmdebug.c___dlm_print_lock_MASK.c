
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int refcount; } ;
struct TYPE_3__ {int cookie; int node; int convert_type; int type; } ;
struct dlm_lock {int spinlock; scalar_t__ unlock_pending; scalar_t__ cancel_pending; scalar_t__ lock_pending; scalar_t__ convert_pending; scalar_t__ bast_pending; int bast_list; scalar_t__ ast_pending; int ast_list; TYPE_2__ lock_refs; TYPE_1__ ml; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ,char,char,char,char,char,char,char,char) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dlm_lock *VAR_0)
{
 FUNC_6(&VAR_0->spinlock);

 FUNC_5("    type=%d, conv=%d, node=%u, cookie=%u:%llu, "
        "ref=%u, ast=(empty=%c,pend=%c), bast=(empty=%c,pend=%c), "
        "pending=(conv=%c,lock=%c,cancel=%c,unlock=%c)\n",
        VAR_0->ml.type, VAR_0->ml.convert_type, VAR_0->ml.node,
        FUNC_2(FUNC_1(VAR_0->ml.cookie)),
        FUNC_3(FUNC_1(VAR_0->ml.cookie)),
        FUNC_0(&VAR_0->lock_refs.refcount),
        (FUNC_4(&VAR_0->ast_list) ? 'y' : 'n'),
        (VAR_0->ast_pending ? 'y' : 'n'),
        (FUNC_4(&VAR_0->bast_list) ? 'y' : 'n'),
        (VAR_0->bast_pending ? 'y' : 'n'),
        (VAR_0->convert_pending ? 'y' : 'n'),
        (VAR_0->lock_pending ? 'y' : 'n'),
        (VAR_0->cancel_pending ? 'y' : 'n'),
        (VAR_0->unlock_pending ? 'y' : 'n'));

 FUNC_7(&VAR_0->spinlock);
}
