
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_skb_reader {size_t count; size_t offset; int skb; } ;


 int FUNC_0 (int ,size_t,void*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;

size_t FUNC_2(struct xdr_skb_reader *VAR_0, void *VAR_1, size_t VAR_2)
{
 if (VAR_2 > VAR_0->count)
  VAR_2 = VAR_0->count;
 if (FUNC_1(FUNC_0(VAR_0->skb, VAR_0->offset, VAR_1, VAR_2)))
  return 0;
 VAR_0->count -= VAR_2;
 VAR_0->offset += VAR_2;
 return VAR_2;
}
