
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int ax25_cb ;





 int VAR_0 ;

 int VAR_1 ;





 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int const,int,int ) ;

__attribute__((used)) static int FUNC_2(ax25_cb *VAR_2, struct sk_buff *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 switch (VAR_4) {
 case 130:
 case 129:
  FUNC_1(VAR_2, 135, VAR_5, VAR_1);
  break;

 case 136:
  FUNC_1(VAR_2, 128, VAR_5, VAR_1);
  FUNC_0(VAR_2, 0);
  break;

 case 135:
 case 128:
  if (VAR_5)
   FUNC_0(VAR_2, 0);
  break;

 case 134:
 case 133:
 case 132:
 case 131:
  if (VAR_5) FUNC_1(VAR_2, 135, VAR_0, VAR_1);
  break;

 default:
  break;
 }

 return 0;
}
