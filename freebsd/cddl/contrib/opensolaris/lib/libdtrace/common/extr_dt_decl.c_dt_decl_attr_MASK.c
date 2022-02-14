
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ushort_t ;
struct TYPE_9__ {int dd_attr; } ;
typedef TYPE_2__ dt_decl_t ;
struct TYPE_8__ {TYPE_2__* ds_decl; } ;
struct TYPE_10__ {TYPE_1__ pcb_dstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_3__* VAR_3 ;

dt_decl_t *
FUNC_3(ushort_t VAR_4)
{
 dt_decl_t *VAR_5 = VAR_3->pcb_dstack.ds_decl;

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(FUNC_0(VAR_0, ((void*)0)));
  VAR_5->dd_attr = VAR_4;
  return (VAR_5);
 }

 if (VAR_4 == VAR_1 && (VAR_5->dd_attr & VAR_1)) {
  VAR_5->dd_attr &= ~VAR_1;
  VAR_4 = VAR_2;
 }

 VAR_5->dd_attr |= VAR_4;
 return (FUNC_1(VAR_5));
}
