
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niter_desc {int dummy; } ;
struct loop {scalar_t__ aux; } ;



__attribute__((used)) static inline struct niter_desc *
FUNC_0 (struct loop *VAR_0)
{
  return (struct niter_desc *) VAR_0->aux;
}
