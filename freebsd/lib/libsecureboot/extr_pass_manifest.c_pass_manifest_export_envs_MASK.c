
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2()
{
 int VAR_4;


 if (!VAR_3) {
  FUNC_1("veriexec.manifest_path");
  FUNC_1("veriexec.manifest_hash");
  FUNC_1("veriexec.manifest_prefix");
  return (0);
 }

 VAR_4 = FUNC_0("veriexec.manifest_path", VAR_1, 1);
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_4 = FUNC_0("veriexec.manifest_hash", VAR_0, 1);
 if (VAR_4 != 0) {
  FUNC_1("veriexec.manifest_path");
  return (VAR_4);
 }

 if (VAR_2[0] != '\0')
  VAR_4 = FUNC_0("veriexec.manifest_prefix", VAR_2, 1);

 return (VAR_4);
}
