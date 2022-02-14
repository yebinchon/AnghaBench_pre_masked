
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct cphy*,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(struct cphy *VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;

 if (VAR_14 == VAR_10)
  VAR_17 = VAR_3;
 else if (VAR_14 == VAR_11)
  VAR_17 = VAR_4;
 else if (VAR_14 == VAR_12)
  VAR_17 = VAR_4 | VAR_3;
 else
  return (VAR_6);

 if (VAR_15 != VAR_5)
  return (VAR_6);

 VAR_16 = FUNC_0(VAR_13, VAR_7, VAR_9,
     VAR_2 | VAR_0 | VAR_1, 0);
 if (VAR_16)
  return (VAR_16);

 VAR_16 = FUNC_0(VAR_13, VAR_8, VAR_9,
     VAR_4 | VAR_3, VAR_17);
 if (VAR_16)
  return (VAR_16);

 return (0);
}
