
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int name; } ;
struct ctl_table {scalar_t__ procname; scalar_t__ ctl_name; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct ctl_table *FUNC_2(struct ctl_table *VAR_0, struct qstr *VAR_1)
{
 int VAR_2;
 for ( ; VAR_0->ctl_name || VAR_0->procname; VAR_0++) {

  if (!VAR_0->procname)
   continue;

  VAR_2 = FUNC_1(VAR_0->procname);
  if (VAR_2 != VAR_1->len)
   continue;

  if (FUNC_0(VAR_0->procname, VAR_1->name, VAR_2) != 0)
   continue;


  return VAR_0;
 }
 return ((void*)0);
}
