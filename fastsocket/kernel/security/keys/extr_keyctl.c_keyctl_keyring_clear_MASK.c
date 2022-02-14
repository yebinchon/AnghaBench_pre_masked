
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int key_serial_t ;
typedef int key_ref_t ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 long FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

long FUNC_8(key_serial_t VAR_4)
{
 key_ref_t VAR_5;
 long VAR_6;

 VAR_5 = FUNC_6(VAR_4, VAR_2, VAR_3);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);


  if (FUNC_2(VAR_0)) {
   VAR_5 = FUNC_6(VAR_4, 0, 0);
   if (FUNC_0(VAR_5))
    goto error;
   if (FUNC_7(VAR_1,
         &FUNC_4(VAR_5)->flags))
    goto clear;
   goto error_put;
  }

  goto error;
 }

clear:
 VAR_6 = FUNC_5(FUNC_4(VAR_5));
error_put:
 FUNC_3(VAR_5);
error:
 return VAR_6;
}
