
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {scalar_t__ nwords; TYPE_1__* buf; } ;
struct TYPE_2__ {int len; } ;


 scalar_t__ FUNC_0 (int ) ;

unsigned int FUNC_1(const struct xdr_stream *VAR_0)
{
 return (unsigned int)(FUNC_0(VAR_0->buf->len) - VAR_0->nwords) << 2;
}
