
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, const char *VAR_1, int VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 VAR_5 = 0;
 while (VAR_2) {

  FUNC_1(VAR_0,(u_char)*VAR_1++, VAR_4);


  VAR_6 = FUNC_0(VAR_0, VAR_4);
  if (VAR_6 != 0)
   break;
  VAR_5++;
  VAR_2--;
 }

 *VAR_3 = VAR_5;
 return (VAR_6);
}
