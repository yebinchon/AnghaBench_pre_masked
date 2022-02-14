
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int dp_stmts; } ;
typedef TYPE_2__ dtrace_prog_t ;
struct TYPE_14__ {scalar_t__* dt_options; TYPE_2__* dt_errprog; void* dt_errarg; int * dt_errhdlr; } ;
typedef TYPE_3__ dtrace_hdl_t ;
typedef int dtrace_handle_err_f ;
struct TYPE_15__ {int dted_uarg; } ;
typedef TYPE_4__ dtrace_ecbdesc_t ;
struct TYPE_16__ {TYPE_1__* ds_desc; } ;
typedef TYPE_5__ dt_stmt_t ;
struct TYPE_12__ {TYPE_4__* dtsd_ecbdesc; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ,int ,int ,int ,int *) ;

int
FUNC_5(dtrace_hdl_t *VAR_7, dtrace_handle_err_f *VAR_8, void *VAR_9)
{
 dtrace_prog_t *VAR_10 = ((void*)0);
 dt_stmt_t *VAR_11;
 dtrace_ecbdesc_t *VAR_12;




 if (VAR_7->dt_errhdlr != ((void*)0))
  return (FUNC_2(VAR_7, VAR_5));






 if (VAR_7->dt_options[VAR_0] != VAR_1)
  goto out;

 if ((VAR_10 = FUNC_4(VAR_7, VAR_6,
     VAR_3, VAR_2, 0, ((void*)0))) == ((void*)0))
  return (FUNC_2(VAR_7, FUNC_3(VAR_7)));

 VAR_11 = FUNC_1(&VAR_10->dp_stmts);
 FUNC_0(VAR_11 != ((void*)0));

 VAR_12 = VAR_11->ds_desc->dtsd_ecbdesc;
 FUNC_0(VAR_12 != ((void*)0));
 VAR_12->dted_uarg = VAR_4;

out:
 VAR_7->dt_errhdlr = VAR_8;
 VAR_7->dt_errarg = VAR_9;
 VAR_7->dt_errprog = VAR_10;

 return (0);
}
