
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* probe ) (int,int*,int) ;} ;
typedef TYPE_1__ keyboard_switch_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int,int*,int) ;

int
FUNC_4(device_t VAR_2, int VAR_3, int VAR_4)
{
 keyboard_switch_t *VAR_5;
 int VAR_6[2];
 int VAR_7;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5 == ((void*)0))
  return VAR_1;

 VAR_6[0] = FUNC_1(FUNC_0(VAR_2));
 VAR_6[1] = VAR_3;
 VAR_7 = (*VAR_5->probe)(FUNC_1(VAR_2), VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;
 return 0;
}
