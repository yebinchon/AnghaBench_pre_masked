
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dts_name; int dts_object; } ;
typedef TYPE_2__ dtrace_syminfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_11__ {scalar_t__ dn_kind; TYPE_1__* dn_ident; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_13__ {int * pcb_hdl; } ;
struct TYPE_12__ {size_t st_size; } ;
struct TYPE_9__ {TYPE_2__* di_data; } ;
typedef TYPE_4__ GElf_Sym ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int *,int ,int ,TYPE_4__*,int *) ;
 TYPE_5__* VAR_1 ;

size_t
FUNC_2(const dt_node_t *VAR_2)
{
 dtrace_syminfo_t *VAR_3;
 GElf_Sym VAR_4;
 dtrace_hdl_t *VAR_5 = VAR_1->pcb_hdl;
 if (VAR_2->dn_kind != VAR_0)
  return (FUNC_0(VAR_2));

 VAR_3 = VAR_2->dn_ident->di_data;

 if (FUNC_1(VAR_5, VAR_3->dts_object,
     VAR_3->dts_name, &VAR_4, ((void*)0)) == -1)
  return (0);

 return (VAR_4.st_size);
}
