
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vrtc {int dummy; } ;
struct vm {int dummy; } ;
typedef int sbintime_t ;


 int FUNC_0 (struct vrtc*) ;
 int FUNC_1 (struct vrtc*) ;
 struct vrtc* FUNC_2 (struct vm*) ;
 int FUNC_3 (struct vrtc*,int *) ;

time_t
FUNC_4(struct vm *VAR_0)
{
 struct vrtc *VAR_1;
 sbintime_t VAR_2;
 time_t VAR_3;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 VAR_3 = FUNC_3(VAR_1, &VAR_2);
 FUNC_1(VAR_1);

 return (VAR_3);
}
