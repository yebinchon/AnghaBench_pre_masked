
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int skb; int chunk_end; TYPE_1__* chunk_hdr; } ;
struct TYPE_2__ {int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,void const*,int) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

void *FUNC_7(struct sctp_chunk *VAR_0, int VAR_1, const void *VAR_2)
{
 void *VAR_3;
 void *VAR_4;
 int VAR_5 = FUNC_4(VAR_0->chunk_hdr->length);
 int VAR_6 = FUNC_0(VAR_5) - VAR_5;

 VAR_4 = FUNC_5(VAR_0->skb, VAR_6);
 VAR_3 = FUNC_5(VAR_0->skb, VAR_1);

 FUNC_3(VAR_4, 0, VAR_6);
 FUNC_2(VAR_3, VAR_2, VAR_1);


 VAR_0->chunk_hdr->length = FUNC_1(VAR_5 + VAR_6 + VAR_1);
 VAR_0->chunk_end = FUNC_6(VAR_0->skb);

 return VAR_3;
}
