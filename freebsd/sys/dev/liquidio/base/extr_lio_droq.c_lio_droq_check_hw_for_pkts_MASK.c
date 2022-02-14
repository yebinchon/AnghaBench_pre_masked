
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_droq {int pkts_pending; scalar_t__ pkt_count; int pkts_sent_reg; struct octeon_device* oct_dev; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct octeon_device*,int ) ;

uint32_t
FUNC_2(struct lio_droq *VAR_0)
{
 struct octeon_device *VAR_1 = VAR_0->oct_dev;
 uint32_t VAR_2;
 uint32_t VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_0->pkts_sent_reg);

 VAR_2 = VAR_3 - VAR_0->pkt_count;
 VAR_0->pkt_count = VAR_3;


 if (VAR_2)
  FUNC_0(&VAR_0->pkts_pending, VAR_2);

 return (VAR_2);
}
