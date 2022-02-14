
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_19__ {int dev; TYPE_1__* reg; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_20__ {int cmd; size_t bar; int data; int offset; } ;
typedef TYPE_3__ ocs_ioctl_ecd_helper_t ;
typedef int int32_t ;
struct TYPE_18__ {int * res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,size_t,int ) ;
 int FUNC_8 (TYPE_2__*,size_t,int ) ;
 int FUNC_9 (TYPE_2__*,size_t,int ) ;
 int FUNC_10 (TYPE_2__*,size_t,int ,int ) ;
 int FUNC_11 (TYPE_2__*,size_t,int ,int ) ;
 int FUNC_12 (TYPE_2__*,size_t,int ,int ) ;

__attribute__((used)) static int
FUNC_13 (ocs_t *VAR_2, ocs_ioctl_ecd_helper_t *VAR_3)
{
 int32_t VAR_4 = 0;
 uint8_t VAR_5;
 uint16_t VAR_6;
 uint32_t VAR_7;



 switch(VAR_3->cmd) {
 case 137:
 case 139:
 case 138:
 case 134:
 case 136:
 case 135:
  if (VAR_3->bar >= VAR_1) {
   FUNC_0(VAR_2->dev, "Error: bar %d out of range\n", VAR_3->bar);
   return -VAR_0;
  }
  if (VAR_2->reg[VAR_3->bar].res == ((void*)0)) {
   FUNC_0(VAR_2->dev, "Error: bar %d not defined\n", VAR_3->bar);
   return -VAR_0;
  }
  break;
 default:
  break;
 }

 switch(VAR_3->cmd) {
 case 131:
  VAR_5 = FUNC_3(VAR_2, VAR_3->offset);
  VAR_3->data = VAR_5;
  break;
 case 133:
  VAR_6 = FUNC_1(VAR_2, VAR_3->offset);
  VAR_3->data = VAR_6;
  break;
 case 132:
  VAR_7 = FUNC_2(VAR_2, VAR_3->offset);
  VAR_3->data = VAR_7;
  break;
 case 128:
  FUNC_6(VAR_2, VAR_3->offset, VAR_3->data);
  break;
 case 130:
  FUNC_4(VAR_2, VAR_3->offset, VAR_3->data);
  break;
 case 129:
  FUNC_5(VAR_2, VAR_3->offset, VAR_3->data);
  break;
 case 137:
  VAR_3->data = FUNC_9(VAR_2, VAR_3->bar, VAR_3->offset);
  break;
 case 139:
  VAR_3->data = FUNC_7(VAR_2, VAR_3->bar, VAR_3->offset);
  break;
 case 138:
  VAR_3->data = FUNC_8(VAR_2, VAR_3->bar, VAR_3->offset);
  break;
 case 134:
  FUNC_12(VAR_2, VAR_3->bar, VAR_3->offset, VAR_3->data);
  break;
 case 136:
  FUNC_10(VAR_2, VAR_3->bar, VAR_3->offset, VAR_3->data);
  break;
 case 135:
  FUNC_11(VAR_2, VAR_3->bar, VAR_3->offset, VAR_3->data);
  break;
 default:
  FUNC_0(VAR_2->dev, "Invalid helper command=%d\n", VAR_3->cmd);
  break;
 }

 return VAR_4;
}
