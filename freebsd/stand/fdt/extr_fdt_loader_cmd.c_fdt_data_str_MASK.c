
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char const*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const void *VAR_0, int VAR_1, int VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8, VAR_9;






 VAR_7 = VAR_1;
 if (VAR_2 > 1) {




  VAR_7 -= VAR_2 - 1;


  VAR_7 += VAR_2 * 2;
 }


 VAR_7 += VAR_2 * 2;


 VAR_4 = (char *)FUNC_1(VAR_7);
 VAR_5 = (char *)FUNC_1(VAR_7);
 if (VAR_4 == ((void*)0))
  goto error;

 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_4);
  goto error;
 }

 VAR_4[0] = '\0';




 VAR_8 = 0;
 do {
  VAR_6 = (const char *)VAR_0 + VAR_8;
  VAR_9 = FUNC_4(VAR_6) + 1;

  FUNC_2(VAR_5, "\"%s\"%s", VAR_6,
      (VAR_8 + VAR_9) < VAR_1 ? ", " : "");
  FUNC_3(VAR_4, VAR_5);

  VAR_8 += VAR_9;

 } while (VAR_8 < VAR_1);
 *VAR_3 = VAR_4;

 FUNC_0(VAR_5);

 return (0);
error:
 return (1);
}
