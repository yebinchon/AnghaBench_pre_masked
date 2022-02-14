
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pc_domain; scalar_t__ pc_bus; scalar_t__ pc_dev; scalar_t__ pc_func; } ;
struct pci_match_conf {int flags; scalar_t__ pc_vendor; scalar_t__ pc_device; scalar_t__ pc_class; scalar_t__ pd_unit; int pd_name; TYPE_2__ pc_sel; } ;
struct TYPE_3__ {scalar_t__ pc_domain; scalar_t__ pc_bus; scalar_t__ pc_dev; scalar_t__ pc_func; } ;
struct pci_conf {scalar_t__ pc_vendor; scalar_t__ pc_device; scalar_t__ pc_class; scalar_t__ pd_unit; int pd_name; TYPE_1__ pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct pci_match_conf *VAR_10, int VAR_11,
        struct pci_conf *VAR_12)
{
 int VAR_13;

 if ((VAR_10 == ((void*)0)) || (VAR_12 == ((void*)0)) || (VAR_11 <= 0))
  return(1);

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {



  if (VAR_10[VAR_13].flags == VAR_9)
   continue;






  if (((VAR_10[VAR_13].flags & VAR_4) != 0)
   && (VAR_12->pc_sel.pc_domain !=
   VAR_10[VAR_13].pc_sel.pc_domain))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_0) != 0)
   && (VAR_12->pc_sel.pc_bus != VAR_10[VAR_13].pc_sel.pc_bus))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_2) != 0)
   && (VAR_12->pc_sel.pc_dev != VAR_10[VAR_13].pc_sel.pc_dev))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_5) != 0)
   && (VAR_12->pc_sel.pc_func != VAR_10[VAR_13].pc_sel.pc_func))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_8) != 0)
   && (VAR_12->pc_vendor != VAR_10[VAR_13].pc_vendor))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_3) != 0)
   && (VAR_12->pc_device != VAR_10[VAR_13].pc_device))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_1) != 0)
   && (VAR_12->pc_class != VAR_10[VAR_13].pc_class))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_7) != 0)
   && (VAR_12->pd_unit != VAR_10[VAR_13].pd_unit))
   continue;

  if (((VAR_10[VAR_13].flags & VAR_6) != 0)
   && (FUNC_0(VAR_10[VAR_13].pd_name, VAR_12->pd_name,
        sizeof(VAR_12->pd_name)) != 0))
   continue;

  return(0);
 }

 return(1);
}
