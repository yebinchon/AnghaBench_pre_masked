
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keybuf ;


 int FUNC_0 (char) ;
 int FUNC_1 () ;

__attribute__((used)) static const char *
FUNC_2 (size_t *VAR_0)
{
 static char VAR_1[512];
 int VAR_2, VAR_3;
 char VAR_4;

 VAR_2 = FUNC_1 () % (sizeof (VAR_1) - 1) + 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 ++) {
  do {
   VAR_4 = FUNC_1 () & 0xFF;
  } while (!FUNC_0 (VAR_4));

  VAR_1[VAR_3] = VAR_4;
 }

 *VAR_0 = VAR_2;
 return VAR_1;
}
