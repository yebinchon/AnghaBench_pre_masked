
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rate_control_ref {TYPE_4__* ops; int priv; struct ieee80211_local* local; } ;
struct TYPE_8__ {TYPE_1__* wiphy; } ;
struct TYPE_7__ {struct dentry* rcdir; } ;
struct ieee80211_local {TYPE_3__ hw; TYPE_2__ debugfs; } ;
struct dentry {int dummy; } ;
struct TYPE_9__ {int (* alloc ) (TYPE_3__*,struct dentry*) ;} ;
struct TYPE_6__ {int debugfsdir; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct rate_control_ref*,int *) ;
 TYPE_4__* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct rate_control_ref*) ;
 struct rate_control_ref* FUNC_5 (int,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_3__*,struct dentry*) ;

__attribute__((used)) static struct rate_control_ref *FUNC_7(const char *VAR_2,
         struct ieee80211_local *VAR_3)
{
 struct dentry *VAR_4 = ((void*)0);
 struct rate_control_ref *VAR_5;

 VAR_5 = FUNC_5(sizeof(struct rate_control_ref), VAR_0);
 if (!VAR_5)
  goto fail_ref;
 VAR_5->local = VAR_3;
 VAR_5->ops = FUNC_2(VAR_2);
 if (!VAR_5->ops)
  goto fail_ops;







 VAR_5->priv = VAR_5->ops->alloc(&VAR_3->hw, VAR_4);
 if (!VAR_5->priv)
  goto fail_priv;
 return VAR_5;

fail_priv:
 FUNC_3(VAR_5->ops);
fail_ops:
 FUNC_4(VAR_5);
fail_ref:
 return ((void*)0);
}
