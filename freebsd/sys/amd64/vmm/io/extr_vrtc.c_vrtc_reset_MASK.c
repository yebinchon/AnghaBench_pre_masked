
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtcdev {int reg_b; } ;
struct vrtc {int callout; struct rtcdev rtcdev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vrtc*) ;
 int FUNC_2 (struct vrtc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vrtc*,int) ;
 int FUNC_5 (struct vrtc*,int ) ;

void
FUNC_6(struct vrtc *VAR_2)
{
 struct rtcdev *VAR_3;

 FUNC_1(VAR_2);

 VAR_3 = &VAR_2->rtcdev;
 FUNC_4(VAR_2, VAR_3->reg_b & ~(VAR_0 | VAR_1));
 FUNC_5(VAR_2, 0);
 FUNC_0(!FUNC_3(&VAR_2->callout), ("rtc callout still active"));

 FUNC_2(VAR_2);
}
