
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct cphy*,int ,int,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(struct cphy *VAR_21, int *VAR_22, int *VAR_23, int *VAR_24,
         int *VAR_25)
{
 int VAR_26;
 unsigned int VAR_27, VAR_28 = 0;

 VAR_26 = FUNC_0(VAR_21, VAR_11, VAR_4, &VAR_27);
 if (VAR_26)
  return (VAR_26);
 if (VAR_27 == 0xffff || !(VAR_27 & 1))
  goto done;

 VAR_26 = FUNC_0(VAR_21, VAR_10, VAR_12, &VAR_27);
 if (VAR_26)
  return (VAR_26);
 if (VAR_27 & 0x8000)
  goto done;
 if (VAR_27 & VAR_5) {

  VAR_26 = FUNC_0(VAR_21, VAR_10, 1, &VAR_27);
  if (VAR_26)
   return (VAR_26);
  if ((VAR_27 & 0x20) == 0)
   goto done;

  VAR_26 = FUNC_0(VAR_21, VAR_10, VAR_3, &VAR_27);
  if (VAR_26)
   return (VAR_26);

  if (VAR_23) {
   switch (VAR_27 & 0x6) {
   case 0x6: *VAR_23 = VAR_20;
    break;
   case 0x4: *VAR_23 = VAR_19;
    break;
   case 0x2: *VAR_23 = VAR_18;
    break;
   case 0x0: *VAR_23 = VAR_17;
    break;
   }
  }

  if (VAR_24)
   *VAR_24 = VAR_27 & 1 ? VAR_8 : VAR_9;

  if (VAR_25) {
   unsigned int VAR_29, VAR_30;
   VAR_26 = FUNC_0(VAR_21, VAR_10, 0x13, &VAR_29);
   if (!VAR_26)
    VAR_26 = FUNC_0(VAR_21, VAR_10,
        VAR_2, &VAR_30);
   if (VAR_26)
    return VAR_26;

   if (VAR_29 & VAR_30 & VAR_1)
    *VAR_25 = VAR_13 | VAR_14;
   else if (VAR_29 & VAR_1 &&
       VAR_29 & VAR_0 &&
       VAR_30 & VAR_0)
    *VAR_25 = VAR_14;
   else if (VAR_29 & VAR_0 &&
       VAR_30 & VAR_1)
    *VAR_25 = VAR_13;
   else
    *VAR_25 = 0;
  }

 } else {
  VAR_26 = FUNC_0(VAR_21, VAR_11, VAR_12, &VAR_27);
  if (VAR_26)
   return (VAR_26);

  VAR_27 &= VAR_7 | VAR_6;
  if (VAR_23) {
   if (VAR_27 == (VAR_7 | VAR_6))
    *VAR_23 = VAR_20;
   else if (VAR_27 == VAR_7)
    *VAR_23 = VAR_19;
   else if (VAR_27 == VAR_6)
    *VAR_23 = VAR_18;
   else
    *VAR_23 = VAR_17;
  }

  if (VAR_24)
   *VAR_24 = VAR_8;
 }

 VAR_28 = 1;
done:
 if (VAR_22)
  *VAR_22 = VAR_28 ? VAR_16 : VAR_15;
 return (0);
}
