
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dp_upcall_info {scalar_t__ pid; } ;
struct dp_stats_percpu {int sync; int n_lost; } ;
struct datapath {int stats_percpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct datapath*) ;
 int FUNC_1 (struct datapath*) ;
 int FUNC_2 (int ,int,struct sk_buff*,struct dp_upcall_info const*) ;
 int FUNC_3 (int ,int,struct sk_buff*,struct dp_upcall_info const*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct dp_stats_percpu* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct datapath *VAR_2, struct sk_buff *VAR_3,
    const struct dp_upcall_info *VAR_4)
{
 struct dp_stats_percpu *VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_4->pid == 0) {
  VAR_7 = -VAR_1;
  goto err;
 }

 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err;
 }

 if (!FUNC_4(VAR_3))
  VAR_7 = FUNC_3(FUNC_1(VAR_2), VAR_6, VAR_3, VAR_4);
 else
  VAR_7 = FUNC_2(FUNC_1(VAR_2), VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  goto err;

 return 0;

err:
 VAR_5 = FUNC_5(VAR_2->stats_percpu);

 FUNC_6(&VAR_5->sync);
 VAR_5->n_lost++;
 FUNC_7(&VAR_5->sync);

 return VAR_7;
}
