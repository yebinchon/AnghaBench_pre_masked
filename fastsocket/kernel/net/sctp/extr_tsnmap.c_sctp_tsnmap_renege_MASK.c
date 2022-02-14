
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sctp_tsnmap {int tsn_map; scalar_t__ base_tsn; scalar_t__ len; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct sctp_tsnmap *VAR_0, __u32 VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_1, VAR_0->base_tsn))
  return;

 if (!FUNC_0(VAR_1, VAR_0->base_tsn + VAR_0->len))
  return;

 VAR_2 = VAR_1 - VAR_0->base_tsn;


 FUNC_1(VAR_2, VAR_0->tsn_map);
}
