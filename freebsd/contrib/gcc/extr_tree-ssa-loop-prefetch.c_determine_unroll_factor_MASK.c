
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_niter_desc {int dummy; } ;
struct mem_ref_group {struct mem_ref* refs; struct mem_ref_group* next; } ;
struct mem_ref {unsigned int prefetch_mod; struct mem_ref* next; } ;
struct loop {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (struct mem_ref*) ;
 int FUNC_2 (struct loop*,struct tree_niter_desc*,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_3 (struct loop *VAR_3, struct mem_ref_group *VAR_4,
    unsigned VAR_5, unsigned VAR_6,
    struct tree_niter_desc *VAR_7)
{
  unsigned VAR_8, VAR_9, VAR_10;
  unsigned VAR_11, VAR_12, VAR_13;
  struct mem_ref_group *VAR_14;
  struct mem_ref *VAR_15;

  VAR_8 = FUNC_0 (VAR_1);


  VAR_9 = FUNC_0 (VAR_0) / VAR_6;
  if (VAR_9 <= 1)
    return 1;

  if (VAR_9 < VAR_8)
    VAR_8 = VAR_9;

  VAR_12 = 1;
  for (VAR_14 = VAR_4; VAR_14; VAR_14 = VAR_14->next)
    for (VAR_15 = VAR_14->refs; VAR_15; VAR_15 = VAR_15->next)
      if (FUNC_1 (VAR_15)
   && VAR_15->prefetch_mod > VAR_12)
 VAR_12 = VAR_15->prefetch_mod;



  VAR_10 = VAR_12;




  VAR_13 = ((VAR_5 + VAR_2 - 1)
    / VAR_2);


  if (VAR_10 < VAR_13)
    VAR_11 = VAR_13;
  else
    VAR_11 = VAR_10;
  if (VAR_11 > VAR_8)
    VAR_11 = VAR_8;

  if (!FUNC_2 (VAR_3, VAR_7, VAR_11))
    return 1;

  return VAR_11;
}
