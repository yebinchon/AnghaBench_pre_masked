
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_17, int *VAR_18,
      int *VAR_19, int *VAR_20, int *VAR_21)
{
 unsigned int VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26 = -1, VAR_27 = 0;

 VAR_25 = FUNC_1(VAR_17, VAR_9, VAR_16, &VAR_22);
 if (VAR_25)
  return VAR_25;

 if (VAR_18)
  *VAR_18 = VAR_22 & VAR_7 ? VAR_13 :
      VAR_12;

 if (FUNC_0(VAR_22) == VAR_3) {
  VAR_26 = (VAR_22 & VAR_6) ? VAR_14 : VAR_15;

  if (VAR_21) {
   VAR_25 = FUNC_1(VAR_17, VAR_8, VAR_4, &VAR_23);
   if (!VAR_25)
    VAR_25 = FUNC_1(VAR_17, VAR_8, VAR_2,
      &VAR_24);
   if (VAR_25)
    return VAR_25;

   if (VAR_23 & VAR_24 & VAR_1)
    VAR_27 = VAR_10 | VAR_11;
   else if ((VAR_23 & VAR_1) &&
     (VAR_23 & VAR_0) &&
     (VAR_24 & VAR_0))
    VAR_27 = VAR_11;
   else if ((VAR_23 & VAR_0) &&
     (VAR_24 & VAR_1))
    VAR_27 = VAR_10;
  }
 }
 if (VAR_19)
  *VAR_19 = VAR_26;
 if (VAR_20)
  *VAR_20 = VAR_5;
 if (VAR_21)
  *VAR_21 = VAR_27;
 return 0;
}
