
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_cache {scalar_t__ ptr; } ;
typedef scalar_t__ PTR ;



__attribute__((used)) static int
FUNC_0 (const PTR VAR_0, const PTR VAR_1)
{
  struct ar_cache *VAR_2 = (struct ar_cache *) VAR_0;
  struct ar_cache *VAR_3 = (struct ar_cache *) VAR_1;
  return VAR_2->ptr == VAR_3->ptr;
}
