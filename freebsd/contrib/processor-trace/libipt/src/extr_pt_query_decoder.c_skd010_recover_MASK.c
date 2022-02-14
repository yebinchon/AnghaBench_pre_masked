
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_time_cal {int dummy; } ;
struct pt_time {int dummy; } ;
struct pt_last_ip {int dummy; } ;
struct TYPE_6__ {scalar_t__ begin; } ;
struct pt_query_decoder {int enabled; struct pt_event* event; struct pt_time_cal tcal; struct pt_time time; struct pt_last_ip ip; TYPE_3__ config; scalar_t__ pos; int evq; } ;
struct pt_packet_ip {int dummy; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_5__ {TYPE_1__ overflow; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 struct pt_event* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pt_last_ip*) ;
 int FUNC_2 (struct pt_last_ip*,struct pt_packet_ip const*,TYPE_3__*) ;
 int FUNC_3 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pt_query_decoder *VAR_3,
     const struct pt_packet_ip *VAR_4,
     const struct pt_time_cal *VAR_5,
     const struct pt_time *VAR_6, uint64_t VAR_7)
{
 struct pt_last_ip VAR_8;
 struct pt_event *VAR_9;
 int VAR_10;

 if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_1;


 VAR_8 = VAR_3->ip;


 VAR_10 = FUNC_2(&VAR_8, VAR_4, &VAR_3->config);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_9 = FUNC_0(&VAR_3->evq);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->type = VAR_2;


 VAR_10 = FUNC_1(&VAR_9->variant.overflow.ip, &VAR_8);
 if (VAR_10 < 0)
  return -VAR_0;


 VAR_3->pos = VAR_3->config.begin + VAR_7;


 VAR_3->enabled = 1;
 VAR_3->ip = VAR_8;

 VAR_3->time = *VAR_6;
 VAR_3->tcal = *VAR_5;


 VAR_3->event = VAR_9;

 return FUNC_3(VAR_9, VAR_3);
}
