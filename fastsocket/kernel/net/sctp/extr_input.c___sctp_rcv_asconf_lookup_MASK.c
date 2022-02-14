
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ param_hdr; } ;
union sctp_addr_param {TYPE_2__ v4; } ;
typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct sctp_af {int (* from_addr_param ) (union sctp_addr*,union sctp_addr_param*,int ,int ) ;} ;
struct sctp_addip_chunk {int dummy; } ;
typedef int sctp_chunkhdr_t ;
typedef struct sctp_addip_chunk sctp_addip_chunk_t ;
typedef int __be16 ;


 struct sctp_association* FUNC_0 (union sctp_addr const*,union sctp_addr*,struct sctp_transport**) ;
 int FUNC_1 (int ) ;
 struct sctp_af* FUNC_2 (int ) ;
 int FUNC_3 (union sctp_addr*,union sctp_addr_param*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sctp_association *FUNC_5(
     sctp_chunkhdr_t *VAR_0,
     const union sctp_addr *VAR_1,
     __be16 VAR_2,
     struct sctp_transport **VAR_3)
{
 sctp_addip_chunk_t *VAR_4 = (struct sctp_addip_chunk *)VAR_0;
 struct sctp_af *VAR_5;
 union sctp_addr_param *VAR_6;
 union sctp_addr VAR_7;


 VAR_6 = (union sctp_addr_param *)(VAR_4 + 1);

 VAR_5 = FUNC_2(FUNC_1(VAR_6->v4.param_hdr.type));
 if (FUNC_4(!VAR_5))
  return ((void*)0);

 VAR_5->from_addr_param(&VAR_7, VAR_6, VAR_2, 0);

 return FUNC_0(VAR_1, &VAR_7, VAR_3);
}
