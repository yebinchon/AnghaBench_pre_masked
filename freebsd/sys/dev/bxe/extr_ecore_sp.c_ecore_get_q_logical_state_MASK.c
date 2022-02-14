
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_sp_obj {int state; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
int FUNC_0(struct bxe_softc *VAR_3,
          struct ecore_queue_sp_obj *VAR_4)
{
 switch (VAR_4->state) {
 case 136:
 case 131:
  return VAR_1;
 case 130:
 case 133:
 case 132:
 case 134:
 case 129:
 case 128:
 case 135:
  return VAR_2;
 default:
  return VAR_0;
 }
}
