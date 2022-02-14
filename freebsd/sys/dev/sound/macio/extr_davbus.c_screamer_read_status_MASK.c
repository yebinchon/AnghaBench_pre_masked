
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct davbus_softc {int device_id; } ;



__attribute__((used)) static u_int
FUNC_0(struct davbus_softc *VAR_0, u_int VAR_1)
{
 int VAR_2;

 switch (VAR_0->device_id) {
 case 5:
  VAR_2 = (VAR_1 & 0x4);
  break;

 case 8:
 case 11:

  VAR_2 = (VAR_1 & 0x7);
  break;

 default:
  VAR_2 = (VAR_1 & 0x8);
 }

 if (VAR_2)
  return (1 << 1);
 else
  return (1 << 0);
}
