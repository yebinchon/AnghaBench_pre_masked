
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int pos; int evq; int config; } ;
struct pt_packet_pip {int nr; int cr3; } ;
struct TYPE_3__ {int non_root; int cr3; } ;
struct TYPE_4__ {TYPE_1__ async_paging; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pt_packet_pip*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(struct pt_query_decoder *VAR_4)
{
 struct pt_packet_pip VAR_5;
 struct pt_event *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_1(&VAR_5, VAR_4->pos, &VAR_4->config);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_6 = FUNC_0(&VAR_4->evq, VAR_0);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->type = VAR_3;
 VAR_6->variant.async_paging.cr3 = VAR_5.cr3;
 VAR_6->variant.async_paging.non_root = VAR_5.nr;

 VAR_4->pos += VAR_7;
 return 0;
}
