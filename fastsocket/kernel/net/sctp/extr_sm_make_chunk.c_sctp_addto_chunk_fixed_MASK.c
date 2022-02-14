
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int skb; } ;


 void* FUNC_0 (struct sctp_chunk*,int,void const*) ;
 int FUNC_1 (int ) ;

void *FUNC_2(struct sctp_chunk *VAR_0,
        int VAR_1, const void *VAR_2)
{
 if (FUNC_1(VAR_0->skb) >= VAR_1)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  return ((void*)0);
}
