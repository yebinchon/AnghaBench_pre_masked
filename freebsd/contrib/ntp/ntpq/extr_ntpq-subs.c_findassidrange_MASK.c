
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32 ;
typedef scalar_t__ u_int ;
typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ assid; } ;
typedef int FILE ;


 size_t FUNC_0 (scalar_t__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(
 u_int32 VAR_3,
 u_int32 VAR_4,
 int * VAR_5,
 int * VAR_6,
 FILE * VAR_7
 )
{
 associd_t VAR_8[2];
 int VAR_9[FUNC_0(VAR_8)];
 u_int VAR_10;
 size_t VAR_11;


 if (0 == VAR_1)
  FUNC_2(VAR_7);

 VAR_8[0] = FUNC_1(VAR_3);
 if (0 == VAR_8[0])
  return 0;
 VAR_8[1] = FUNC_1(VAR_4);
 if (0 == VAR_8[1])
  return 0;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
  VAR_9[VAR_11] = -1;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
   if (VAR_0[VAR_10].assid == VAR_8[VAR_11])
    VAR_9[VAR_11] = VAR_10;
 }
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++)
  if (-1 == VAR_9[VAR_11]) {
   FUNC_3(VAR_2,
    "***Association ID %u not found in list\n",
    VAR_8[VAR_11]);
   return 0;
  }

 if (VAR_9[0] < VAR_9[1]) {
  *VAR_5 = VAR_9[0];
  *VAR_6 = VAR_9[1];
 } else {
  *VAR_6 = VAR_9[0];
  *VAR_5 = VAR_9[1];
 }
 return 1;
}
