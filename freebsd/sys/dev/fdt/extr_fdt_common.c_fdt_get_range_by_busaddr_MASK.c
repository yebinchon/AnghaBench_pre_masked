
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int ranges ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,int*,int) ;
 int FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int*,int*) ;
 scalar_t__ FUNC_4 (void*,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(phandle_t VAR_5, u_long VAR_6, u_long *VAR_7,
    u_long *VAR_8)
{
 pcell_t VAR_9[32], *VAR_10;
 pcell_t VAR_11, VAR_12, VAR_13;
 u_long VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 if (VAR_5 == 0) {
  *VAR_7 = 0;
  *VAR_8 = VAR_4;
  return (0);
 }

 if ((FUNC_3(VAR_5, &VAR_11, &VAR_12)) != 0)
  return (VAR_2);



 VAR_13 = FUNC_5(VAR_5);
 if (VAR_13 > 2) {
  return (VAR_3);
 }

 VAR_20 = FUNC_1(VAR_5, "ranges");
 if (VAR_20 < 0)
  return (-1);
 if (VAR_20 > sizeof(VAR_9))
  return (VAR_1);
 if (VAR_20 == 0) {
  return (FUNC_6(FUNC_2(VAR_5), VAR_6,
      VAR_7, VAR_8));
 }

 if (FUNC_0(VAR_5, "ranges", VAR_9, sizeof(VAR_9)) <= 0)
  return (VAR_0);

 VAR_21 = VAR_11 + VAR_13 + VAR_12;
 VAR_22 = VAR_20 / (VAR_21 * sizeof(cell_t));

 if (VAR_13 > 2 || VAR_11 > 2 || VAR_12 > 2)
  return (VAR_3);

 *VAR_7 = 0;
 *VAR_8 = 0;

 for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
  VAR_10 = &VAR_9[VAR_19 * VAR_21];

  VAR_14 = FUNC_4((void *)VAR_10, VAR_11);
  if (VAR_14 != VAR_6)
   continue;
  VAR_10 += VAR_11;

  VAR_15 = FUNC_4((void *)VAR_10, VAR_13);
  VAR_10 += VAR_13;

  VAR_18 = FUNC_6(FUNC_2(VAR_5), VAR_15,
      &VAR_16, &VAR_17);
  if (VAR_18 > 0)
   return (VAR_18);
  if (VAR_18 == 0)
   *VAR_7 = VAR_16;
  else
   *VAR_7 = VAR_15;

  *VAR_8 = FUNC_4((void *)VAR_10, VAR_12);

  return (0);
 }

 return (VAR_0);
}
