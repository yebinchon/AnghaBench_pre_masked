
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stab_info {int includes; int strings; TYPE_1__* stabstr; } ;
typedef int file_ptr ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ filepos; } ;
struct TYPE_3__ {scalar_t__ output_offset; TYPE_2__* output_section; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;

bfd_boolean
FUNC_7 (bfd *VAR_3, struct stab_info *VAR_4)
{
  if (FUNC_5 (VAR_4->stabstr->output_section))

    return VAR_2;

  FUNC_0 ((VAR_4->stabstr->output_offset
        + FUNC_3 (VAR_4->strings))
       <= VAR_4->stabstr->output_section->size);

  if (FUNC_6 (VAR_3,
  (file_ptr) (VAR_4->stabstr->output_section->filepos
       + VAR_4->stabstr->output_offset),
  VAR_1) != 0)
    return VAR_0;

  if (! FUNC_1 (VAR_3, VAR_4->strings))
    return VAR_0;


  FUNC_2 (VAR_4->strings);
  FUNC_4 (&VAR_4->includes);

  return VAR_2;
}
