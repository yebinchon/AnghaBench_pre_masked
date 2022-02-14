
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int8_t ;
struct thread {int dummy; } ;
struct ppi_data {int ppi_device; } ;
struct cdev {struct ppi_data* si_drv1; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int
FUNC_17(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct ppi_data *VAR_6 = VAR_1->si_drv1;
 device_t VAR_7 = VAR_6->ppi_device;
 device_t VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = 0;
 u_int8_t *VAR_10 = (u_int8_t *)VAR_3;

 FUNC_1(VAR_8);
 switch (VAR_2) {

 case 140:
  *VAR_10 = FUNC_3(VAR_8);
  break;
 case 135:
  *VAR_10 = FUNC_8(VAR_8);
  break;
 case 141:
  *VAR_10 = FUNC_2(VAR_8);
  break;
 case 137:
  *VAR_10 = FUNC_6(VAR_8);
  break;
 case 139:
  *VAR_10 = FUNC_4(VAR_8);
  break;
 case 136:
  *VAR_10 = FUNC_7(VAR_8);
  break;
 case 133:
  FUNC_11(VAR_8, *VAR_10);
  break;
 case 128:
  FUNC_16(VAR_8, *VAR_10);
  break;
 case 134:
  FUNC_10(VAR_8, *VAR_10);
  break;
 case 130:
  FUNC_14(VAR_8, *VAR_10);
  break;
 case 132:
  FUNC_12(VAR_8, *VAR_10);
  break;
 case 129:
  FUNC_15(VAR_8, *VAR_10);
  break;
 case 138:
  *VAR_10 = FUNC_5(VAR_8);
  break;
 case 131:
  FUNC_13(VAR_8, *VAR_10);
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }
 FUNC_9(VAR_8);

 return (VAR_9);
}
