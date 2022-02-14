
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_lock_res {scalar_t__ l_namelen; int l_name; void* l_blocking; void* l_requested; void* l_level; int l_event; int l_lock; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct user_lock_res*,int ,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct user_lock_res *VAR_2,
       struct dentry *VAR_3)
{
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 FUNC_4(&VAR_2->l_lock);
 FUNC_1(&VAR_2->l_event);
 VAR_2->l_level = VAR_0;
 VAR_2->l_requested = VAR_0;
 VAR_2->l_blocking = VAR_0;


 FUNC_0(VAR_3->d_name.len >= VAR_1);

 FUNC_2(VAR_2->l_name,
        VAR_3->d_name.name,
        VAR_3->d_name.len);
 VAR_2->l_namelen = VAR_3->d_name.len;
}
