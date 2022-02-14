
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,char*,scalar_t__*,char*,scalar_t__*,char*,scalar_t__*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, char *VAR_4, ssize_t *VAR_5, ssize_t *VAR_6,
    uint64_t *VAR_7, bool *VAR_8)
{
 char VAR_9[8], VAR_10[8], VAR_11[8];
 uint64_t VAR_12, VAR_13, VAR_14;
 bool VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0;

 VAR_15 = VAR_16 = VAR_17 = 0;
 FUNC_1(VAR_3, "%c %s %jx %s %jx %s %jx",
     VAR_4, VAR_9, &VAR_12, VAR_10, &VAR_13, VAR_11, &VAR_14);

 if (*VAR_4 != 'W' && *VAR_4 != 'R')
  return (VAR_2);

 if (!FUNC_2(VAR_9, "offset")) {
  *VAR_5 = VAR_12 ? VAR_12 : VAR_0;
  VAR_15 = 1;
 } else if (!FUNC_2(VAR_9, "nbytes")) {
  *VAR_6 = VAR_12 ? VAR_12: VAR_1;
  VAR_16 = 1;
 } else if (!FUNC_2(VAR_9, "pattern")) {
  *VAR_7 = VAR_12;
  VAR_17 = 1;
 }

 if (!VAR_15 && !FUNC_2(VAR_10, "offset")) {
  *VAR_5 = VAR_13 ? VAR_13 : VAR_0;
  VAR_15 = 1;
 } else if (!VAR_16 && !FUNC_2(VAR_10, "nbytes")) {
  *VAR_6 = VAR_13 ? VAR_13: VAR_1;
  VAR_16 = 1;
 } else if (!VAR_17 && !FUNC_2(VAR_10, "pattern")) {
  *VAR_7 = VAR_13;
  VAR_17 = 1;
 }

 if (!VAR_15 && !FUNC_2(VAR_11, "offset")) {
  *VAR_5 = VAR_14 ? VAR_14 : VAR_0;
 } else if (!VAR_16 && !FUNC_2(VAR_11, "nbytes")) {
  *VAR_6 = VAR_14 ? VAR_14: VAR_1;
 } else if (!VAR_17 && !FUNC_2(VAR_11, "pattern")) {
  *VAR_7 = VAR_14;
  VAR_17 = 1;
 }

 *VAR_8 = VAR_17;
 if (VAR_17 && *VAR_4 == 'R')
  FUNC_0("NTB_TOOL_WARN: pattern is not supported with read "
      "command\n");

 return (VAR_18);
}
