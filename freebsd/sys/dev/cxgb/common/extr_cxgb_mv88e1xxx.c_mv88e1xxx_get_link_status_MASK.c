
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct cphy*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_15, int *VAR_16,
         int *VAR_17, int *VAR_18, int *VAR_19)
{
 u32 VAR_20;
 int VAR_21 = -1, VAR_22 = -1, VAR_23 = 0;

 FUNC_1(VAR_15, 0, VAR_2, &VAR_20);
 if ((VAR_20 & VAR_13) != 0) {
  if (VAR_20 & VAR_12)
   VAR_23 |= VAR_3;
  if (VAR_20 & VAR_14)
   VAR_23 |= VAR_4;
  VAR_22 = (VAR_20 & VAR_10) ? VAR_0 : VAR_1;
  VAR_21 = FUNC_0(VAR_20);
  if (VAR_21 == 0)
   VAR_21 = VAR_7;
  else if (VAR_21 == 1)
   VAR_21 = VAR_8;
  else
   VAR_21 = VAR_9;
 }
 if (VAR_16)
  *VAR_16 = VAR_20 & VAR_11 ? VAR_6 :
      VAR_5;
 if (VAR_17)
  *VAR_17 = VAR_21;
 if (VAR_18)
  *VAR_18 = VAR_22;
 if (VAR_19)
  *VAR_19 = VAR_23;
 return 0;
}
