
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_4 = 0;
 if (VAR_3 != -1) {
  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4) {
   VAR_3 = -1;
   FUNC_0(VAR_1, "Successfully thaw the fs\n");
  } else {
   VAR_4 = VAR_2;
   FUNC_0(VAR_0, "Fail to thaw the fs: "
       "%d %s\n", VAR_2, FUNC_2(VAR_2));
  }
 } else {
  FUNC_0(VAR_1, "The fs has already been thawed\n");
 }

 return (VAR_4);
}
