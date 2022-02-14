
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_3__ {unsigned int page_shift; unsigned int eq_s_qpp; unsigned int iq_s_qpp; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;
typedef enum t4_bar2_qtype { ____Placeholder_t4_bar2_qtype } t4_bar2_qtype ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct adapter*) ;

int FUNC_1(struct adapter *VAR_3,
        unsigned int VAR_4,
        enum t4_bar2_qtype VAR_5,
        int VAR_6,
        u64 *VAR_7,
        unsigned int *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 u64 VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;




 if (!VAR_6 && FUNC_0(VAR_3))
  return -VAR_0;



 VAR_9 = VAR_3->params.sge.page_shift;
 VAR_10 = 1 << VAR_9;



 VAR_11 = (VAR_5 == VAR_2
       ? VAR_3->params.sge.eq_s_qpp
       : VAR_3->params.sge.iq_s_qpp);
 VAR_12 = (1 << VAR_11) - 1;






 VAR_13 = ((u64)(VAR_4 >> VAR_11) << VAR_9);
 VAR_15 = VAR_4 & VAR_12;
 VAR_16 = VAR_15 * VAR_1;
 VAR_14 = VAR_13;
 VAR_17 = (VAR_16 < VAR_10);
 if (VAR_17) {
  VAR_14 += VAR_16;
  VAR_15 = 0;
 }

 *VAR_7 = VAR_14;
 *VAR_8 = VAR_15;
 return 0;
}
