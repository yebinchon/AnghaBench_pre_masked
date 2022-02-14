
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_chanpkt_hdr {scalar_t__ cph_hlen; scalar_t__ cph_tlen; int cph_xactid; } ;
struct vmbus_channel {int ch_rxbr; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vmbus_channel*,char*,scalar_t__,...) ;
 int FUNC_4 (int *,struct vmbus_chanpkt_hdr*,int) ;
 int FUNC_5 (int *,void*,int,int) ;

int
FUNC_6(struct vmbus_channel *VAR_3, void *VAR_4, int *VAR_5,
    uint64_t *VAR_6)
{
 struct vmbus_chanpkt_hdr VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_4(&VAR_3->ch_rxbr, &VAR_7, sizeof(VAR_7));
 if (VAR_8)
  return (VAR_8);

 if (FUNC_2(VAR_7.cph_hlen < VAR_2)) {
  FUNC_3(VAR_3, "invalid hlen %u\n", VAR_7.cph_hlen);

  return (VAR_0);
 }
 if (FUNC_2(VAR_7.cph_hlen > VAR_7.cph_tlen)) {
  FUNC_3(VAR_3, "invalid hlen %u and tlen %u\n",
      VAR_7.cph_hlen, VAR_7.cph_tlen);

  return (VAR_0);
 }

 VAR_10 = FUNC_1(VAR_7.cph_hlen);
 VAR_9 = FUNC_1(VAR_7.cph_tlen) - VAR_10;

 if (*VAR_5 < VAR_9) {

  *VAR_5 = VAR_9;
  return (VAR_1);
 }

 *VAR_6 = VAR_7.cph_xactid;
 *VAR_5 = VAR_9;


 VAR_8 = FUNC_5(&VAR_3->ch_rxbr, VAR_4, VAR_9, VAR_10);
 FUNC_0(!VAR_8, ("vmbus_rxbr_read failed"));

 return (0);
}
