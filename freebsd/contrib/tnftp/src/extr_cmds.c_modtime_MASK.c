
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (int ) ;
 int VAR_1 ;

void
FUNC_6(int VAR_2, char *VAR_3[])
{
 time_t VAR_4;

 if (VAR_2 == 0 || VAR_2 > 2 ||
     (VAR_2 == 1 && !FUNC_1(&VAR_2, &VAR_3, "remote-file"))) {
  FUNC_0("usage: %s remote-file\n", VAR_3[0]);
  VAR_0 = -1;
  return;
 }
 VAR_4 = FUNC_4(VAR_3[1], 1);
 if (VAR_4 != -1)
  FUNC_2(VAR_1, "%s\t%s", VAR_3[1],
      FUNC_5(FUNC_3(&VAR_4)));
 VAR_0 = (VAR_4 > 0);
}
