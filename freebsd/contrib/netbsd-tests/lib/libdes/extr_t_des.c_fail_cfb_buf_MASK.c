
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf2 ;
typedef int buf ;


 int FUNC_0 (char*,char const*,char*) ;
 int * VAR_0 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, unsigned char *VAR_2)
{
 char VAR_3[1024];
 int VAR_4;

 *VAR_3 = '\0';
 for (VAR_4 = 0; VAR_4 < 24; VAR_4 += 8) {
  char VAR_5[128];
  FUNC_2(VAR_5, sizeof(VAR_5), "%s /", FUNC_1(&(VAR_0[VAR_4])));
  FUNC_3(VAR_3, VAR_5, sizeof(VAR_3));
 }

 FUNC_0("%s: %s", VAR_1, VAR_3);
}
