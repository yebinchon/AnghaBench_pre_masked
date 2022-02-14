
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trans_ctl_table {scalar_t__ ctl_name; struct trans_ctl_table* child; scalar_t__ procname; } ;
struct ctl_table {scalar_t__ ctl_name; scalar_t__ procname; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ctl_table*) ;
 struct ctl_table* FUNC_2 (struct ctl_table*,int) ;
 struct trans_ctl_table* VAR_0 ;

__attribute__((used)) static const struct trans_ctl_table *FUNC_3(struct ctl_table *VAR_1)
{
 struct ctl_table *VAR_2;
 const struct trans_ctl_table *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);

 VAR_3 = VAR_0;
repeat:
 VAR_2 = FUNC_2(VAR_1, VAR_4);
 for (; VAR_3->ctl_name || VAR_3->procname || VAR_3->child; VAR_3++) {
  int VAR_5 = 0;

  if (VAR_4 && !VAR_3->child)
   continue;

  if (VAR_2->procname && VAR_3->procname &&
   (FUNC_0(VAR_2->procname, VAR_3->procname) == 0))
   VAR_5++;

  if (VAR_2->ctl_name && VAR_3->ctl_name &&
   (VAR_2->ctl_name == VAR_3->ctl_name))
   VAR_5++;

  if (!VAR_3->ctl_name && !VAR_3->procname)
   VAR_5++;

  if (VAR_5) {
   if (VAR_4 != 0) {
    VAR_4--;
    VAR_3 = VAR_3->child;
    goto repeat;
   }
   goto out;
  }
 }
 VAR_3 = ((void*)0);
out:
 return VAR_3;
}
