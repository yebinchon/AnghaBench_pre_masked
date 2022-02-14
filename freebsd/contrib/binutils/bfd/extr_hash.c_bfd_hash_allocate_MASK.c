
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc {int dummy; } ;
struct bfd_hash_table {scalar_t__ memory; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct objalloc*,unsigned int) ;

void *
FUNC_2 (struct bfd_hash_table *VAR_1,
     unsigned int VAR_2)
{
  void * VAR_3;

  VAR_3 = FUNC_1 ((struct objalloc *) VAR_1->memory, VAR_2);
  if (VAR_3 == ((void*)0) && VAR_2 != 0)
    FUNC_0 (VAR_0);
  return VAR_3;
}
