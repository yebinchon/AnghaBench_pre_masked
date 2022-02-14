
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_2(VAR_2);

 if (VAR_4 != 0)
  FUNC_0("Unexpected bus number %d\n", VAR_4);


 switch (VAR_5) {
 case 0: return VAR_0;
 case 1: return VAR_0 + 1;
 case 2: return VAR_0 + 2;
 default: return (-1);
 }

 return (-1);
}
