
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t iov_len; int * iov_base; } ;
struct xdr_stream {TYPE_1__ scratch; int * p; scalar_t__ end; } ;
typedef int __be32 ;


 int * FUNC_0 (struct xdr_stream*,size_t) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (struct xdr_stream*) ;

__attribute__((used)) static __be32 *FUNC_3(struct xdr_stream *VAR_0, size_t VAR_1)
{
 __be32 *VAR_2;
 void *VAR_3 = VAR_0->scratch.iov_base;
 size_t VAR_4 = (char *)VAR_0->end - (char *)VAR_0->p;

 if (VAR_1 > VAR_0->scratch.iov_len)
  return ((void*)0);
 FUNC_1(VAR_3, VAR_0->p, VAR_4);
 VAR_3 += VAR_4;
 VAR_1 -= VAR_4;
 if (!FUNC_2(VAR_0))
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_3, VAR_2, VAR_1);
 return VAR_0->scratch.iov_base;
}
