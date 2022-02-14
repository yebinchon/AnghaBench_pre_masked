
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int skb; int chunk_end; TYPE_1__* chunk_hdr; } ;
struct iovec {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int length; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,struct iovec*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct sctp_chunk *VAR_0, int VAR_1, int VAR_2,
     struct iovec *VAR_3)
{
 __u8 *VAR_4;
 int VAR_5 = 0;


 VAR_4 = FUNC_3(VAR_0->skb, VAR_2);


 if ((VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_1, VAR_2)))
  goto out;


 VAR_0->chunk_hdr->length =
  FUNC_0(FUNC_2(VAR_0->chunk_hdr->length) + VAR_2);
 VAR_0->chunk_end = FUNC_4(VAR_0->skb);

out:
 return VAR_5;
}
