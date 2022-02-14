
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int flags; scalar_t__ vendor; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sc_info*,scalar_t__,int) ;
 int FUNC_3 (struct sc_info*,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13;

 if (VAR_10 == 0)
  VAR_13 = VAR_4;
 else if (VAR_10 == 1)
  VAR_13 = VAR_3;
 else if (VAR_10 == 2)
  VAR_13 = VAR_2;
 else
  return (VAR_0);

 FUNC_3(VAR_9, VAR_13 + VAR_5, 0, 1);


 FUNC_0(100);



 FUNC_3(VAR_9, VAR_13 + VAR_5, VAR_7, 1);
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_12 = FUNC_2(VAR_9, VAR_13 + VAR_5, 1);
  if (VAR_12 == 0)
   return (0);
  FUNC_0(1);
 }

 if (VAR_9->flags & VAR_1)
  return (0);
 FUNC_1(VAR_9->dev, "cannot reset channel %d\n", VAR_10);
 return (VAR_0);
}
