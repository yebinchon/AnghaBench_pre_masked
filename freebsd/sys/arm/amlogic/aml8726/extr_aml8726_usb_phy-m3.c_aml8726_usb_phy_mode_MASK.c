
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,char*,void**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, uint32_t *VAR_5)
{
 char *VAR_6;
 phandle_t VAR_7;
 ssize_t VAR_8;

 if ((VAR_7 = FUNC_0(VAR_4)) == -1)
  return (VAR_3);

 if (FUNC_3(VAR_7, "synopsys,designware-hs-otg2") == 0)
  return (VAR_3);

 *VAR_5 = 0;

 VAR_8 = FUNC_1(VAR_7, "dr_mode",
     (void **)&VAR_6);

 if (VAR_8 <= 0)
  return (0);

 if (FUNC_4(VAR_6, "host") == 0) {
  *VAR_5 = VAR_1 |
      VAR_2;
 } else if (FUNC_4(VAR_6, "peripheral") == 0) {
  *VAR_5 = VAR_1 |
      VAR_0;
 }

 FUNC_2(VAR_6);

 return (0);
}
