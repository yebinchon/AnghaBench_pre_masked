
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct agg_info {int curpwr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct agg_info*,int ,int) ;
 int FUNC_1 (struct agg_info*,int ,int,int) ;
 int FUNC_2 (int) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct agg_info*) ;
 int FUNC_4 (struct agg_info*,int ) ;
 int FUNC_5 (struct agg_info*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int const) ;
 int FUNC_8 (struct agg_info*) ;

__attribute__((used)) static void
FUNC_9(struct agg_info *VAR_6, int VAR_7)
{
 u_int8_t VAR_8;

 VAR_8 = VAR_6->curpwr;
 if (VAR_8 == VAR_7)
  return;

 switch (VAR_7) {
 case 131:
 case 130:
  switch (VAR_8) {
  case 129:
   FUNC_7(VAR_6->dev, VAR_7);

   FUNC_5(VAR_6, VAR_0, 0);
   FUNC_2(100);





   FUNC_1(VAR_6, VAR_3,
          (FUNC_0(VAR_6, VAR_3, 4)
    & ~VAR_4)
          | VAR_5, 4);
   FUNC_2(50);
   FUNC_1(VAR_6, VAR_3,
          FUNC_0(VAR_6, VAR_3, 4)
          | VAR_4, 4);
   break;
  case 128:

   FUNC_7(VAR_6->dev, 131);
   FUNC_2(100);
   FUNC_3(VAR_6);

  case 131:
  case 130:
   FUNC_7(VAR_6->dev, VAR_7);
   break;
  }
  break;
 case 129:
  switch (VAR_8) {
  case 128:

   FUNC_7(VAR_6->dev, 131);
   FUNC_2(100);
   FUNC_3(VAR_6);

  case 131:
  case 130:

   FUNC_1(VAR_6, VAR_3,
          FUNC_0(VAR_6, VAR_3, 4)
          & ~VAR_5, 4);
   FUNC_2(100);
   FUNC_5(VAR_6, VAR_0, 0x300);
   FUNC_2(100);
   break;
  }
  FUNC_7(VAR_6->dev, VAR_7);
  break;
 case 128:

  FUNC_5(VAR_6, VAR_0, 0xdf00);
  FUNC_2(100);
  FUNC_1(VAR_6, VAR_3, 0, 4);

  if (VAR_8 != 129)
   FUNC_8(VAR_6);
  FUNC_1(VAR_6, VAR_1, 0, 2);
  FUNC_1(VAR_6, VAR_2, 0xff, 1);
  FUNC_7(VAR_6->dev, VAR_7);
  break;
 default:

  VAR_7 = VAR_8;
  break;
 }

 VAR_6->curpwr = VAR_7;
}
