
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int displacement; scalar_t__ is_direct; } ;
struct TYPE_4__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_insn {scalar_t__ iclass; scalar_t__ size; scalar_t__ ip; } ;
struct pt_block_decoder {int retstack; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct pt_block_decoder *VAR_2,
      const struct pt_insn *VAR_3,
      const struct pt_insn_ext *VAR_4)
{
 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_0;

 if (VAR_3->iclass != VAR_1)
  return 0;




 if (VAR_4->variant.branch.is_direct &&
     !VAR_4->variant.branch.displacement)
  return 0;

 return FUNC_0(&VAR_2->retstack, VAR_3->ip + VAR_3->size);
}
