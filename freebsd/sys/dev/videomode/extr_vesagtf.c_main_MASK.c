
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct videomode*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,int ,struct videomode*) ;

int
FUNC_5 (int VAR_0, char *VAR_1[])
{
 struct videomode VAR_2;

 if (VAR_0 != 4) {
  FUNC_3("usage: %s x y refresh\n", VAR_1[0]);
  FUNC_1(1);
 }

 FUNC_4(FUNC_0(VAR_1[1]), FUNC_0(VAR_1[2]), FUNC_0(VAR_1[3]), &VAR_2);

        FUNC_2(&VAR_2);

 return 0;

}
