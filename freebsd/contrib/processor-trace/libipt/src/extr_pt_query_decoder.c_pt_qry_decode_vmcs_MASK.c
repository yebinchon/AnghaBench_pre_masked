
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_query_decoder {int pos; struct pt_event* event; int evq; int config; } ;
struct pt_packet_vmcs {int base; } ;
struct TYPE_5__ {int base; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_6__ {TYPE_2__ vmcs; TYPE_1__ async_vmcs; } ;
struct pt_event {TYPE_3__ variant; void* type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 struct pt_event* FUNC_1 (int *,int ,int ) ;
 struct pt_event* FUNC_2 (int *) ;
 int FUNC_3 (struct pt_packet_vmcs*,int,int *) ;
 int FUNC_4 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

int FUNC_5(struct pt_query_decoder *VAR_7)
{
 struct pt_packet_vmcs VAR_8;
 struct pt_event *VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_3(&VAR_8, VAR_7->pos, &VAR_7->config);
 if (VAR_10 < 0)
  return VAR_10;






 VAR_9 = FUNC_1(&VAR_7->evq, VAR_0, VAR_4);
 if (VAR_9) {
  struct pt_event *VAR_12;

  VAR_12 = FUNC_0(&VAR_7->evq, VAR_0);
  if (!VAR_12)
   return -VAR_2;

  *VAR_12 = *VAR_9;

  VAR_9->type = VAR_5;
  VAR_9->variant.async_vmcs.base = VAR_8.base;

  VAR_7->pos += VAR_10;
  return 0;
 }




 VAR_9 = FUNC_1(&VAR_7->evq, VAR_0, VAR_3);
 if (VAR_9) {
  VAR_9 = FUNC_0(&VAR_7->evq, VAR_0);
  if (!VAR_9)
   return -VAR_2;

  VAR_9->type = VAR_5;
  VAR_9->variant.async_vmcs.base = VAR_8.base;

  VAR_7->pos += VAR_10;
  return 0;
 }




 VAR_9 = FUNC_2(&VAR_7->evq);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->type = VAR_6;
 VAR_9->variant.vmcs.base = VAR_8.base;

 VAR_7->event = VAR_9;

 VAR_11 = FUNC_4(VAR_9, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_7->pos += VAR_10;
 return 0;
}
