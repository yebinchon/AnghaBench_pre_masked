
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {long serial; } ;
typedef scalar_t__ key_serial_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 long FUNC_1 (struct key*) ;
 struct key* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct key*) ;
 long FUNC_4 (struct key*) ;

long FUNC_5(key_serial_t VAR_1)
{
 struct key *VAR_2;
 long VAR_3;


 VAR_3 = -VAR_0;
 if (VAR_1 < 0)
  goto error;


 if (VAR_1 == 0) {
  VAR_3 = FUNC_4(((void*)0));
  goto error;
 }






 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
  goto error;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 < 0)
  goto error;
 FUNC_3(VAR_2);

 VAR_3 = VAR_2->serial;
error:
 return VAR_3;
}
