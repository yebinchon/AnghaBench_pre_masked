
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
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct xgbe_channel*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct xgbe_channel *VAR_9,
       enum xgbe_int VAR_10)
{
 unsigned int VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_0);

 switch (VAR_10) {
 case 130:
  FUNC_2(VAR_11, VAR_0, VAR_6, 0);
  break;
 case 128:
  FUNC_2(VAR_11, VAR_0, VAR_7, 0);
  break;
 case 131:
  FUNC_2(VAR_11, VAR_0, VAR_5, 0);
  break;
 case 133:
  FUNC_2(VAR_11, VAR_0, VAR_3, 0);
  break;
 case 134:
  FUNC_2(VAR_11, VAR_0, VAR_2, 0);
  break;
 case 132:
  FUNC_2(VAR_11, VAR_0, VAR_4, 0);
  break;
 case 129:
  FUNC_2(VAR_11, VAR_0, VAR_6, 0);
  FUNC_2(VAR_11, VAR_0, VAR_3, 0);
  break;
 case 135:
  FUNC_2(VAR_11, VAR_0, VAR_1, 0);
  break;
 case 136:
  VAR_9->saved_ier = VAR_11 & VAR_8;
  VAR_11 &= ~VAR_8;
  break;
 default:
  return -1;
 }

 FUNC_1(VAR_9, VAR_0, VAR_11);

 return 0;
}
