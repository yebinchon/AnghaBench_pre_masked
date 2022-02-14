
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symtab_and_line {TYPE_2__* symtab; } ;
struct frame_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* objfile; int filename; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 struct frame_info* VAR_0 ;
 int FUNC_1 (struct frame_info*,struct symtab_and_line*) ;
 struct frame_info* FUNC_2 (struct frame_info*) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (struct frame_info *VAR_1, int VAR_2)
{
  struct symtab_and_line VAR_3;

  for (; VAR_1 != ((void*)0); VAR_2 += 1, VAR_1 = FUNC_2 (VAR_1))
    {
      FUNC_1 (VAR_1, &VAR_3);
      if (VAR_3.symtab && !FUNC_3 (VAR_3.symtab->filename))
 {
   VAR_0 = VAR_1;
   break;
 }
    }

  return VAR_2;
}
