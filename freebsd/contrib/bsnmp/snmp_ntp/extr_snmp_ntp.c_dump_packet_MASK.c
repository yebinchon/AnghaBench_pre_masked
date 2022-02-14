
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,size_t,char*) ;

__attribute__((used)) static void
FUNC_3(const u_char *VAR_1, size_t VAR_2)
{
 char VAR_3[8 * 3 + 1];
 size_t VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 8) {
  VAR_3[0] = '\0';
  for (VAR_5 = 0; VAR_4 + VAR_5 < (size_t)VAR_2 && VAR_5 < 8; VAR_5++)
   FUNC_0(VAR_3 + FUNC_1(VAR_3), " %02x", VAR_1[VAR_4 + VAR_5]);
  FUNC_2(VAR_0, "%04zu:%s", VAR_4, VAR_3);
 }
}
