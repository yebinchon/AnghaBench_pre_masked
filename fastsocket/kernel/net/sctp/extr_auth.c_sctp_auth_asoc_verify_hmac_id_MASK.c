
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct sctp_hmac_algo_param {int hmac_ids; TYPE_2__ param_hdr; } ;
struct TYPE_3__ {scalar_t__ auth_hmacs; } ;
struct sctp_association {TYPE_1__ c; } ;
typedef int sctp_paramhdr_t ;
typedef int __u16 ;
typedef int __be16 ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(const struct sctp_association *VAR_0,
        __be16 VAR_1)
{
 struct sctp_hmac_algo_param *VAR_2;
 __u16 VAR_3;

 if (!VAR_0)
  return 0;

 VAR_2 = (struct sctp_hmac_algo_param *)VAR_0->c.auth_hmacs;
 VAR_3 = (FUNC_1(VAR_2->param_hdr.length) - sizeof(sctp_paramhdr_t)) >> 1;

 return FUNC_0(VAR_2->hmac_ids, VAR_3, VAR_1);
}
