
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_instr_queue {int pkt_in_done; int max_count; int octeon_read_index; int inst_cnt_reg; struct octeon_device* oct_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_device*,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lio_instr_queue *VAR_1)
{
 struct octeon_device *VAR_2 = VAR_1->oct_dev;
 uint32_t VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5 = FUNC_0(VAR_2, VAR_1->inst_cnt_reg);

 VAR_4 = VAR_5 - VAR_1->pkt_in_done;
 VAR_1->pkt_in_done = VAR_5;






 VAR_3 = (VAR_1->octeon_read_index +
     ((uint32_t)(VAR_4 & VAR_0))) %
     VAR_1->max_count;

 return (VAR_3);
}
