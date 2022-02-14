
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dump_file_info {int flags; } ;
typedef enum tree_dump_index { ____Placeholder_tree_dump_index } tree_dump_index ;
struct TYPE_4__ {int static_pass_number; } ;
struct TYPE_3__ {int static_pass_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*) ;
 struct dump_file_info* FUNC_7 (int) ;
 char* FUNC_8 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11 (void)
{
  enum tree_dump_index VAR_12;
  struct dump_file_info *VAR_13;
  char *VAR_14;

  FUNC_10 (VAR_2);
  if (VAR_11 || VAR_5 || VAR_4)
    {
      VAR_3 = FUNC_0 (VAR_10.static_pass_number, ((void*)0));
      FUNC_4 ();
      if (VAR_3)
 FUNC_2 (VAR_10.static_pass_number, VAR_3);
    }

  if (VAR_8 > 0)
    {
      VAR_3 = FUNC_0 (VAR_9.static_pass_number, ((void*)0));
      if (VAR_3)
 {
   FUNC_1 (VAR_3);
          FUNC_2 (VAR_9.static_pass_number, VAR_3);
 }
    }


  if (VAR_6 != VAR_7)
    for (VAR_12 = VAR_1; (VAR_13 = FUNC_7 (VAR_12)) != ((void*)0); ++VAR_12)
      if (FUNC_3 (VAR_12)
   && (VAR_13->flags & VAR_0) != 0
   && (VAR_14 = FUNC_8 (VAR_12)) != ((void*)0))
 {
   FUNC_5 (VAR_14);
   FUNC_6 (VAR_14);
 }

  FUNC_9 (VAR_2);
}
