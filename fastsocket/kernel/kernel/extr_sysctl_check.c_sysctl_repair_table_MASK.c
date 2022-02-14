
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {scalar_t__ proc_handler; scalar_t__ strategy; scalar_t__ procname; scalar_t__ ctl_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ctl_table *VAR_2)
{





 if (VAR_2->ctl_name && VAR_2->procname &&
  (VAR_2->proc_handler == VAR_0) &&
  (!VAR_2->strategy)) {
  VAR_2->strategy = VAR_1;
 }
}
