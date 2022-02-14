
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sctp_auth_bytes {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_10__ {TYPE_1__ param_hdr; } ;
typedef TYPE_2__ sctp_random_param_t ;
typedef TYPE_2__ sctp_hmac_algo_param_t ;
typedef TYPE_2__ sctp_chunks_param_t ;
typedef int gfp_t ;
typedef scalar_t__ __u32 ;


 struct sctp_auth_bytes* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_3(
   sctp_random_param_t *VAR_0,
   sctp_chunks_param_t *VAR_1,
   sctp_hmac_algo_param_t *VAR_2,
   gfp_t VAR_3)
{
 struct sctp_auth_bytes *VAR_4;
 __u32 VAR_5;
 __u32 VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_0->param_hdr.length) + FUNC_2(VAR_2->param_hdr.length);
        if (VAR_1)
  VAR_5 += FUNC_2(VAR_1->param_hdr.length);

 VAR_4 = FUNC_0(sizeof(struct sctp_auth_bytes) + VAR_5, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->len = VAR_5;

 FUNC_1(VAR_4->data, VAR_0, FUNC_2(VAR_0->param_hdr.length));
 VAR_6 += FUNC_2(VAR_0->param_hdr.length);

 if (VAR_1) {
  FUNC_1(VAR_4->data + VAR_6, VAR_1,
   FUNC_2(VAR_1->param_hdr.length));
  VAR_6 += FUNC_2(VAR_1->param_hdr.length);
 }

 FUNC_1(VAR_4->data + VAR_6, VAR_2, FUNC_2(VAR_2->param_hdr.length));

 return VAR_4;
}
