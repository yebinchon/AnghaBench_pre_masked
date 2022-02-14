
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct fatEntry {int dummy; } ;
struct bootblock {int dummy; } ;
typedef scalar_t__ cl_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int,struct bootblock*,struct fatEntry*,scalar_t__,int,scalar_t__,int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_6, struct bootblock *VAR_7, struct fatEntry *VAR_8, u_char *VAR_9,
    u_char *VAR_10, cl_t VAR_11, cl_t VAR_12, cl_t VAR_13, char *VAR_14, int VAR_15)
{
 switch (VAR_15) {
 case 0:
  FUNC_2("Invalid long filename entry for %s\n", VAR_14);
  break;
 case 1:
  FUNC_2("Invalid long filename entry at end of directory %s\n",
      VAR_14);
  break;
 case 2:
  FUNC_2("Invalid long filename entry for volume label\n");
  break;
 }
 if (FUNC_0(0, "Remove")) {
  if (VAR_11 != VAR_13) {
   if (FUNC_1(VAR_6, VAR_7, VAR_8,
       VAR_11, VAR_9 - VAR_5,
       VAR_12, VAR_10 - VAR_5,
       VAR_12 == VAR_13) == VAR_3)
    return VAR_3;
   VAR_9 = VAR_5;
  }

  if ((VAR_12 == VAR_13) || (VAR_11 < VAR_0))
   for (; VAR_9 < VAR_10; VAR_9 += 32)
    *VAR_9 = VAR_4;
  return VAR_1;
 }
 return VAR_2;
}
