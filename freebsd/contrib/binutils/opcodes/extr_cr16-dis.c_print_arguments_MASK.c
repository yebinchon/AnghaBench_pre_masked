
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*) ;} ;
struct TYPE_4__ {int nargs; int * arg; } ;
typedef TYPE_1__ ins ;
typedef int bfd_vma ;
struct TYPE_5__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *,int ,struct disassemble_info*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6 (ins *VAR_3, bfd_vma VAR_4, struct disassemble_info *VAR_5)
{
  int VAR_6;


  if ((FUNC_0 ("pop")
       || (FUNC_0 ("popret")
    || (FUNC_0 ("push"))))
      && VAR_3->nargs == 1)
    {
      VAR_5->fprintf_func (VAR_5->stream, "RA");
      return;
    }

  for (VAR_6 = 0; VAR_6 < VAR_3->nargs; VAR_6++)
    {
      VAR_2 = VAR_6;


      if ((FUNC_0 ("bal")) && (VAR_6 == 0) && VAR_1->size == 2)
        {
          VAR_5->fprintf_func (VAR_5->stream, "(ra),");
          continue;
        }

      if ((VAR_0) && (VAR_6 == 2))
        VAR_5->fprintf_func (VAR_5->stream, "RA");
      else
        FUNC_1 (&VAR_3->arg[VAR_6], VAR_4, VAR_5);

      if ((VAR_6 != VAR_3->nargs - 1) && (!FUNC_0 ("b")))
        VAR_5->fprintf_func (VAR_5->stream, ",");
    }
}
