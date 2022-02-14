
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int,char const*,int,int) ;
 scalar_t__ FUNC_3 (int,int *,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(int VAR_4, const char *VAR_5, uint8_t *VAR_6,
    uint32_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_3 | VAR_1 | VAR_2, 0600);
 if (VAR_8 == -1) {
  FUNC_1(VAR_0, "Unable to open %s to write the key: %m.",
      VAR_5);
  return (0);
 }

 if (FUNC_3(VAR_8, VAR_6, VAR_7) != (ssize_t)VAR_7) {
  FUNC_1(VAR_0, "Unable to write the key to %s: %m.", VAR_5);
  FUNC_0(VAR_8);
  return (0);
 }

 FUNC_0(VAR_8);
 return (1);
}
