
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned short,int *) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int,char**) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char*,int) ;

int
FUNC_8(int VAR_3, char *VAR_4[])
{
 if (VAR_3 > 1 && VAR_4[VAR_3 - 1][0] == '/') {
  if (FUNC_2(VAR_4[VAR_3 - 1], VAR_2) == 0)
   FUNC_6(VAR_3, VAR_4);
  else
   FUNC_3(VAR_1, "pathname: %s", VAR_4[VAR_3 - 1]);
 } else {
  if (FUNC_5(VAR_3, VAR_4)) {
   FUNC_4(VAR_1,
       "usage: ipfw [options]\n"
       "do \"ipfw -h\" or \"man ipfw\" for details");
  }
 }
 return VAR_0;
}
