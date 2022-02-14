
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_query_decoder {int pos; int evq; struct pt_event* event; int config; } ;
struct pt_packet_pip {int nr; int cr3; } ;
struct TYPE_5__ {int non_root; int cr3; } ;
struct TYPE_4__ {int non_root; int cr3; } ;
struct TYPE_6__ {TYPE_2__ async_paging; TYPE_1__ paging; } ;
struct pt_event {TYPE_3__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 struct pt_event* FUNC_1 (int *,int ,int ) ;
 struct pt_event* FUNC_2 (int *) ;
 int FUNC_3 (struct pt_packet_pip*,int,int *) ;
 int FUNC_4 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct pt_query_decoder *VAR_6)
{
 struct pt_packet_pip VAR_7;
 struct pt_event *VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_6)
  return -VAR_1;

 VAR_9 = FUNC_3(&VAR_7, VAR_6->pos, &VAR_6->config);
 if (VAR_9 < 0)
  return VAR_9;




 VAR_8 = FUNC_1(&VAR_6->evq, VAR_0, VAR_3);
 if (!VAR_8) {
  VAR_8 = FUNC_2(&VAR_6->evq);
  if (!VAR_8)
   return -VAR_1;
  VAR_8->type = VAR_5;
  VAR_8->variant.paging.cr3 = VAR_7.cr3;
  VAR_8->variant.paging.non_root = VAR_7.nr;

  VAR_6->event = VAR_8;
 } else {
  VAR_8 = FUNC_0(&VAR_6->evq, VAR_0);
  if (!VAR_8)
   return -VAR_2;

  VAR_8->type = VAR_4;
  VAR_8->variant.async_paging.cr3 = VAR_7.cr3;
  VAR_8->variant.async_paging.non_root = VAR_7.nr;
 }

 VAR_10 = FUNC_4(VAR_8, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_6->pos += VAR_9;
 return 0;
}
