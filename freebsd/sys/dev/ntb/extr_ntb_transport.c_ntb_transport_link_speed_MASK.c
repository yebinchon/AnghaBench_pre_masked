
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_transport_qp {struct ntb_transport_ctx* transport; } ;
struct ntb_transport_ctx {int link_speed; int link_width; int link_is_up; } ;







uint64_t
FUNC_0(struct ntb_transport_qp *VAR_0)
{
 struct ntb_transport_ctx *VAR_1 = VAR_0->transport;
 uint64_t VAR_2;

 if (!VAR_1->link_is_up)
  return (0);
 switch (VAR_1->link_speed) {
 case 131:
  VAR_2 = 2500000000 * 8 / 10;
  break;
 case 130:
  VAR_2 = 5000000000 * 8 / 10;
  break;
 case 129:
  VAR_2 = 8000000000 * 128 / 130;
  break;
 case 128:
  VAR_2 = 16000000000 * 128 / 130;
  break;
 default:
  return (0);
 }
 if (VAR_1->link_width <= 0)
  return (0);
 return (VAR_2 * VAR_1->link_width);
}
