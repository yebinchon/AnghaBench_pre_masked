
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_5__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_7__ {int qcnt; int qmax; int borrows; int delays; TYPE_2__ drop_cnt; TYPE_1__ xmit_cnt; } ;
struct TYPE_8__ {TYPE_3__ cbq_stats; } ;
struct queue_stats {int avgn; int avg_packets; int avg_bytes; TYPE_4__ data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 char* FUNC_1 (int) ;

void
FUNC_2(struct queue_stats VAR_1)
{
 FUNC_0("  [ pkts: %10llu  bytes: %10llu  "
     "dropped pkts: %6llu bytes: %6llu ]\n",
     (unsigned long long)VAR_1.data.cbq_stats.xmit_cnt.packets,
     (unsigned long long)VAR_1.data.cbq_stats.xmit_cnt.bytes,
     (unsigned long long)VAR_1.data.cbq_stats.drop_cnt.packets,
     (unsigned long long)VAR_1.data.cbq_stats.drop_cnt.bytes);
 FUNC_0("  [ qlength: %3d/%3d  borrows: %6u  suspends: %6u ]\n",
     VAR_1.data.cbq_stats.qcnt, VAR_1.data.cbq_stats.qmax,
     VAR_1.data.cbq_stats.borrows, VAR_1.data.cbq_stats.delays);

 if (VAR_1.avgn < 2)
  return;

 FUNC_0("  [ measured: %7.1f packets/s, %s/s ]\n",
     VAR_1.avg_packets / VAR_0,
     FUNC_1((8 * VAR_1.avg_bytes) / VAR_0));
}
