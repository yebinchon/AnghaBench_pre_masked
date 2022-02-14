
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dlm_master_requery {int name; int namelen; int node_idx; } ;
struct TYPE_2__ {int len; int name; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {int key; int node_num; } ;
typedef int req ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct dlm_master_requery*,int ,int) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,struct dlm_master_requery*,int,scalar_t__,int*) ;

int FUNC_6(struct dlm_ctxt *VAR_3, struct dlm_lock_resource *VAR_4,
     u8 VAR_5, u8 *VAR_6)
{
 int VAR_7 = -VAR_2;
 struct dlm_master_requery VAR_8;
 int VAR_9 = VAR_0;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.node_idx = VAR_3->node_num;
 VAR_8.namelen = VAR_4->lockname.len;
 FUNC_1(VAR_8.name, VAR_4->lockname.name, VAR_4->lockname.len);

 VAR_7 = FUNC_5(VAR_1, VAR_3->key,
     &VAR_8, sizeof(VAR_8), VAR_5, &VAR_9);

 if (VAR_7 < 0)
  FUNC_4(VAR_7);
 else {
  FUNC_0(VAR_9 < 0);
  FUNC_0(VAR_9 > VAR_0);
  *VAR_6 = (u8) (VAR_9 & 0xff);
  FUNC_3(0, "node %u responded to master requery with %u\n",
     VAR_5, *VAR_6);
  VAR_7 = 0;
 }
 return VAR_7;
}
