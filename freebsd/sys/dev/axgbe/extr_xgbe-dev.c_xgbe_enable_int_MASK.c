
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_channel {unsigned int saved_ier; } ;
typedef enum xgbe_int { ____Placeholder_xgbe_int } xgbe_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct xgbe_channel*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct xgbe_channel *VAR_8,
      enum xgbe_int VAR_9)
{
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_0);

 switch (VAR_9) {
 case 130:
  FUNC_2(VAR_10, VAR_0, VAR_6, 1);
  break;
 case 128:
  FUNC_2(VAR_10, VAR_0, VAR_7, 1);
  break;
 case 131:
  FUNC_2(VAR_10, VAR_0, VAR_5, 1);
  break;
 case 133:
  FUNC_2(VAR_10, VAR_0, VAR_3, 1);
  break;
 case 134:
  FUNC_2(VAR_10, VAR_0, VAR_2, 1);
  break;
 case 132:
  FUNC_2(VAR_10, VAR_0, VAR_4, 1);
  break;
 case 129:
  FUNC_2(VAR_10, VAR_0, VAR_6, 1);
  FUNC_2(VAR_10, VAR_0, VAR_3, 1);
  break;
 case 135:
  FUNC_2(VAR_10, VAR_0, VAR_1, 1);
  break;
 case 136:
  VAR_10 |= VAR_8->saved_ier;
  break;
 default:
  return -1;
 }

 FUNC_1(VAR_8, VAR_0, VAR_10);

 return 0;
}
