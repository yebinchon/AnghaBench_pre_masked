
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int cell ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int*,int*,int*) ;

int
FUNC_4(phandle_t VAR_6, int VAR_7, bus_addr_t *VAR_8,
    bus_size_t *VAR_9, pcell_t *VAR_10)
{
 static pcell_t VAR_11[256];
 pcell_t VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15;
 uint64_t VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
 phandle_t VAR_22, VAR_23;
 u_int VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28;


 if (VAR_6 == 0)
  return (VAR_2);
 VAR_22 = FUNC_2(VAR_6);
 if (VAR_22 == 0)
  return (VAR_2);
 if (VAR_7 < 0)
  return (VAR_2);
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
  return (VAR_2);

 FUNC_3(VAR_22, &VAR_20, &VAR_21, &VAR_26);
 VAR_28 = FUNC_1(VAR_6, (VAR_26) ? "assigned-addresses" : "reg",
     VAR_11, sizeof(VAR_11));
 if (VAR_28 == -1)
  return (VAR_3);
 if (VAR_28 % sizeof(VAR_11[0]))
  return (VAR_3);
 VAR_28 /= sizeof(VAR_11[0]);
 VAR_7 *= VAR_20 + VAR_21;
 if (VAR_7 + VAR_20 + VAR_21 > VAR_28)
  return (VAR_2);
 VAR_12 = VAR_26 ? VAR_11[VAR_7] : VAR_4;
 VAR_24 = VAR_12 & VAR_5;
 VAR_13 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
  VAR_13 = ((uint64_t)VAR_13 << 32) | VAR_11[VAR_7++];
 VAR_16 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++)
  VAR_16 = ((uint64_t)VAR_16 << 32) | VAR_11[VAR_7++];
 VAR_23 = FUNC_2(VAR_22);
 while (VAR_23 != 0) {
  FUNC_3(VAR_23, &VAR_19, ((void*)0), &VAR_27);
  VAR_28 = FUNC_1(VAR_22, "ranges", VAR_11, sizeof(VAR_11));
  if (VAR_28 < 1)
   goto next;
  if (VAR_28 % sizeof(VAR_11[0]))
   return (VAR_3);

  if (VAR_27 && VAR_12 == VAR_4) {
   VAR_12 = VAR_11[0];
   VAR_24 = VAR_12 & VAR_5;
  }
  VAR_28 /= sizeof(VAR_11[0]);
  VAR_7 = 0;
  while (VAR_7 < VAR_28) {
   VAR_25 = (VAR_26 ? VAR_11[VAR_7] : VAR_4) &
       VAR_5;
   if (VAR_25 != VAR_24) {
    VAR_7 += VAR_20 + VAR_19 + VAR_21;
    continue;
   }
   VAR_14 = 0;
   for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
    VAR_14 = ((uint64_t)VAR_14 << 32) | VAR_11[VAR_7++];
   VAR_25 = (VAR_27)
       ? VAR_11[VAR_7] & VAR_5
       : VAR_4;
   VAR_15 = 0;
   for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
    VAR_15 = ((uint64_t)VAR_15 << 32) | VAR_11[VAR_7++];
   VAR_17 = 0;
   for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++)
    VAR_17 = ((uint64_t)VAR_17 << 32) | VAR_11[VAR_7++];
   if (VAR_13 < VAR_14 || VAR_13 >= VAR_14 + VAR_17)
    continue;
   VAR_13 = VAR_13 - VAR_14 + VAR_15;
   if (VAR_25 != VAR_4)
    VAR_24 = VAR_25;
  }
 next:
  VAR_22 = VAR_23;
  VAR_23 = FUNC_2(VAR_22);
  FUNC_3(VAR_22, &VAR_20, &VAR_21, &VAR_26);
 }

 FUNC_0(VAR_13 <= VAR_0,
     ("Bus address is too large: %jx", (uintmax_t)VAR_13));
 FUNC_0(VAR_16 <= VAR_1,
     ("Bus size is too large: %jx", (uintmax_t)VAR_16));

 *VAR_8 = VAR_13;
 *VAR_9 = VAR_16;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_12;

 return (0);
}
