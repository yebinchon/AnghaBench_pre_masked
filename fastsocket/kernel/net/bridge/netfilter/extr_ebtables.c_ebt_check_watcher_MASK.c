
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {int targinfo; struct xt_target* target; struct ebt_entry* entryinfo; } ;
struct xt_target {int me; } ;
struct TYPE_2__ {struct xt_target* watcher; int name; } ;
struct ebt_entry_watcher {size_t watcher_size; int data; TYPE_1__ u; } ;
struct ebt_entry {int target_offset; int invflags; int ethproto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xt_target*) ;
 int VAR_3 ;
 int FUNC_1 (struct xt_target*) ;
 int FUNC_2 (int ) ;
 struct xt_target* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct xt_tgchk_param*,size_t,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_6(struct ebt_entry_watcher *VAR_4, struct xt_tgchk_param *VAR_5,
    unsigned int *VAR_6)
{
 const struct ebt_entry *VAR_7 = VAR_5->entryinfo;
 struct xt_target *VAR_8;
 size_t VAR_9 = ((char *)VAR_7 + VAR_7->target_offset) - (char *)VAR_4;
 int VAR_10;

 if (VAR_9 < sizeof(struct ebt_entry_watcher) ||
    VAR_9 - sizeof(struct ebt_entry_watcher) < VAR_4->watcher_size)
  return -VAR_1;

 VAR_8 = FUNC_3(
    FUNC_5(VAR_3, VAR_4->u.name, 0),
    "ebt_%s", VAR_4->u.name);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 if (VAR_8 == ((void*)0))
  return -VAR_2;
 VAR_4->u.watcher = VAR_8;

 VAR_5->target = VAR_8;
 VAR_5->targinfo = VAR_4->data;
 VAR_10 = FUNC_4(VAR_5, VAR_4->watcher_size,
       VAR_7->ethproto, VAR_7->invflags & VAR_0);
 if (VAR_10 < 0) {
  FUNC_2(VAR_8->me);
  return VAR_10;
 }

 (*VAR_6)++;
 return 0;
}
