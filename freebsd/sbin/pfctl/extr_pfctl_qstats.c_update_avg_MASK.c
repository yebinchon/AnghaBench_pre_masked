
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ u_int64_t ;
struct TYPE_13__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_14__ {TYPE_10__ cl_xmitcnt; } ;
struct TYPE_23__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_24__ {TYPE_8__ xmit_cnt; } ;
struct TYPE_21__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_22__ {TYPE_6__ xmit_cnt; } ;
struct TYPE_19__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_20__ {TYPE_4__ xmitcnt; } ;
struct TYPE_17__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_18__ {TYPE_2__ xmit_cnt; } ;
struct TYPE_15__ {TYPE_11__ codel_stats; TYPE_9__ fairq_stats; TYPE_7__ hfsc_stats; TYPE_5__ priq_stats; TYPE_3__ cbq_stats; } ;
struct queue_stats {int avgn; scalar_t__ prev_bytes; scalar_t__ prev_packets; int avg_bytes; int avg_packets; TYPE_12__ data; } ;
struct TYPE_16__ {scalar_t__ qid; int scheduler; } ;
struct pf_altq_node {TYPE_1__ altq; struct queue_stats qstats; } ;







 int VAR_0 ;

void
FUNC_0(struct pf_altq_node *VAR_1)
{
 struct queue_stats *VAR_2;
 u_int64_t VAR_3, VAR_4;
 int VAR_5;

 if (VAR_1->altq.qid == 0 && VAR_1->altq.scheduler != 131)
  return;

 VAR_2 = &VAR_1->qstats;
 VAR_5 = VAR_2->avgn;

 switch (VAR_1->altq.scheduler) {
 case 132:
  VAR_3 = VAR_2->data.cbq_stats.xmit_cnt.bytes;
  VAR_4 = VAR_2->data.cbq_stats.xmit_cnt.packets;
  break;
 case 128:
  VAR_3 = VAR_2->data.priq_stats.xmitcnt.bytes;
  VAR_4 = VAR_2->data.priq_stats.xmitcnt.packets;
  break;
 case 129:
  VAR_3 = VAR_2->data.hfsc_stats.xmit_cnt.bytes;
  VAR_4 = VAR_2->data.hfsc_stats.xmit_cnt.packets;
  break;
 case 130:
  VAR_3 = VAR_2->data.fairq_stats.xmit_cnt.bytes;
  VAR_4 = VAR_2->data.fairq_stats.xmit_cnt.packets;
  break;
 case 131:
  VAR_3 = VAR_2->data.codel_stats.cl_xmitcnt.bytes;
  VAR_4 = VAR_2->data.codel_stats.cl_xmitcnt.packets;
  break;
 default:
  VAR_3 = 0;
  VAR_4 = 0;
  break;
 }

 if (VAR_5 == 0) {
  VAR_2->prev_bytes = VAR_3;
  VAR_2->prev_packets = VAR_4;
  VAR_2->avgn++;
  return;
 }

 if (VAR_3 >= VAR_2->prev_bytes)
  VAR_2->avg_bytes = ((VAR_2->avg_bytes * (VAR_5 - 1)) +
      (VAR_3 - VAR_2->prev_bytes)) / VAR_5;

 if (VAR_4 >= VAR_2->prev_packets)
  VAR_2->avg_packets = ((VAR_2->avg_packets * (VAR_5 - 1)) +
      (VAR_4 - VAR_2->prev_packets)) / VAR_5;

 VAR_2->prev_bytes = VAR_3;
 VAR_2->prev_packets = VAR_4;
 if (VAR_5 < VAR_0)
  VAR_2->avgn++;
}
