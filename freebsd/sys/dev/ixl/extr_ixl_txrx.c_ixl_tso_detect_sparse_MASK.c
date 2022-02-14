
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* if_pkt_info_t ;
struct TYPE_6__ {int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_5__ {int ipi_tso_segsz; int ipi_ehdrlen; int ipi_ip_hlen; int ipi_tcp_hlen; int ipi_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(bus_dma_segment_t *VAR_1, int VAR_2, if_pkt_info_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_2 <= VAR_0-2)
  return (0);
 VAR_8 = VAR_3->ipi_tso_segsz;
 VAR_5 = VAR_4 = 0;

 VAR_7 = VAR_3->ipi_ehdrlen + VAR_3->ipi_ip_hlen + VAR_3->ipi_tcp_hlen;
 VAR_10 = VAR_3->ipi_len - VAR_7;

 VAR_6 = 0;
 VAR_5 = VAR_1[0].ds_len;
 while (VAR_7 > 0) {
  VAR_4++;
  if (VAR_4 > VAR_0 - 2)
   return (1);
  if (VAR_5 == 0) {
   VAR_6++;
   if (FUNC_0(VAR_6 == VAR_2))
    return (1);

   VAR_5 = VAR_1[VAR_6].ds_len;
  }
  VAR_9 = FUNC_1(VAR_5, VAR_7);
  VAR_5 -= VAR_9;
  VAR_7 -= VAR_9;

 }
 while (VAR_10 > 0) {
  VAR_8 = VAR_3->ipi_tso_segsz;
  while (VAR_8 > 0 && VAR_10 != 0) {
   VAR_4++;
   if (VAR_4 > VAR_0 - 2) {

    return (1);
   }
   if (VAR_5 == 0) {
    VAR_6++;
    if (FUNC_0(VAR_6 == VAR_2)) {

     return (1);
    }
    VAR_5 = VAR_1[VAR_6].ds_len;
   }
   VAR_9 = FUNC_1(VAR_5, VAR_8);
   VAR_8 -= VAR_9;
   VAR_5 -= VAR_9;
   VAR_10 -= VAR_9;

  }
  VAR_4 = 0;
 }

  return (0);
}
