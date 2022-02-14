
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sctp_tsnmap {unsigned long base_tsn; int len; int tsn_map; scalar_t__ cumulative_tsn_ack_point; scalar_t__ max_tsn_seen; } ;


 int FUNC_0 (int ,int ,unsigned long,int ) ;
 unsigned long FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sctp_tsnmap *VAR_0)
{
 u16 VAR_1;
 unsigned long VAR_2;


 VAR_1 = VAR_0->max_tsn_seen - VAR_0->cumulative_tsn_ack_point;
 VAR_2 = FUNC_1(VAR_0->tsn_map, VAR_1);
 if (!VAR_2)
  return;

 VAR_0->base_tsn += VAR_2;
 VAR_0->cumulative_tsn_ack_point += VAR_2;

 FUNC_0(VAR_0->tsn_map, VAR_0->tsn_map, VAR_2, VAR_0->len);
}
