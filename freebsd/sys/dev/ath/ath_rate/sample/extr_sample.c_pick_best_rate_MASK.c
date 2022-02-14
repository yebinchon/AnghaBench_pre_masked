
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct sample_node {int ratemask; TYPE_2__** stats; } ;
struct TYPE_8__ {int ni_flags; } ;
struct ath_node {TYPE_3__ an_node; } ;
struct TYPE_9__ {TYPE_1__* info; } ;
struct TYPE_7__ {int average_tx_time; scalar_t__ total_packets; int ewma_pct; int successive_failures; int packets_acked; } ;
struct TYPE_6__ {scalar_t__ phy; } ;
typedef TYPE_4__ HAL_RATE_TABLE ;


 struct sample_node* FUNC_0 (struct ath_node*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline int
FUNC_1(struct ath_node *VAR_2, const HAL_RATE_TABLE *VAR_3,
    int VAR_4, int VAR_5)
{
 struct sample_node *VAR_6 = FUNC_0(VAR_2);
        int VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10;
 int VAR_11, VAR_12, VAR_13;

        VAR_7 = 0;
        VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_10 = VAR_6->ratemask, VAR_11 = 0; VAR_10 != 0; VAR_10 >>= 1, VAR_11++) {
  if ((VAR_10 & 1) == 0)
   continue;


  if ((VAR_2->an_node.ni_flags & VAR_0) &&
      (VAR_3->info[VAR_11].phy != VAR_1)) {
   continue;
  }

  VAR_12 = VAR_6->stats[VAR_4][VAR_11].average_tx_time;
  if (VAR_12 <= 0 ||
      (VAR_5 &&
       !VAR_6->stats[VAR_4][VAR_11].packets_acked))
   continue;


  if (VAR_6->stats[VAR_4][VAR_11].total_packets > 0) {
   VAR_13 = VAR_6->stats[VAR_4][VAR_11].ewma_pct;
  } else {

   VAR_13 = 95;
  }


  if (VAR_6->stats[VAR_4][VAR_11].successive_failures > 3)
   continue;
  if (VAR_2->an_node.ni_flags & VAR_0) {
   if (VAR_9 > (VAR_13 + 50))
    continue;
  }





  if (! (VAR_2->an_node.ni_flags & VAR_0)) {
   if (VAR_8 == 0 || VAR_12 <= VAR_8) {
    VAR_8 = VAR_12;
    VAR_7 = VAR_11;
    VAR_9 = VAR_13;
   }
  }






  if (VAR_2->an_node.ni_flags & VAR_0) {
   if (VAR_8 == 0 || (VAR_12 * 8 <= VAR_8 * 10)) {
    VAR_8 = VAR_12;
    VAR_7 = VAR_11;
    VAR_9 = VAR_13;
   }
  }
        }
        return (VAR_8 ? VAR_7 : -1);
}
