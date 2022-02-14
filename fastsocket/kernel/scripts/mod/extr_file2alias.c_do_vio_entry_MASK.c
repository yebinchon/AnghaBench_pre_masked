
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_device_id {char* type; char* compat; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, struct vio_device_id *VAR_1,
  char *VAR_2)
{
 char *VAR_3;

 FUNC_2(VAR_2, "vio:T%sS%s", VAR_1->type[0] ? VAR_1->type : "*",
   VAR_1->compat[0] ? VAR_1->compat : "*");


 for (VAR_3 = VAR_2; VAR_3 && *VAR_3; VAR_3++)
  if (FUNC_1 (*VAR_3))
   *VAR_3 = '_';

 FUNC_0(VAR_2);
 return 1;
}
