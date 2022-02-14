
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct icl_pdu {TYPE_1__* ip_bhs; } ;
struct icl_conn {int dummy; } ;
struct TYPE_2__ {scalar_t__* bhs_data_segment_len; } ;



size_t
FUNC_0(struct icl_conn *VAR_0,
      const struct icl_pdu *VAR_1)
{
 uint32_t VAR_2 = 0;

 VAR_2 += VAR_1->ip_bhs->bhs_data_segment_len[0];
 VAR_2 <<= 8;
 VAR_2 += VAR_1->ip_bhs->bhs_data_segment_len[1];
 VAR_2 <<= 8;
 VAR_2 += VAR_1->ip_bhs->bhs_data_segment_len[2];

 return (VAR_2);
}
