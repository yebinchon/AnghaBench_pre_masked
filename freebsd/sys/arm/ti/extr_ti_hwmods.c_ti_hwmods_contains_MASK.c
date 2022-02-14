
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,void**) ;

int FUNC_5(device_t VAR_0, const char *VAR_1)
{
 phandle_t VAR_2;
 int VAR_3, VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;

 if ((VAR_2 = FUNC_1(VAR_0)) == 0)
  return (0);

 if ((VAR_3 = FUNC_4(VAR_2, (void **)&VAR_5)) <= 0)
  return (0);

 VAR_6 = VAR_5;

 VAR_7 = 0;
 while (VAR_3 > 0) {
  if (FUNC_2(VAR_5, VAR_1) == 0) {
   VAR_7 = 1;
   break;
  }


  VAR_4 = FUNC_3(VAR_5) + 1;
  VAR_5 += VAR_4;
  VAR_3 -= VAR_4;
 }

 FUNC_0(VAR_6);

 return (VAR_7);
}
