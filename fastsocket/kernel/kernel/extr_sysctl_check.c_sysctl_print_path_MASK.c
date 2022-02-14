
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {char* procname; char* ctl_name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ctl_table*) ;
 struct ctl_table* FUNC_2 (struct ctl_table*,int) ;

__attribute__((used)) static void FUNC_3(struct ctl_table *VAR_0)
{
 struct ctl_table *VAR_1;
 int VAR_2, VAR_3;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_0->procname) {
  for (VAR_3 = VAR_2; VAR_3 >= 0; VAR_3--) {
   VAR_1 = FUNC_2(VAR_0, VAR_3);
   FUNC_0("/%s", VAR_1->procname?VAR_1->procname:"");
  }
 }
 FUNC_0(" ");
 if (VAR_0->ctl_name) {
  for (VAR_3 = VAR_2; VAR_3 >= 0; VAR_3--) {
   VAR_1 = FUNC_2(VAR_0, VAR_3);
   FUNC_0(".%d", VAR_1->ctl_name);
  }
 }
}
