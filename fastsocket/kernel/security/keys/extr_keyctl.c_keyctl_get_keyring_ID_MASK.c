
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int key_serial_t ;
typedef int key_ref_t ;
struct TYPE_2__ {long serial; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long,int ) ;

long FUNC_5(key_serial_t VAR_2, int VAR_3)
{
 key_ref_t VAR_4;
 unsigned long VAR_5;
 long VAR_6;

 VAR_5 = VAR_3 ? VAR_0 : 0;
 VAR_4 = FUNC_4(VAR_2, VAR_5, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  goto error;
 }

 VAR_6 = FUNC_3(VAR_4)->serial;
 FUNC_2(VAR_4);
error:
 return VAR_6;
}
