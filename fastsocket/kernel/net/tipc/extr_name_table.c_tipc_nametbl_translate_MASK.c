
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sub_seq {struct publication* zone_list; struct publication* cluster_list; struct publication* node_list; } ;
struct publication {struct publication* zone_list_next; struct publication* cluster_list_next; struct publication* node_list_next; int node; int ref; } ;
struct name_seq {int lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct sub_seq* FUNC_3 (struct name_seq*,int ) ;
 struct name_seq* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int) ;

u32 FUNC_10(u32 VAR_2, u32 VAR_3, u32 *VAR_4)
{
 struct sub_seq *VAR_5;
 struct publication *VAR_6 = ((void*)0);
 struct name_seq *VAR_7;
 u32 VAR_8;

 if (!FUNC_1(*VAR_4, VAR_1))
  return 0;

 FUNC_5(&VAR_0);
 VAR_7 = FUNC_4(VAR_2);
 if (FUNC_9(!VAR_7))
  goto not_found;
 VAR_5 = FUNC_3(VAR_7, VAR_3);
 if (FUNC_9(!VAR_5))
  goto not_found;
 FUNC_7(&VAR_7->lock);


 if (FUNC_2(!*VAR_4)) {
  VAR_6 = VAR_5->node_list;
  if (VAR_6) {
   VAR_5->node_list = VAR_6->node_list_next;
found:
   VAR_8 = VAR_6->ref;
   *VAR_4 = VAR_6->node;
   FUNC_8(&VAR_7->lock);
   FUNC_6(&VAR_0);
   return VAR_8;
  }
  VAR_6 = VAR_5->cluster_list;
  if (VAR_6) {
   VAR_5->cluster_list = VAR_6->cluster_list_next;
   goto found;
  }
  VAR_6 = VAR_5->zone_list;
  if (VAR_6) {
   VAR_5->zone_list = VAR_6->zone_list_next;
   goto found;
  }
 }


 else if (*VAR_4 == VAR_1) {
  VAR_6 = VAR_5->node_list;
  if (VAR_6) {
   VAR_5->node_list = VAR_6->node_list_next;
   goto found;
  }
 } else if (FUNC_0(*VAR_4)) {
  VAR_6 = VAR_5->cluster_list;
  if (VAR_6) {
   VAR_5->cluster_list = VAR_6->cluster_list_next;
   goto found;
  }
 } else {
  VAR_6 = VAR_5->zone_list;
  if (VAR_6) {
   VAR_5->zone_list = VAR_6->zone_list_next;
   goto found;
  }
 }
 FUNC_8(&VAR_7->lock);
not_found:
 *VAR_4 = 0;
 FUNC_6(&VAR_0);
 return 0;
}
