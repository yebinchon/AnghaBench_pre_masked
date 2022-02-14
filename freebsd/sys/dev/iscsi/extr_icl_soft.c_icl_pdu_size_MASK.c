
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_bhs {int dummy; } ;
struct icl_pdu {scalar_t__ ip_ahs_len; int ip_data_len; TYPE_1__* ip_conn; } ;
struct TYPE_2__ {scalar_t__ ic_data_crc32c; scalar_t__ ic_header_crc32c; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct icl_pdu const*) ;

__attribute__((used)) static size_t
FUNC_2(const struct icl_pdu *VAR_2)
{
 size_t VAR_3;

 FUNC_0(VAR_2->ip_ahs_len == 0, ("responding with AHS"));

 VAR_3 = sizeof(struct iscsi_bhs) + VAR_2->ip_data_len +
     FUNC_1(VAR_2);
 if (VAR_2->ip_conn->ic_header_crc32c)
  VAR_3 += VAR_1;
 if (VAR_2->ip_data_len != 0 && VAR_2->ip_conn->ic_data_crc32c)
  VAR_3 += VAR_0;

 return (VAR_3);
}
