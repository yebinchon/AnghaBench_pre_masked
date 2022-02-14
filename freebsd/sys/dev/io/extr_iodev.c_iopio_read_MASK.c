
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iodev_pio_req {int width; int val; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct iodev_pio_req *VAR_1)
{

 switch (VAR_1->width) {
 case 1:
  VAR_1->val = FUNC_0(VAR_1->port);
  break;
 case 2:
  if (VAR_1->port & 1) {
   VAR_1->val = FUNC_0(VAR_1->port);
   VAR_1->val |= FUNC_0(VAR_1->port + 1) << 8;
  } else
   VAR_1->val = FUNC_1(VAR_1->port);
  break;
 case 4:
  if (VAR_1->port & 1) {
   VAR_1->val = FUNC_0(VAR_1->port);
   VAR_1->val |= FUNC_1(VAR_1->port + 1) << 8;
   VAR_1->val |= FUNC_0(VAR_1->port + 3) << 24;
  } else if (VAR_1->port & 2) {
   VAR_1->val = FUNC_1(VAR_1->port);
   VAR_1->val |= FUNC_1(VAR_1->port + 2) << 16;
  } else
   VAR_1->val = FUNC_2(VAR_1->port);
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
