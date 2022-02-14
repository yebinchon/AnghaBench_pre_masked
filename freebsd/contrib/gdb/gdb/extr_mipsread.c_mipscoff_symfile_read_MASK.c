
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ entry_point; scalar_t__ deprecated_entry_file_lowpc; void* deprecated_entry_file_highpc; } ;
struct objfile {TYPE_1__ ei; int section_offsets; int * obfd; } ;
struct minimal_symbol {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
typedef int asection ;
struct TYPE_6__ {int (* read_debug_info ) (int *,int *,int *) ;} ;
struct TYPE_8__ {TYPE_2__ debug_swap; } ;
struct TYPE_7__ {int debug_info; } ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (struct minimal_symbol*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cleanup*) ;
 TYPE_4__* FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct objfile*) ;
 struct minimal_symbol* FUNC_10 (scalar_t__) ;
 struct cleanup* FUNC_11 () ;
 int FUNC_12 (struct objfile*,TYPE_2__*,int *) ;
 int FUNC_13 (int ,struct objfile*) ;
 int FUNC_14 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_15 (struct objfile *VAR_2, int VAR_3)
{
  bfd *VAR_4 = VAR_2->obfd;
  struct cleanup *VAR_5;

  FUNC_8 ();
  VAR_5 = FUNC_11 ();




  if (!((*FUNC_5 (VAR_4)->debug_swap.read_debug_info)
 (VAR_4, (asection *) ((void*)0), &FUNC_6 (VAR_4)->debug_info)))
    FUNC_7 ("Error reading symbol table: %s", FUNC_2 (FUNC_3 ()));

  FUNC_12 (VAR_2, &FUNC_5 (VAR_4)->debug_swap,
    &FUNC_6 (VAR_4)->debug_info);



  FUNC_13 (VAR_2->section_offsets, VAR_2);




  FUNC_9 (VAR_2);





  if (VAR_3
      && VAR_2->ei.entry_point != VAR_1
      && VAR_2->ei.deprecated_entry_file_lowpc == VAR_0)
    {
      struct minimal_symbol *VAR_6;

      VAR_6 = FUNC_10 (VAR_2->ei.entry_point);
      if (VAR_6 && FUNC_0 (VAR_6 + 1))
 {
   VAR_2->ei.deprecated_entry_file_lowpc = FUNC_1 (VAR_6);
   VAR_2->ei.deprecated_entry_file_highpc = FUNC_1 (VAR_6 + 1);
 }
    }

  FUNC_4 (VAR_5);
}
