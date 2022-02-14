
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_5 ;
 char VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 char FUNC_3 (int ) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (char*) ;

int
FUNC_6(device_t VAR_7, char *VAR_8, int VAR_9, int *VAR_10)
{
 int VAR_11 = 0, VAR_12;
 char VAR_13;

 FUNC_1(VAR_7, VAR_4);




 for (VAR_12=0; VAR_12<VAR_9; VAR_12++) {



  VAR_13 = FUNC_3(VAR_7);
  FUNC_4(VAR_7, VAR_13 & ~VAR_6);





  VAR_11 = FUNC_2(VAR_7, VAR_1, VAR_5, VAR_5,
     VAR_2);

  if (VAR_11 && VAR_11 != VAR_0)
   goto error;




  if ((VAR_11 = FUNC_0(VAR_7, VAR_8+VAR_12, (VAR_12 == VAR_9-1))))
   goto error;
 }
error:
 if (!VAR_11)
  FUNC_1(VAR_7, VAR_3);

 *VAR_10 = VAR_12;
 return (VAR_11);
}
