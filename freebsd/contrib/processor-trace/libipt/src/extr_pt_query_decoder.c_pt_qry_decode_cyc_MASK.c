
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ skd007; } ;
struct pt_config {TYPE_1__ errata; } ;
struct pt_query_decoder {int pos; int tcal; int time; struct pt_config config; } ;
struct pt_packet_cyc {int dummy; } ;


 int FUNC_0 (struct pt_query_decoder*,struct pt_packet_cyc*,int) ;
 int FUNC_1 (struct pt_packet_cyc*,int,struct pt_config*) ;
 int FUNC_2 (int *,int *,struct pt_packet_cyc*,struct pt_config*) ;
 int VAR_0 ;

int FUNC_3(struct pt_query_decoder *VAR_1)
{
 struct pt_packet_cyc VAR_2;
 struct pt_config *VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = &VAR_1->config;

 VAR_4 = FUNC_1(&VAR_2, VAR_1->pos, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->errata.skd007) {
  VAR_5 = FUNC_0(VAR_1, &VAR_2, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;




  if (VAR_5) {



   VAR_1->pos += 1;
   return 0;
  }
 }

 VAR_5 = FUNC_2(&VAR_1->time, &VAR_1->tcal,
       &VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->pos += VAR_4;
 return 0;
}
