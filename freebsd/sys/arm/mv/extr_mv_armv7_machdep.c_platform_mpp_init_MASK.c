
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_long ;
typedef int ssize_t ;
typedef int reg ;
typedef int pinmap ;
typedef int pin_count ;
typedef int pin_cells ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int mpp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int*,int) ;
 int FUNC_3 (int,char*,int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ,int*,int*) ;
 int FUNC_8 (int*,int,int,int *,int *) ;
 int FUNC_9 (int,char*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int,char*) ;

__attribute__((used)) static int
FUNC_11(void)
{
 pcell_t VAR_8[VAR_5 * VAR_4];
 int VAR_9[VAR_5];
 uint32_t VAR_10, VAR_11;
 pcell_t VAR_12[4];
 u_long VAR_13, VAR_14;
 phandle_t VAR_15;
 pcell_t VAR_16, *VAR_17, VAR_18;
 ssize_t VAR_19;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;




 if ((VAR_15 = FUNC_1("mpp")) != -1)
  if (FUNC_10(VAR_15, "mrvl,mpp"))
   goto moveon;



 if ((VAR_15 = FUNC_1("/")) == -1)
  return (VAR_1);

 if ((VAR_15 = FUNC_9(VAR_15, "simple-bus", 0)) == 0)
  return (VAR_1);

 if ((VAR_15 = FUNC_9(VAR_15, "mrvl,mpp", 0)) == 0)




  return (0);
moveon:



 if ((VAR_24 = FUNC_7(FUNC_4(VAR_15), &VAR_20,
     &VAR_21)) != 0)
  return(VAR_1);

 VAR_22 = sizeof(pcell_t) * (VAR_20 + VAR_21);
 VAR_19 = FUNC_3(VAR_15, "reg", VAR_12, sizeof(VAR_12));
 VAR_23 = VAR_19 / VAR_22;
 if (VAR_22 <= 0)
  return (VAR_0);

 VAR_24 = FUNC_8(VAR_12, VAR_20, VAR_21,
     &VAR_13, &VAR_14);
 if (VAR_24 != 0)
  return (VAR_24);
 VAR_13 += VAR_6;




 if (FUNC_2(VAR_15, "pin-count", &VAR_18, sizeof(VAR_18)) <= 0)
  return (VAR_1);
 if (VAR_18 > VAR_5)
  return (VAR_2);

 if (FUNC_2(VAR_15, "#pin-cells", &VAR_16, sizeof(VAR_16)) <= 0)
  VAR_16 = VAR_4;
 if (VAR_16 > VAR_4)
  return (VAR_2);
 VAR_22 = sizeof(pcell_t) * VAR_16;

 FUNC_6(VAR_8, sizeof(VAR_8));
 VAR_19 = FUNC_2(VAR_15, "pin-map", VAR_8, sizeof(VAR_8));
 if (VAR_19 <= 0)
  return (VAR_2);
 if (VAR_19 % VAR_22)
  return (VAR_2);
 VAR_25 = VAR_19 / VAR_22;
 if (VAR_25 > VAR_18)
  return (VAR_2);




 FUNC_6(VAR_9, sizeof(VAR_9));
 VAR_17 = VAR_8;
 for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
  VAR_28 = *VAR_17;
  VAR_29 = *(VAR_17 + 1);
  VAR_9[VAR_28] = VAR_29;
  VAR_17 += VAR_16;
 }




 VAR_11 = 0;
 for (VAR_26 = 0; VAR_26 < VAR_18;) {
  VAR_10 = 0;

  for (VAR_27 = 0; VAR_27 < VAR_3; VAR_27++) {
   if (VAR_26 + VAR_27 == VAR_18 - 1)
    break;
   VAR_10 |= FUNC_0(VAR_26 + VAR_27, VAR_9[VAR_26 + VAR_27]);
  }
  VAR_26 += VAR_3;
  FUNC_5(VAR_7, VAR_13, VAR_11,
      VAR_10);

  VAR_11 += 4;
 }

 return (0);
}
