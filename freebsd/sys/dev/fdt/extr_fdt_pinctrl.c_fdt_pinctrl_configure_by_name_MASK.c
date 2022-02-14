
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

int
FUNC_6(device_t VAR_1, const char * VAR_2)
{
 char * VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_0(FUNC_3(VAR_1), "pinctrl-names",
     (void **)&VAR_3);
 if (VAR_6 <= 0)
  return (VAR_0);
 for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_6; VAR_4++) {
  if (FUNC_4(VAR_2, &VAR_3[VAR_5]) == 0)
   break;
  VAR_5 += FUNC_5(&VAR_3[VAR_5]) + 1;
 }
 FUNC_1(VAR_3);
 if (VAR_5 < VAR_6)
  return (FUNC_2(VAR_1, VAR_4));
 else
  return (VAR_0);
}
