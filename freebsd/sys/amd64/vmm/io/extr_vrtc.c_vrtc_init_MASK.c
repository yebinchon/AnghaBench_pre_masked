
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct rtcdev {int reg_a; int reg_d; scalar_t__ reg_c; int reg_b; } ;
struct vrtc {int base_rtctime; int addr; struct rtcdev rtcdev; int callout; int mtx; struct vm* vm; } ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vrtc*) ;
 int FUNC_1 (struct vrtc*) ;
 int FUNC_2 (int *,int) ;
 struct vrtc* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,struct vrtc*,int ) ;
 int FUNC_7 (struct vrtc*,scalar_t__,int ) ;

struct vrtc *
FUNC_8(struct vm *VAR_8)
{
 struct vrtc *VAR_9;
 struct rtcdev *VAR_10;
 time_t VAR_11;

 VAR_9 = FUNC_3(sizeof(struct vrtc), VAR_1, VAR_2 | VAR_3);
 VAR_9->vm = VAR_8;
 FUNC_4(&VAR_9->mtx, "vrtc lock", ((void*)0), VAR_0);
 FUNC_2(&VAR_9->callout, 1);


 VAR_10 = &VAR_9->rtcdev;
 VAR_10->reg_a = 0x20;
 VAR_10->reg_b = VAR_4;
 VAR_10->reg_c = 0;
 VAR_10->reg_d = VAR_5;


 VAR_9->addr = VAR_6;




 VAR_11 = 0;

 FUNC_0(VAR_9);
 VAR_9->base_rtctime = VAR_7;
 FUNC_7(VAR_9, VAR_11, FUNC_5());
 FUNC_6(VAR_11, VAR_9, 0);
 FUNC_1(VAR_9);

 return (VAR_9);
}
