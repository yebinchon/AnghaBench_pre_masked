
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_table {void* known_gates; void* mean_chain_len; int * copy_node; int * free_node; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ,struct mesh_table*) ;
 void* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mesh_table* FUNC_3 (int ) ;
 int FUNC_4 (struct mesh_table*,int) ;
 int VAR_7 ;

int FUNC_5(void)
{
 struct mesh_table *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->free_node = &VAR_5;
 VAR_8->copy_node = &VAR_4;
 VAR_8->mean_chain_len = VAR_3;
 VAR_8->known_gates = FUNC_2(sizeof(struct hlist_head), VAR_1);
 if (!VAR_8->known_gates) {
  VAR_10 = -VAR_0;
  goto free_path;
 }
 FUNC_0(VAR_8->known_gates);


 VAR_9 = FUNC_3(VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto free_path;
 }
 VAR_9->free_node = &VAR_5;
 VAR_9->copy_node = &VAR_4;
 VAR_9->mean_chain_len = VAR_3;
 VAR_9->known_gates = FUNC_2(sizeof(struct hlist_head), VAR_1);
 if (!VAR_9->known_gates) {
  VAR_10 = -VAR_0;
  goto free_mpp;
 }
 FUNC_0(VAR_9->known_gates);


 FUNC_1(VAR_6, VAR_8);
 FUNC_1(VAR_7, VAR_9);

 return 0;

free_mpp:
 FUNC_4(VAR_9, 1);
free_path:
 FUNC_4(VAR_8, 1);
 return VAR_10;
}
