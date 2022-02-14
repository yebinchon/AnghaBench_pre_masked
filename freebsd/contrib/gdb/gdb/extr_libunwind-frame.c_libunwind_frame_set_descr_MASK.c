
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libunwind_descr {int accessors; int is_fpreg; int uw2gdb; int gdb2uw; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (int ) ;
 struct libunwind_descr* FUNC_1 (struct gdbarch*,int ) ;
 int VAR_0 ;
 struct libunwind_descr* FUNC_2 (struct gdbarch*) ;
 int FUNC_3 (struct gdbarch*,int ,struct libunwind_descr*) ;

void
FUNC_4 (struct gdbarch *VAR_1, struct libunwind_descr *VAR_2)
{
  struct libunwind_descr *VAR_3;

  FUNC_0 (VAR_1 != ((void*)0));

  VAR_3 = FUNC_1 (VAR_1, VAR_0);

  if (VAR_3 == ((void*)0))
    {

      VAR_3 = FUNC_2 (VAR_1);
      FUNC_3 (VAR_1, VAR_0, VAR_3);
    }


  VAR_3->gdb2uw = VAR_2->gdb2uw;
  VAR_3->uw2gdb = VAR_2->uw2gdb;
  VAR_3->is_fpreg = VAR_2->is_fpreg;
  VAR_3->accessors = VAR_2->accessors;
}
