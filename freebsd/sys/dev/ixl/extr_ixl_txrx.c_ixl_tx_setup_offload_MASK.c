
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct udphdr {int dummy; } ;
struct sctphdr {int dummy; } ;
struct ixl_tx_queue {int dummy; } ;
typedef TYPE_1__* if_pkt_info_t ;
struct TYPE_3__ {int ipi_etype; int ipi_csum_flags; int ipi_ehdrlen; int ipi_ip_hlen; int ipi_ipproto; int ipi_tcp_hlen; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct ixl_tx_queue *VAR_13,
    if_pkt_info_t VAR_14, u32 *VAR_15, u32 *VAR_16)
{
 switch (VAR_14->ipi_etype) {
  default:
   break;
 }

 *VAR_16 |= (VAR_14->ipi_ehdrlen >> 1) << VAR_8;
 *VAR_16 |= (VAR_14->ipi_ip_hlen >> 2) << VAR_6;

 switch (VAR_14->ipi_ipproto) {
  case 129:
   if (VAR_14->ipi_csum_flags & VAR_11) {
    *VAR_15 |= VAR_4;
    *VAR_16 |= (VAR_14->ipi_tcp_hlen >> 2) <<
        VAR_7;

    FUNC_0(VAR_14->ipi_tcp_hlen != 0);
   }
   break;
  case 128:
   if (VAR_14->ipi_csum_flags & VAR_12) {
    *VAR_15 |= VAR_5;
    *VAR_16 |= (sizeof(struct udphdr) >> 2) <<
        VAR_7;
   }
   break;
  case 130:
   if (VAR_14->ipi_csum_flags & VAR_10) {
    *VAR_15 |= VAR_3;
    *VAR_16 |= (sizeof(struct sctphdr) >> 2) <<
        VAR_7;
   }

  default:
   break;
 }
}
