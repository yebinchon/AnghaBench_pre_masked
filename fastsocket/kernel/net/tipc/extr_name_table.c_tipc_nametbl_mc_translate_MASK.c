
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sub_seq {scalar_t__ lower; scalar_t__ cluster_list_size; scalar_t__ node_list_size; struct publication* node_list; } ;
struct publication {scalar_t__ scope; struct publication* node_list_next; int ref; } ;
struct port_list {int dummy; } ;
struct name_seq {int first_free; int lock; struct sub_seq* sseqs; } ;


 int FUNC_0 (struct name_seq*,scalar_t__) ;
 struct name_seq* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct port_list*,int ) ;

int FUNC_7(u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
         struct port_list *VAR_5)
{
 struct name_seq *VAR_6;
 struct sub_seq *VAR_7;
 struct sub_seq *VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_0);
 VAR_6 = FUNC_1(VAR_1);
 if (!VAR_6)
  goto exit;

 FUNC_4(&VAR_6->lock);

 VAR_7 = VAR_6->sseqs + FUNC_0(VAR_6, VAR_2);
 VAR_8 = VAR_6->sseqs + VAR_6->first_free;
 for (; VAR_7 != VAR_8; VAR_7++) {
  struct publication *VAR_10;

  if (VAR_7->lower > VAR_3)
   break;

  VAR_10 = VAR_7->node_list;
  if (VAR_10) {
   do {
    if (VAR_10->scope <= VAR_4)
     FUNC_6(VAR_5, VAR_10->ref);
    VAR_10 = VAR_10->node_list_next;
   } while (VAR_10 != VAR_7->node_list);
  }

  if (VAR_7->cluster_list_size != VAR_7->node_list_size)
   VAR_9 = 1;
 }

 FUNC_5(&VAR_6->lock);
exit:
 FUNC_3(&VAR_0);
 return VAR_9;
}
