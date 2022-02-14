
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ipfw_obj_header ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3(ipfw_obj_header *VAR_2, char *VAR_3)
{

 if (FUNC_1(VAR_3) != 0)
  FUNC_0(VAR_0, "table name %s is invalid", VAR_3);

 if (FUNC_2(VAR_2, VAR_3) == 0)
  return (0);

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_0, "Unable to swap table: check types");
 case 129:
  FUNC_0(VAR_0, "Unable to swap table: check limits");
 }

 return (0);
}
