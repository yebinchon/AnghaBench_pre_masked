
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {unsigned int nwords; int * p; int * end; } ;
typedef int __be32 ;


 unsigned int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static __be32 * FUNC_2(struct xdr_stream *VAR_0, size_t VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1);
 __be32 *VAR_3 = VAR_0->p;
 __be32 *VAR_4 = VAR_3 + VAR_2;

 if (FUNC_1(VAR_2 > VAR_0->nwords || VAR_4 > VAR_0->end || VAR_4 < VAR_3))
  return ((void*)0);
 VAR_0->p = VAR_4;
 VAR_0->nwords -= VAR_2;
 return VAR_3;
}
