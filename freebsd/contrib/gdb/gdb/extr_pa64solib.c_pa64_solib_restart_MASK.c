
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct so_list {struct so_list* next; } ;
struct TYPE_3__ {scalar_t__ data_base; } ;
struct TYPE_4__ {scalar_t__ dyninfo_sect; scalar_t__ dld_flags; TYPE_1__ dld_desc; scalar_t__ load_map_addr; scalar_t__ load_map; scalar_t__ dld_flags_addr; scalar_t__ have_read_dld_descriptor; scalar_t__ is_valid; } ;
typedef scalar_t__ LONGEST ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct so_list* VAR_3 ;
 int FUNC_1 (struct so_list*) ;

void
FUNC_2 (void)
{
  struct so_list *VAR_4 = VAR_3;



  FUNC_0 (0);


  while (VAR_4)
    {
      struct so_list *VAR_5 = VAR_4->next;
      FUNC_1 (VAR_4);
      VAR_4 = VAR_5;
    }
  VAR_3 = ((void*)0);

  VAR_2 = (LONGEST) 0;
  VAR_1 = 0;

  VAR_0.is_valid = 0;
  VAR_0.have_read_dld_descriptor = 0;
  VAR_0.dld_flags_addr = 0;
  VAR_0.load_map = 0;
  VAR_0.load_map_addr = 0;
  VAR_0.dld_desc.data_base = 0;
  VAR_0.dld_flags = 0;
  VAR_0.dyninfo_sect = 0;
}
