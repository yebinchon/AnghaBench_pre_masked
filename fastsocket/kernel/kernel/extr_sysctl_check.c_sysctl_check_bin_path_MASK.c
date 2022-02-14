
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trans_ctl_table {scalar_t__ ctl_name; scalar_t__ procname; } ;
struct ctl_table {scalar_t__ ctl_name; int procname; } ;


 int FUNC_0 (char const**,struct ctl_table*,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct trans_ctl_table* FUNC_2 (struct ctl_table*) ;

__attribute__((used)) static void FUNC_3(struct ctl_table *VAR_0, const char **VAR_1)
{
 const struct trans_ctl_table *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_0->ctl_name && !VAR_2)
  FUNC_0(VAR_1, VAR_0, "Unknown sysctl binary path");
 if (VAR_2) {
  if (VAR_2->procname &&
      (!VAR_0->procname ||
       (FUNC_1(VAR_0->procname, VAR_2->procname) != 0)))
   FUNC_0(VAR_1, VAR_0, "procname does not match binary path procname");

  if (VAR_2->ctl_name && VAR_0->ctl_name &&
      (VAR_0->ctl_name != VAR_2->ctl_name))
   FUNC_0(VAR_1, VAR_0, "ctl_name does not match binary path ctl_name");
 }
}
