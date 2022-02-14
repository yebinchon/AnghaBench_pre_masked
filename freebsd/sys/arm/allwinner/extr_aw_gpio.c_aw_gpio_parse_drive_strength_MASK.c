
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int drive_str ;


 int FUNC_0 (int ,char*,int*,int) ;

__attribute__((used)) static int
FUNC_1(phandle_t VAR_0, uint32_t *VAR_1)
{
 uint32_t VAR_2;

 if (FUNC_0(VAR_0, "drive", VAR_1, sizeof(*VAR_1)) != -1)
  return (0);
 if (FUNC_0(VAR_0, "allwinner,drive", VAR_1, sizeof(*VAR_1)) != -1)
  return (0);
 if (FUNC_0(VAR_0, "drive-strength", &VAR_2,
     sizeof(VAR_2)) != -1) {
  *VAR_1 = (VAR_2 / 10) - 1;
  return (0);
 }

 return (1);
}
