
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysevent_id_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*,char*,char*,int *,int *) ;

int
FUNC_3(int VAR_1, char **VAR_2)
{
 sysevent_id_t VAR_3;

 for (;;) {
  if (FUNC_2("class_dtest", "subclass_dtest",
      "vendor_dtest", "publisher_dtest", ((void*)0), &VAR_3) != 0) {
   (void) FUNC_0(VAR_0, "failed to post sysevent\n");
   return (1);
  }

  FUNC_1(1);
 }
}
