
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (unsigned int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_23, int *VAR_24,
         int *VAR_25, int *VAR_26, int *VAR_27)
{
 unsigned int VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33 = -1, VAR_34 = -1, VAR_35 = 0;

 VAR_32 = FUNC_1(VAR_23, 0, VAR_12, &VAR_28);
 if (!VAR_32)
  VAR_32 = FUNC_1(VAR_23, 0, VAR_13, &VAR_29);
 if (VAR_32)
  return VAR_32;

 if (VAR_24) {




  if (!(VAR_29 & VAR_7))
   VAR_32 = FUNC_1(VAR_23, 0, VAR_13, &VAR_29);
  if (VAR_32)
   return VAR_32;
  *VAR_24 = VAR_29 & VAR_7 ? VAR_18 :
      VAR_17;
 }
 if (!(VAR_28 & VAR_2)) {
  VAR_34 = (VAR_28 & VAR_3) ? VAR_8 : VAR_9;
  if (VAR_28 & VAR_5)
   VAR_33 = VAR_21;
  else if (VAR_28 & VAR_4)
   VAR_33 = VAR_20;
  else
   VAR_33 = VAR_19;
 } else if (VAR_29 & VAR_6) {
  VAR_32 = FUNC_1(VAR_23, 0, VAR_22, &VAR_29);
  if (VAR_32)
   return VAR_32;

  VAR_34 = (VAR_29 & VAR_10) ? VAR_8 : VAR_9;
  VAR_33 = FUNC_0(VAR_29);
  if (VAR_33 == 0)
   VAR_33 = VAR_19;
  else if (VAR_33 == 1)
   VAR_33 = VAR_20;
  else
   VAR_33 = VAR_21;

  if (VAR_27 && VAR_34 == VAR_8) {
   VAR_32 = FUNC_1(VAR_23, 0, VAR_14, &VAR_30);
   if (!VAR_32)
    VAR_32 = FUNC_1(VAR_23, 0, VAR_11, &VAR_31);
   if (VAR_32)
    return VAR_32;

   if (VAR_30 & VAR_31 & VAR_1)
    VAR_35 = VAR_15 | VAR_16;
   else if ((VAR_30 & VAR_1) &&
     (VAR_30 & VAR_0) &&
     (VAR_31 & VAR_0))
    VAR_35 = VAR_16;
   else if ((VAR_30 & VAR_0) &&
     (VAR_31 & VAR_1))
    VAR_35 = VAR_15;
  }
 }
 if (VAR_25)
  *VAR_25 = VAR_33;
 if (VAR_26)
  *VAR_26 = VAR_34;
 if (VAR_27)
  *VAR_27 = VAR_35;
 return 0;
}
