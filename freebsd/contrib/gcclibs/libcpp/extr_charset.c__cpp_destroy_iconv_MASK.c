
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ func; int cd; } ;
struct TYPE_5__ {scalar_t__ func; int cd; } ;
struct TYPE_7__ {TYPE_2__ wide_cset_desc; TYPE_1__ narrow_cset_desc; } ;
typedef TYPE_3__ cpp_reader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

void
FUNC_1 (cpp_reader *VAR_2)
{
  if (VAR_0)
    {
      if (VAR_2->narrow_cset_desc.func == VAR_1)
 FUNC_0 (VAR_2->narrow_cset_desc.cd);
      if (VAR_2->wide_cset_desc.func == VAR_1)
 FUNC_0 (VAR_2->wide_cset_desc.cd);
    }
}
