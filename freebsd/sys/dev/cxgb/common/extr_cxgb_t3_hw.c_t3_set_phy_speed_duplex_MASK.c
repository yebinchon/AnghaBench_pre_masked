
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int) ;

int FUNC_2(struct cphy *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_0(VAR_8, 0, VAR_5, &VAR_12);
 if (VAR_11)
  return VAR_11;

 if (VAR_9 >= 0) {
  VAR_12 &= ~(VAR_2 | VAR_3 | VAR_0);
  if (VAR_9 == VAR_6)
   VAR_12 |= VAR_2;
  else if (VAR_9 == VAR_7)
   VAR_12 |= VAR_3;
 }
 if (VAR_10 >= 0) {
  VAR_12 &= ~(VAR_1 | VAR_0);
  if (VAR_10 == VAR_4)
   VAR_12 |= VAR_1;
 }
 if (VAR_12 & VAR_3)
  VAR_12 |= VAR_0;
 return FUNC_1(VAR_8, 0, VAR_5, VAR_12);
}
