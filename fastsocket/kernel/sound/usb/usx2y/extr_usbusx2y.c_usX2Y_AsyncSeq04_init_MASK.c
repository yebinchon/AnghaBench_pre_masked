
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buffer; int ** urb; } ;
struct usX2Ydev {TYPE_1__ AS04; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *,int ,int ,struct usX2Ydev*) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct usX2Ydev *VAR_5)
{
 int VAR_6 = 0,
  VAR_7;

 if (((void*)0) == (VAR_5->AS04.buffer = FUNC_0(VAR_3*VAR_2, VAR_1))) {
  VAR_6 = -VAR_0;
 } else
  for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
   if (((void*)0) == (VAR_5->AS04.urb[VAR_7] = FUNC_1(0, VAR_1))) {
    VAR_6 = -VAR_0;
    break;
   }
   FUNC_2( VAR_5->AS04.urb[VAR_7], VAR_5->dev,
      FUNC_3(VAR_5->dev, 0x04),
      VAR_5->AS04.buffer + VAR_3*VAR_7, 0,
      VAR_4, VAR_5
    );
  }
 return VAR_6;
}
