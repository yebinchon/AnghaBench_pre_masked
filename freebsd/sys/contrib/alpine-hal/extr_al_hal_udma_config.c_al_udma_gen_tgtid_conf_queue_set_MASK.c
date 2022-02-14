
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {size_t cfg_tgtaddr_0; size_t cfg_tgtaddr_2; size_t cfg_tgtaddr_1; size_t cfg_tgtaddr_3; } ;
struct TYPE_6__ {size_t cfg_tgtid_0; size_t cfg_tgtid_1; size_t cfg_tgtid_3; size_t cfg_tgtid_2; size_t cfg_tgtid_4; } ;
struct TYPE_8__ {TYPE_2__ tgtaddr; TYPE_1__ tgtid; } ;
struct unit_regs {TYPE_3__ gen; } ;
struct al_udma_gen_tgtid_conf {TYPE_5__* rx_q_conf; TYPE_4__* tx_q_conf; } ;
struct TYPE_10__ {size_t desc_en; size_t queue_en; size_t tgtid; size_t tgtaddr; } ;
struct TYPE_9__ {size_t desc_en; size_t queue_en; size_t tgtid; size_t tgtaddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (size_t*,size_t,size_t) ;
 unsigned int FUNC_6 (struct unit_regs*) ;

void FUNC_7(
 struct unit_regs *VAR_7,
 struct al_udma_gen_tgtid_conf *VAR_8,
 uint32_t VAR_9)
{
 uint32_t *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 unsigned int VAR_14;

 FUNC_4(VAR_9 < VAR_2);
 VAR_14 = FUNC_6(VAR_7);


 FUNC_5(&VAR_7->gen.tgtid.cfg_tgtid_0,
   (VAR_8->tx_q_conf[VAR_9].desc_en << VAR_9) <<
   VAR_5,
   (VAR_8->tx_q_conf[VAR_9].desc_en << VAR_9) <<
   VAR_5);


 FUNC_5(&VAR_7->gen.tgtid.cfg_tgtid_0,
   (VAR_8->tx_q_conf[VAR_9].queue_en << VAR_9) <<
   VAR_6,
   (VAR_8->tx_q_conf[VAR_9].queue_en << VAR_9) <<
   VAR_6);


 FUNC_5(&VAR_7->gen.tgtid.cfg_tgtid_0,
   (VAR_8->rx_q_conf[VAR_9].desc_en << VAR_9) <<
   VAR_3,
   (VAR_8->rx_q_conf[VAR_9].desc_en << VAR_9) <<
   VAR_3);


 FUNC_5(&VAR_7->gen.tgtid.cfg_tgtid_0,
   (VAR_8->rx_q_conf[VAR_9].queue_en << VAR_9) <<
   VAR_4,
   (VAR_8->rx_q_conf[VAR_9].queue_en << VAR_9) <<
   VAR_4);

 switch (VAR_9) {
 case 0:
 case 1:
  VAR_10 = &VAR_7->gen.tgtid.cfg_tgtid_1;
  VAR_11 = &VAR_7->gen.tgtid.cfg_tgtid_3;
  VAR_12 = &VAR_7->gen.tgtaddr.cfg_tgtaddr_0;
  VAR_13 = &VAR_7->gen.tgtaddr.cfg_tgtaddr_2;
  break;
 case 2:
 case 3:
  VAR_10 = &VAR_7->gen.tgtid.cfg_tgtid_2;
  VAR_11 = &VAR_7->gen.tgtid.cfg_tgtid_4;
  VAR_12 = &VAR_7->gen.tgtaddr.cfg_tgtaddr_1;
  VAR_13 = &VAR_7->gen.tgtaddr.cfg_tgtaddr_3;
  break;
 default:
  FUNC_4(VAR_0);
  return;
 }

 FUNC_5(VAR_10,
  FUNC_2(VAR_9),
  VAR_8->tx_q_conf[VAR_9].tgtid << FUNC_3(VAR_9));

 FUNC_5(VAR_11,
  FUNC_2(VAR_9),
  VAR_8->rx_q_conf[VAR_9].tgtid << FUNC_3(VAR_9));

 if (VAR_14 >= VAR_1) {
  FUNC_5(VAR_12,
   FUNC_0(VAR_9),
   VAR_8->tx_q_conf[VAR_9].tgtaddr << FUNC_1(VAR_9));

  FUNC_5(VAR_13,
   FUNC_0(VAR_9),
   VAR_8->rx_q_conf[VAR_9].tgtaddr << FUNC_1(VAR_9));
 }
}
