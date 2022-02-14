
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int In04urb; int In04Buf; int dev; int In04WaitQueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int ,struct usX2Ydev*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct usX2Ydev *VAR_3)
{
 if (! (VAR_3->In04urb = FUNC_2(0, VAR_1)))
  return -VAR_0;

 if (! (VAR_3->In04Buf = FUNC_1(21, VAR_1))) {
  FUNC_4(VAR_3->In04urb);
  return -VAR_0;
 }

 FUNC_0(&VAR_3->In04WaitQueue);
 FUNC_3(VAR_3->In04urb, VAR_3->dev, FUNC_5(VAR_3->dev, 0x4),
    VAR_3->In04Buf, 21,
    VAR_2, VAR_3,
    10);
 return FUNC_6(VAR_3->In04urb, VAR_1);
}
