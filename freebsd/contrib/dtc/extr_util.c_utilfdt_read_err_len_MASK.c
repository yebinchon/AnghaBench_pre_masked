
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (char*,int) ;

int FUNC_7(const char *VAR_2, char **VAR_3, off_t *VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 off_t VAR_7 = 1024, VAR_8 = 0;
 int VAR_9 = 0;

 *VAR_3 = ((void*)0);
 if (FUNC_4(VAR_2, "-") != 0) {
  VAR_5 = FUNC_2(VAR_2, VAR_0);
  if (VAR_5 < 0)
   return VAR_1;
 }


 VAR_6 = FUNC_5(VAR_7);
 do {

  if (VAR_8 == VAR_7) {
   VAR_7 *= 2;
   VAR_6 = FUNC_6(VAR_6, VAR_7);
  }

  VAR_9 = FUNC_3(VAR_5, &VAR_6[VAR_8], VAR_7 - VAR_8);
  if (VAR_9 < 0) {
   VAR_9 = VAR_1;
   break;
  }
  VAR_8 += VAR_9;
 } while (VAR_9 != 0);


 FUNC_0(VAR_5);
 if (VAR_9)
  FUNC_1(VAR_6);
 else
  *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
 return VAR_9;
}
