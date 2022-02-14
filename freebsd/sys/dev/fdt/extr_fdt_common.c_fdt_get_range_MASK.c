
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int ranges ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,int*,int*) ;
 scalar_t__ FUNC_4 (void*,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(phandle_t VAR_6, int VAR_7, u_long *VAR_8, u_long *VAR_9)
{
 pcell_t VAR_10[VAR_4], *VAR_11;
 pcell_t VAR_12, VAR_13, VAR_14;
 u_long VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;

 if ((FUNC_3(VAR_6, &VAR_12, &VAR_13)) != 0)
  return (VAR_2);



 VAR_14 = FUNC_6(VAR_6);
 if (VAR_14 > 2)
  return (VAR_3);

 VAR_19 = FUNC_1(VAR_6, "ranges");
 if (VAR_19 > sizeof(VAR_10))
  return (VAR_1);
 if (VAR_19 == 0) {
  *VAR_8 = 0;
  *VAR_9 = VAR_5;
  return (0);
 }

 if (!(VAR_7 < VAR_19))
  return (VAR_3);

 if (FUNC_0(VAR_6, "ranges", VAR_10, sizeof(VAR_10)) <= 0)
  return (VAR_0);

 if (VAR_14 > 2 || VAR_12 > 2 || VAR_13 > 2)
  return (VAR_3);

 *VAR_8 = 0;
 *VAR_9 = 0;
 VAR_11 = &VAR_10[VAR_7];

 *VAR_8 = FUNC_4((void *)VAR_11, VAR_12);
 VAR_11 += VAR_12;

 VAR_15 = FUNC_4((void *)VAR_11, VAR_14);
 VAR_11 += VAR_14;

 VAR_18 = FUNC_5(FUNC_2(VAR_6), VAR_15,
    &VAR_16, &VAR_17);
 if (VAR_18 == 0)
  *VAR_8 += VAR_16;
 else
  *VAR_8 += VAR_15;

 *VAR_9 = FUNC_4((void *)VAR_11, VAR_13);
 return (0);
}
