
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int ,void**) ;

int
FUNC_6(device_t VAR_0, const char *VAR_1)
{
 phandle_t VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 char *VAR_7;
 char *VAR_8;

 if ((VAR_2 = FUNC_1(VAR_0)) == 0)
  return (0);

 if ((VAR_4 = FUNC_5(VAR_2, (void **)&VAR_7)) <= 0)
  return (0);

 VAR_8 = VAR_7;
 VAR_5 = FUNC_2(VAR_1);
 VAR_6 = 0;
 while (VAR_4 > 0) {
  if (FUNC_3(VAR_7, VAR_1, VAR_5) == 0) {
                        VAR_6 = (int)FUNC_4(VAR_7 + VAR_5, ((void*)0), 10);
   break;
  }

  VAR_3 = FUNC_2(VAR_7) + 1;
  VAR_7 += VAR_3;
  VAR_4 -= VAR_3;
 }

 FUNC_0(VAR_8);
 return (VAR_6);
}
