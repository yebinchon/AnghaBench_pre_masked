
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_10, int *VAR_11, int *VAR_12,
        int *VAR_13, int *VAR_14)
{
 if (VAR_11) {
  unsigned int VAR_15, VAR_16, VAR_17;
  int VAR_18 = FUNC_0(VAR_10, VAR_2, VAR_7, &VAR_15);

  if (!VAR_18)
   VAR_18 = FUNC_0(VAR_10, VAR_1, VAR_4, &VAR_16);
  if (!VAR_18)
   VAR_18 = FUNC_0(VAR_10, VAR_3, VAR_9, &VAR_17);
  if (VAR_18)
   return VAR_18;
  if ((VAR_15 & (VAR_16 >> 12) & (VAR_17 >> 12)) & 1)
   *VAR_11 = VAR_6;
  else
   *VAR_11 = VAR_5;
 }
 if (VAR_12)
  *VAR_12 = VAR_8;
 if (VAR_13)
  *VAR_13 = VAR_0;
 return 0;
}
