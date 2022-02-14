
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {TYPE_1__* buf; int nwords; } ;
struct TYPE_2__ {int page_len; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,unsigned int) ;
 int FUNC_2 (struct xdr_stream*,int ,unsigned int) ;

void FUNC_3(struct xdr_stream *VAR_0, unsigned int VAR_1)
{
 FUNC_1(VAR_0, VAR_1);




 FUNC_2(VAR_0, 0, VAR_1);
 VAR_0->nwords += FUNC_0(VAR_0->buf->page_len);
}
