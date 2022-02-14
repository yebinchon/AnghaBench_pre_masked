
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mday; } ;


 int FUNC_0 (char*) ;
 struct tm* FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,int) ;
 size_t FUNC_5 (char*,int,char*,struct tm*) ;

__attribute__((used)) static char *
FUNC_6(time_t VAR_0)
{
 struct tm *VAR_1;
 char *VAR_2, *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_2 = ((void*)0);
 VAR_1 = FUNC_1(&VAR_0);
 if (VAR_1 == ((void*)0))
  goto fail;
 VAR_3 = VAR_2 = FUNC_2(10 + 4 + 4 + 1);

 if ((VAR_4 = FUNC_5(VAR_3, 10 + 1, "%B ", VAR_1)) == 0)
  goto fail;
 VAR_3 += (int)VAR_4;
 VAR_5 = FUNC_4(VAR_3, 4 + 1, "%d, ", VAR_1->tm_mday);
 if (VAR_5 < 0 || VAR_5 > 4)
  goto fail;
 VAR_3 += VAR_5;

 if (FUNC_5(VAR_3, 4 + 1, "%Y", VAR_1) == 0)
  goto fail;
 return VAR_2;

fail:
 FUNC_0(VAR_2);
 return FUNC_3("");
}
