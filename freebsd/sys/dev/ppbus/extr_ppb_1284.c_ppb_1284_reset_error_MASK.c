
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int state; int error; } ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, int VAR_2)
{
 struct ppb_data *VAR_3 = FUNC_0(VAR_1);

 VAR_3->error = VAR_0;
 VAR_3->state = VAR_2;

 return (0);
}
