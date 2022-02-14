
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_serial_t ;
typedef int key_ref_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

long FUNC_6(key_serial_t VAR_3)
{
 key_ref_t VAR_4;
 long VAR_5;

 VAR_4 = FUNC_5(VAR_3, 0, VAR_2);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 != -VAR_0)
   goto error;
  VAR_4 = FUNC_5(VAR_3, 0, VAR_1);
  if (FUNC_0(VAR_4)) {
   VAR_5 = FUNC_1(VAR_4);
   goto error;
  }
 }

 FUNC_4(FUNC_3(VAR_4));
 VAR_5 = 0;

 FUNC_2(VAR_4);
error:
 return VAR_5;
}
