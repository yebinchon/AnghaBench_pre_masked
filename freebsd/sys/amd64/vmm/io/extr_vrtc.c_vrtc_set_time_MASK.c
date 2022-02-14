
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vrtc {int vm; } ;
struct vm {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct vrtc*) ;
 int FUNC_3 (struct vrtc*) ;
 int FUNC_4 () ;
 struct vrtc* FUNC_5 (struct vm*) ;
 int FUNC_6 (struct vrtc*,int ,int ) ;

int
FUNC_7(struct vm *VAR_0, time_t VAR_1)
{
 struct vrtc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_0);
 FUNC_2(VAR_2);
 VAR_3 = FUNC_6(VAR_2, VAR_1, FUNC_4());
 FUNC_3(VAR_2);

 if (VAR_3) {
  FUNC_1(VAR_2->vm, "Error %d setting RTC time to %#lx", VAR_3,
      VAR_1);
 } else {
  FUNC_0(VAR_2->vm, "RTC time set to %#lx", VAR_1);
 }

 return (VAR_3);
}
