
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ value; } ;
struct aout_symbol {int other; TYPE_4__ symbol; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_6__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_5__ {scalar_t__ vma; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_3 (const void * VAR_0, const void * VAR_1)
{
  struct aout_symbol ** VAR_2 = (struct aout_symbol **) VAR_0;
  struct aout_symbol ** VAR_3 = (struct aout_symbol **) VAR_1;
  asection *VAR_4;
  bfd_vma VAR_5, VAR_6;


  VAR_4 = FUNC_2 (&(*VAR_2)->symbol);
  VAR_5 = VAR_4->output_section->vma + VAR_4->output_offset + (*VAR_2)->symbol.value;
  VAR_4 = FUNC_2 (&(*VAR_3)->symbol);
  VAR_6 = VAR_4->output_section->vma + VAR_4->output_offset + (*VAR_3)->symbol.value;

  if (VAR_5 < VAR_6)
    return -1;
  if (VAR_5 > VAR_6)
    return 1;



  if (FUNC_0 ((*VAR_2)->other) || FUNC_1 ((*VAR_3)->other))
    return -1;
  if (FUNC_1 ((*VAR_2)->other) || FUNC_0 ((*VAR_3)->other))
    return 1;

  return 0;
}
