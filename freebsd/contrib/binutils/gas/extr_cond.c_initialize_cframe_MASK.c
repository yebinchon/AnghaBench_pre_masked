
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; int file; } ;
struct conditional_frame {int dead_tree; int macro_nest; TYPE_2__* previous_cframe; TYPE_1__ if_file_line; } ;
struct TYPE_4__ {scalar_t__ ignoring; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct conditional_frame*,int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct conditional_frame *VAR_2)
{
  FUNC_1 (VAR_2, 0, sizeof (*VAR_2));
  FUNC_0 (&VAR_2->if_file_line.file,
     &VAR_2->if_file_line.line);
  VAR_2->previous_cframe = VAR_0;
  VAR_2->dead_tree = VAR_0 != ((void*)0) && VAR_0->ignoring;
  VAR_2->macro_nest = VAR_1;
}
