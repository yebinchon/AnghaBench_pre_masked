
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,int ,int ) ;

int FUNC_3(int VAR_0, int VAR_1, uint8_t VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_3 = FUNC_1(VAR_1)) <= 0) {
  FUNC_0("Unknown class %d mgmt_class", VAR_1);
  return -1;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2, 0);
 if (VAR_4 < 0)
  FUNC_0("Can't register agent for class %d", VAR_1);

 return VAR_4;
}
