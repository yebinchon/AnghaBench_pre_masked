
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, int VAR_4)
{
 int VAR_5;




 VAR_5 = FUNC_1(VAR_3, VAR_1, 0);
 if (VAR_5)
  goto done;
 VAR_5 = FUNC_1(VAR_3, VAR_0, 0);
 if (VAR_5)
  goto done;

 FUNC_2("islinit", VAR_2/100);

done:
 if (VAR_5 && !VAR_4)
  FUNC_0(VAR_3, "Unable to initialize\n");
 return (VAR_5);
}
