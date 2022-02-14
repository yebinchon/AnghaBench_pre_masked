
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,void**) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;

int
FUNC_4(phandle_t VAR_2, const char *VAR_3,
    const char *VAR_4, int *VAR_5)
{
 char *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = ((void*)0);
 VAR_10 = FUNC_0(VAR_2, VAR_3, (void **)&VAR_6);
 if (VAR_10 <= 0)
  return (VAR_0);

 VAR_7 = VAR_0;
 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_10; VAR_9++) {
  if (FUNC_2(VAR_6 + VAR_8, VAR_4) == 0) {
   *VAR_5 = VAR_9;
   VAR_7 = 0;
   break;
  }
  VAR_8 += FUNC_3(VAR_6 + VAR_8) + 1;
 }

 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_6, VAR_1);
 return (VAR_7);
}
