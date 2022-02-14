
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char) ;
 long VAR_3 ;
 long VAR_4 ;
 long FUNC_2 (char*,char**,int) ;

int
FUNC_3(int VAR_5, char **VAR_6)
{
 long VAR_7;
 char *VAR_8;

 if (VAR_5 > 1) {

  VAR_7 = FUNC_2(VAR_6[1], &VAR_8, 10);
  if (!FUNC_1(VAR_6[1][0]) || *VAR_8 != '\0')
   FUNC_0("Illegal number: %s", VAR_6[1]);
 } else
  VAR_7 = 1;
 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;
 if (VAR_7 > 0) {
  VAR_2 = (**VAR_6 == 'c')? VAR_1 : VAR_0;
  VAR_4 = VAR_7;
 }
 return 0;
}
