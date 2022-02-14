
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 long FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_11, uint16_t *VAR_12)
{
 const char *VAR_13;
 char *VAR_14;
 long VAR_15;

 if (VAR_11[0] == '!') {
  VAR_15 = FUNC_2(VAR_11 + 1, &VAR_14, 0);
  if (VAR_11[1] == '\0' || *VAR_14 != '\0' || VAR_15 <= 0 ||
      VAR_15 >= 65536)
   return (VAR_0);
  *VAR_12 = (uint16_t)VAR_15;
  return (0);
 }
 VAR_13 = FUNC_0(VAR_1);
 if (!FUNC_1(VAR_11, VAR_13)) {
  *VAR_12 = VAR_6;
  return (0);
 }
 VAR_13 = FUNC_0(VAR_2);
 if (!FUNC_1(VAR_11, VAR_13)) {
  *VAR_12 = VAR_7;
  return (0);
 }
 VAR_13 = FUNC_0(VAR_3);
 if (!FUNC_1(VAR_11, VAR_13)) {
  *VAR_12 = VAR_8;
  return (0);
 }
 VAR_13 = FUNC_0(VAR_4);
 if (!FUNC_1(VAR_11, VAR_13)) {
  *VAR_12 = VAR_9;
  return (0);
 }
 VAR_13 = FUNC_0(VAR_5);
 if (!FUNC_1(VAR_11, VAR_13)) {
  *VAR_12 = VAR_10;
  return (0);
 }
 return (VAR_0);
}
