
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
 int VAR_7 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7(device_t VAR_10, int VAR_11)
{
 int VAR_12 = 0;





 FUNC_3(VAR_10, VAR_3);


 if ((VAR_12 = FUNC_1(VAR_10, VAR_5 | VAR_8, 0))) {
  FUNC_2(VAR_10, VAR_4, 22);
  goto error;
 }


 FUNC_5(VAR_10, (VAR_9 | VAR_7) & ~(VAR_0 | VAR_6));


 if ((VAR_12 = FUNC_1(VAR_10, VAR_8, VAR_8))) {
  FUNC_2(VAR_10, VAR_4, 25);
  goto error;
 }


 FUNC_5(VAR_10, (VAR_6 | VAR_9 | VAR_7) & ~(VAR_0));
 FUNC_0(1);

 FUNC_5(VAR_10, (VAR_6 | VAR_9) & ~(VAR_7 | VAR_0));


 if ((VAR_12 = FUNC_1(VAR_10, VAR_8, 0))) {
  FUNC_2(VAR_10, VAR_4, 28);
  goto error;
 }

error:
 FUNC_4(VAR_10, VAR_1);
 FUNC_3(VAR_10, VAR_2);

 return (0);
}
