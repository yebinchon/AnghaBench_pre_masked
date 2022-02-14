
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spu_link_hash_table {scalar_t__ num_overlays; int non_overlay_stubs; } ;
typedef int bfd_boolean ;
struct TYPE_5__ {int * output_section; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {scalar_t__ ovl_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (const char *VAR_2,
  asection *VAR_3,
  asection *VAR_4,
  struct spu_link_hash_table *VAR_5,
  bfd_boolean VAR_6)
{
  if (VAR_5->num_overlays == 0)
    return VAR_0;

  if (VAR_3 == ((void*)0)
      || VAR_3->output_section == ((void*)0)
      || FUNC_0 (VAR_3->output_section) == ((void*)0))
    return VAR_0;




  if (FUNC_1 (VAR_2, "setjmp", 6) == 0
      && (VAR_2[6] == '\0' || VAR_2[6] == '@'))
    return VAR_1;


  if (FUNC_0 (VAR_3->output_section)->ovl_index == 0
      && !VAR_5->non_overlay_stubs)
    return VAR_0;



  if (FUNC_0 (VAR_3->output_section)->ovl_index
       != FUNC_0 (VAR_4->output_section)->ovl_index)
    return VAR_1;



  return !VAR_6;
}
