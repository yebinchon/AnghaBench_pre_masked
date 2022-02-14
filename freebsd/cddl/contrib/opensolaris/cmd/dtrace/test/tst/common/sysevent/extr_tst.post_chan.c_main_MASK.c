
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evchan_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,int **,int) ;
 scalar_t__ FUNC_3 (int *,char*,char*,char*,char*,int *,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(int VAR_4, char **VAR_5)
{
 evchan_t *VAR_6;

 if (FUNC_2("channel_dtest", &VAR_6,
     VAR_0 | VAR_1) != 0) {
  (void) FUNC_0(VAR_3, "failed to bind to sysevent channel\n");
  return (1);
 }

 for (;;) {
  if (FUNC_3(VAR_6, "class_dtest", "subclass_dtest",
      "vendor_dtest", "publisher_dtest", ((void*)0), VAR_2) != 0) {
   (void) FUNC_4(VAR_6);
   (void) FUNC_0(VAR_3, "failed to publisth sysevent\n");
   return (1);
  }
  FUNC_1(1);
 }
}
