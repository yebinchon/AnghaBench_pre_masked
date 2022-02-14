
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int asection ;
struct TYPE_3__ {scalar_t__ text_base; scalar_t__ text_size; } ;
struct TYPE_4__ {TYPE_1__ dld_desc; int have_read_dld_descriptor; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * VAR_3 ;

int
FUNC_1 (int VAR_4, CORE_ADDR VAR_5)
{
  asection *VAR_6;

  if (VAR_3 == ((void*)0))
    return 0;

  if (!VAR_2.have_read_dld_descriptor)
    if (!FUNC_0 (&VAR_1, VAR_0))
      return 0;

  return (VAR_5 >= VAR_2.dld_desc.text_base
   && VAR_5 < VAR_2.dld_desc.text_base + VAR_2.dld_desc.text_size);
}
