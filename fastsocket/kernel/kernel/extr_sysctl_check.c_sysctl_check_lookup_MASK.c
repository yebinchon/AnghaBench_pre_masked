
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int dummy; } ;
struct ctl_table_header {struct ctl_table* ctl_table; } ;
struct ctl_table {scalar_t__ ctl_name; struct ctl_table* child; scalar_t__ procname; } ;


 struct ctl_table_header* FUNC_0 (struct nsproxy*,struct ctl_table_header*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ctl_table*) ;
 int FUNC_3 (struct ctl_table_header*) ;
 struct ctl_table* FUNC_4 (struct ctl_table*,int) ;

__attribute__((used)) static struct ctl_table *FUNC_5(struct nsproxy *VAR_0,
      struct ctl_table *VAR_1)
{
 struct ctl_table_header *VAR_2;
 struct ctl_table *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_1);

 for (VAR_2 = FUNC_0(VAR_0, ((void*)0)); VAR_2;
      VAR_2 = FUNC_0(VAR_0, VAR_2)) {
  VAR_6 = VAR_5;
  VAR_3 = VAR_2->ctl_table;
repeat:
  VAR_4 = FUNC_4(VAR_1, VAR_6);
  for (; VAR_3->ctl_name || VAR_3->procname; VAR_3++) {
   int VAR_7 = 0;
   if (VAR_6 && !VAR_3->child)
    continue;

   if (VAR_4->procname && VAR_3->procname &&
       (FUNC_1(VAR_4->procname, VAR_3->procname) == 0))
     VAR_7++;

   if (VAR_4->ctl_name && VAR_3->ctl_name &&
       (VAR_4->ctl_name == VAR_3->ctl_name))
    VAR_7++;

   if (VAR_7) {
    if (VAR_6 != 0) {
     VAR_6--;
     VAR_3 = VAR_3->child;
     goto repeat;
    }
    goto out;
   }
  }
 }
 VAR_3 = ((void*)0);
out:
 FUNC_3(VAR_2);
 return VAR_3;
}
