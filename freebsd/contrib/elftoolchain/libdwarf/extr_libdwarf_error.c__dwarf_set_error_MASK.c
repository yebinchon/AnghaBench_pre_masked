
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int errarg; int (* errhand ) (TYPE_1__,int ) ;} ;
struct TYPE_9__ {int dbg_errarg; int (* dbg_errhand ) (TYPE_1__,int ) ;} ;
struct TYPE_8__ {int err_error; int err_elferror; char const* err_func; int err_line; char* err_msg; } ;
typedef TYPE_1__ Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_1__,int ) ;
 int FUNC_1 (TYPE_1__,int ) ;

void
FUNC_2(Dwarf_Debug VAR_1, Dwarf_Error *VAR_2, int VAR_3,
    int VAR_4, const char *VAR_5, int VAR_6)
{
 Dwarf_Error VAR_7;

 VAR_7.err_error = VAR_3;
 VAR_7.err_elferror = VAR_4;
 VAR_7.err_func = VAR_5;
 VAR_7.err_line = VAR_6;
 VAR_7.err_msg[0] = '\0';
 if (VAR_2)
  *VAR_2 = VAR_7;
 else if (VAR_1 && VAR_1->dbg_errhand)
  VAR_1->dbg_errhand(VAR_7, VAR_1->dbg_errarg);
 else if (VAR_0.errhand)
  VAR_0.errhand(VAR_7, VAR_0.errarg);


}
