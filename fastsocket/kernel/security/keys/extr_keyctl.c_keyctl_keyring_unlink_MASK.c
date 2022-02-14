
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_serial_t ;
typedef int key_ref_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 long FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

long FUNC_6(key_serial_t VAR_2, key_serial_t VAR_3)
{
 key_ref_t VAR_4, VAR_5;
 long VAR_6;

 VAR_4 = FUNC_5(VAR_3, 0, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  goto error;
 }

 VAR_5 = FUNC_5(VAR_2, VAR_0, 0);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto error2;
 }

 VAR_6 = FUNC_4(FUNC_3(VAR_4), FUNC_3(VAR_5));

 FUNC_2(VAR_5);
error2:
 FUNC_2(VAR_4);
error:
 return VAR_6;
}
