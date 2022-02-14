
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
struct TYPE_10__ {char* dd_name; scalar_t__ dd_kind; } ;
typedef TYPE_2__ dt_decl_t ;
struct TYPE_9__ {scalar_t__ ds_class; TYPE_2__* ds_decl; } ;
struct TYPE_11__ {TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,char*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 TYPE_3__* VAR_5 ;

dt_decl_t *
FUNC_5(ushort_t VAR_6, char *VAR_7)
{
 dt_decl_t *VAR_8 = VAR_5->pcb_dstack.ds_decl;

 if (VAR_8 == ((void*)0))
  return (FUNC_3(FUNC_0(VAR_6, VAR_7)));
 if (VAR_8->dd_name != ((void*)0) && VAR_6 == VAR_0) {
  if (VAR_5->pcb_dstack.ds_class != VAR_2)
   return (FUNC_2(VAR_7));
  FUNC_4(VAR_4, "identifier redeclared: %s\n", VAR_7);
 }

 if (VAR_8->dd_name != ((void*)0) || VAR_8->dd_kind != VAR_1)
  FUNC_4(VAR_3, "invalid type combination\n");

 VAR_8->dd_kind = VAR_6;
 VAR_8->dd_name = VAR_7;

 return (FUNC_1(VAR_8));
}
