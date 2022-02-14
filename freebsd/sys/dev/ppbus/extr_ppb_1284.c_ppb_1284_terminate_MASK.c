
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7(device_t VAR_11)
{







 FUNC_3(VAR_11, VAR_3);
 FUNC_5(VAR_11, (VAR_10 | VAR_5) & ~(VAR_6 | VAR_0));


 if (FUNC_1(VAR_11, VAR_7 | VAR_8 | VAR_9, VAR_9)) {
  FUNC_2(VAR_11, VAR_4, 24);
  goto error;
 }


 FUNC_5(VAR_11, (VAR_10 | VAR_5 | VAR_0) & ~VAR_6);




 if (FUNC_1(VAR_11, VAR_7, VAR_7)) {
  FUNC_2(VAR_11, VAR_4, 27);
 }


 FUNC_5(VAR_11, (VAR_10 | VAR_5) & ~(VAR_6 | VAR_0));

error:

 FUNC_4(VAR_11, VAR_1);
 FUNC_3(VAR_11, VAR_2);

 return (0);
}
