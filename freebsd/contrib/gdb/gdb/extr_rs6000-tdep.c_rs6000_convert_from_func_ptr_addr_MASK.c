
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct obj_section {TYPE_1__* the_bfd_section; } ;
struct gdbarch {int dummy; } ;
struct TYPE_4__ {int wordsize; } ;
struct TYPE_3__ {int flags; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 struct obj_section* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2,
       CORE_ADDR VAR_3,
       struct target_ops *VAR_4)
{
  struct obj_section *VAR_5;

  VAR_5 = FUNC_0 (VAR_3);
  if (VAR_5 && VAR_5->the_bfd_section->flags & VAR_0)
    return VAR_3;


  return FUNC_2 (VAR_3, FUNC_1 (VAR_1)->wordsize);
}
