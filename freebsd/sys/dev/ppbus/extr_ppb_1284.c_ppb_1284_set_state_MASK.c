
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int state; scalar_t__ error; int ppc_lock; } ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(device_t VAR_3, int VAR_4)
{
 struct ppb_data *VAR_5 = FUNC_0(VAR_3);



 FUNC_1(VAR_5->ppc_lock, VAR_0);
 if ((VAR_5->state != VAR_1) &&
   (VAR_5->error == VAR_2)) {
  VAR_5->state = VAR_4;
  VAR_5->error = VAR_2;
 }

 return (0);
}
