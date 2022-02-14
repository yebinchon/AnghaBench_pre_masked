
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t*,size_t,char) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,char**) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int *,char*) ;

int
FUNC_6(size_t *VAR_5)
{
 char *VAR_6;
 size_t VAR_7;
 char VAR_8;
 int VAR_9;




 FUNC_4();
 if (FUNC_1(VAR_1, &VAR_6) < 0) {



  return (-2);
 }
 if (VAR_6 == ((void*)0)) {



  VAR_3 = VAR_0;
  return (-1);
 }


 while (*VAR_6 == ' ' || *VAR_6 == '\t')
  VAR_6++;

 VAR_9 = FUNC_5(VAR_6, "%ju%c", (uintmax_t *)&VAR_7, &VAR_8);

 switch (VAR_9) {
 case 1:

  VAR_8 = 'B';

 case 2:
  if (FUNC_0(VAR_5, VAR_7, VAR_8) == 0)
   break;

 default:
  VAR_3 = VAR_0;



  return (-1);
 }





 if (*VAR_5 < 0 || (*VAR_5 > 0 &&
  *VAR_5 < VAR_2)) {



  VAR_5 = 0L;
  VAR_3 = VAR_0;
  return (-1);
 }



 return (0);
}
