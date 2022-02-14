
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct symtab {int language; } ;
struct TYPE_2__ {scalar_t__ entry_point; scalar_t__ deprecated_entry_file_lowpc; scalar_t__ deprecated_entry_file_highpc; } ;
struct objfile {TYPE_1__ ei; } ;
struct dieinfo {scalar_t__ at_low_pc; scalar_t__ at_high_pc; int die_length; int at_comp_dir; int at_name; int * at_producer; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cleanup*) ;
 struct symtab* FUNC_2 (scalar_t__,struct objfile*,int ) ;
 int VAR_2 ;
 struct type** VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 struct cleanup* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct type**,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (char*,char*,struct objfile*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct dieinfo*) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 struct type** VAR_6 ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11 (struct dieinfo *VAR_7, char *VAR_8, char *VAR_9,
   struct objfile *VAR_10)
{
  struct cleanup *VAR_11;
  struct symtab *VAR_12;

  if (VAR_10->ei.entry_point >= VAR_7->at_low_pc &&
      VAR_10->ei.entry_point < VAR_7->at_high_pc)
    {
      VAR_10->ei.deprecated_entry_file_lowpc = VAR_7->at_low_pc;
      VAR_10->ei.deprecated_entry_file_highpc = VAR_7->at_high_pc;
    }
  FUNC_8 (VAR_7);
  if (VAR_7->at_producer != ((void*)0))
    {
      FUNC_3 (VAR_7->at_producer);
    }
  VAR_5 = (VAR_9 - VAR_8) / 4;
  VAR_6 = (struct type **) FUNC_10 (VAR_5 * sizeof (struct type *));
  VAR_11 = FUNC_4 (VAR_2, ((void*)0));
  FUNC_5 (VAR_6, 0, VAR_5 * sizeof (struct type *));
  FUNC_5 (VAR_3, 0, VAR_0 * sizeof (struct type *));
  FUNC_9 (VAR_7->at_name, VAR_7->at_comp_dir, VAR_7->at_low_pc);
  FUNC_7 ("DWARF 1");
  FUNC_0 (VAR_4);
  FUNC_6 (VAR_8 + VAR_7->die_length, VAR_9, VAR_10);

  VAR_12 = FUNC_2 (VAR_7->at_high_pc, VAR_10, 0);
  if (VAR_12 != ((void*)0))
    {
      VAR_12->language = VAR_1;
    }
  FUNC_1 (VAR_11);
}
