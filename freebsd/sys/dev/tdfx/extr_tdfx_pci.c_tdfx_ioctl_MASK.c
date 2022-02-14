
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int32_t ;
struct thread {int* td_retval; TYPE_1__* td_proc; } ;
struct tdfx_pio_data {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (scalar_t__,struct tdfx_pio_data*) ;
 int FUNC_3 (scalar_t__,struct tdfx_pio_data*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4, struct thread *VAR_5)
{
 int VAR_6 = 0;
 struct tdfx_pio_data *VAR_7 = (struct tdfx_pio_data*)VAR_3;




 switch(FUNC_0(VAR_2)) {


 case 0x33:

   if((VAR_6 = FUNC_3(VAR_2, VAR_7)) > 0) VAR_5->td_retval[0] = VAR_6;
   else return -VAR_6;
   break;
  case 0:

   if((FUNC_2(VAR_2, VAR_7)) > 0) VAR_5->td_retval[0] = VAR_6;
   else return -VAR_6;
   break;
  default:





   return VAR_0;
 }

 return 0;
}
