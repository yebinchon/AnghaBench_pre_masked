
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
typedef int cell ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int *,int) ;
 int FUNC_1 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, phandle_t VAR_2, const char *VAR_3, uint32_t *VAR_4)
{
 pcell_t VAR_5;

 if ((FUNC_0(VAR_2, VAR_3, &VAR_5, sizeof(VAR_5))) <= 0) {
  FUNC_1(VAR_1, "missing '%s' attribute in LCD panel info\n",
      VAR_3);
  return (VAR_0);
 }

 *VAR_4 = VAR_5;

 return (0);
}
