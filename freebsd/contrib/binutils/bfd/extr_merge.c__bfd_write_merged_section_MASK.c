
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sec_merge_sec_info {int * first_str; } ;
typedef scalar_t__ file_ptr ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_4__ {scalar_t__ filepos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;

bfd_boolean
FUNC_2 (bfd *VAR_3, asection *VAR_4, void *VAR_5)
{
  struct sec_merge_sec_info *VAR_6;
  file_ptr VAR_7;

  VAR_6 = (struct sec_merge_sec_info *) VAR_5;

  if (VAR_6->first_str == ((void*)0))
    return VAR_2;

  VAR_7 = VAR_4->output_section->filepos + VAR_4->output_offset;
  if (FUNC_0 (VAR_3, VAR_7, VAR_1) != 0)
    return VAR_0;

  if (! FUNC_1 (VAR_3, VAR_6->first_str))
    return VAR_0;

  return VAR_2;
}
