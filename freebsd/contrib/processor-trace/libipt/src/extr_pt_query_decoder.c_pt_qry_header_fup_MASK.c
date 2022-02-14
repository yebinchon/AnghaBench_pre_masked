
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bdm70; } ;
struct TYPE_6__ {TYPE_1__ errata; } ;
struct pt_query_decoder {int enabled; TYPE_2__ config; int ip; int pos; } ;
struct pt_packet_ip {scalar_t__ ipc; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct pt_packet_ip*,TYPE_2__*) ;
 int FUNC_2 (struct pt_packet_ip*,int ,TYPE_2__*) ;
 int FUNC_3 (struct pt_query_decoder*,int) ;
 int VAR_1 ;

int FUNC_4(struct pt_query_decoder *VAR_2)
{
 struct pt_packet_ip VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_2(&VAR_3, VAR_2->pos, &VAR_2->config);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2->config.errata.bdm70 && !VAR_2->enabled) {
  VAR_4 = FUNC_0(VAR_2->pos + VAR_5,
           &VAR_2->config);
  if (VAR_4 < 0)
   return VAR_4;

  if (VAR_4)
   return FUNC_3(VAR_2, VAR_5);
 }

 VAR_4 = FUNC_1(&VAR_2->ip, &VAR_3, &VAR_2->config);
 if (VAR_4 < 0)
  return VAR_4;


 if (VAR_3.ipc != VAR_0)
  VAR_2->enabled = 1;

 return FUNC_3(VAR_2, VAR_5);
}
