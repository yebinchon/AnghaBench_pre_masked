
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_shared_key {TYPE_1__* key; } ;
struct sctp_auth_bytes {scalar_t__ len; scalar_t__ data; } ;
typedef int gfp_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ data; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 struct sctp_auth_bytes* FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_2(
   struct sctp_shared_key *VAR_0,
   struct sctp_auth_bytes *VAR_1,
   struct sctp_auth_bytes *VAR_2,
   gfp_t VAR_3)
{
 struct sctp_auth_bytes *VAR_4;
 __u32 VAR_5 = 0;
 __u32 VAR_6;

 VAR_6 = VAR_1->len + VAR_2->len;
 if (VAR_0->key)
  VAR_6 += VAR_0->key->len;

 VAR_4 = FUNC_1(VAR_6, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_0->key) {
  FUNC_0(VAR_4->data, VAR_0->key->data, VAR_0->key->len);
  VAR_5 += VAR_0->key->len;
 }

 FUNC_0(VAR_4->data + VAR_5, VAR_1->data, VAR_1->len);
 VAR_5 += VAR_1->len;

 FUNC_0(VAR_4->data + VAR_5, VAR_2->data, VAR_2->len);

 return VAR_4;
}
