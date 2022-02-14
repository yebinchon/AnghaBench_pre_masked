
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vrtc {int addr; } ;
struct vm {int dummy; } ;


 int FUNC_0 (struct vrtc*) ;
 int FUNC_1 (struct vrtc*) ;
 struct vrtc* FUNC_2 (struct vm*) ;

int
FUNC_3(struct vm *VAR_0, int VAR_1, bool VAR_2, int VAR_3, int VAR_4,
    uint32_t *VAR_5)
{
 struct vrtc *VAR_6;

 VAR_6 = FUNC_2(VAR_0);

 if (VAR_4 != 1)
  return (-1);

 if (VAR_2) {
  *VAR_5 = 0xff;
  return (0);
 }

 FUNC_0(VAR_6);
 VAR_6->addr = *VAR_5 & 0x7f;
 FUNC_1(VAR_6);

 return (0);
}
