
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

char *FUNC_7(const time_t *VAR_3, char *VAR_4)
{
 char* VAR_5;
 if(!VAR_2) {


  VAR_2 = 1;
  FUNC_2(&VAR_0);
  FUNC_0(&VAR_1);
 }
 FUNC_3(&VAR_0);
 VAR_5 = FUNC_1(VAR_3);
 if(VAR_4 && VAR_5) {
  if(FUNC_6(VAR_5) > 10 && VAR_5[7]==' ' && VAR_5[8]=='0')
   VAR_5[8]=' ';
  FUNC_5(VAR_4, VAR_5);
 }
 FUNC_4(&VAR_0);
 return VAR_5;
}
