
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_link_hash_table {int emit_stack_syms; scalar_t__ stack_analysis; } ;
struct bfd_link_info {TYPE_1__* callbacks; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int (* einfo ) (char*) ;} ;


 int FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 (int *,struct bfd_link_info*,int ) ;
 struct spu_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_0, struct bfd_link_info *VAR_1)
{
  struct spu_link_hash_table *VAR_2 = FUNC_2 (VAR_1);

  if (VAR_2->stack_analysis
      && !FUNC_1 (VAR_0, VAR_1, VAR_2->emit_stack_syms))
    VAR_1->callbacks->einfo ("%X%P: stack analysis error: %E\n");

  return FUNC_0 (VAR_0, VAR_1);
}
