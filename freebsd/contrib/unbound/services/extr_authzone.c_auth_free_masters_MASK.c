
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_master {struct auth_master* file; struct auth_master* host; int list; struct auth_master* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct auth_master*) ;

__attribute__((used)) static void
FUNC_2(struct auth_master* VAR_0)
{
 struct auth_master* VAR_1;
 while(VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->list);
  FUNC_1(VAR_0->host);
  FUNC_1(VAR_0->file);
  FUNC_1(VAR_0);
  VAR_0 = VAR_1;
 }
}
