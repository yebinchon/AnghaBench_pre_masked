
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef long time_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char**) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (long*,size_t*,int ,char) ;
 int FUNC_5 (char*,char*,int *,char*,char*,int *,char*) ;
 int * FUNC_6 (char*,char*) ;

int
FUNC_7(int *VAR_3, time_t *VAR_4, size_t *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 u_long VAR_8, VAR_9;
 char VAR_10, VAR_11;
 char VAR_12[VAR_0];

 *VAR_4 = 0L;
 *VAR_5 = 0LL;
 *VAR_3 = 0;




 FUNC_3();
 if (FUNC_0(VAR_1, &VAR_6) < 0) {



  return (-2);
 }
 if (VAR_6 == ((void*)0)) {



  return (-1);
 }


 while (*VAR_6 == ' ' || *VAR_6 == '\t')
  VAR_6++;

 VAR_7 = FUNC_5(VAR_6, "%lu%c%[ \tadnorADNOR]%lu%c", &VAR_8, &VAR_10,
     VAR_12, &VAR_9, &VAR_11);

 switch (VAR_7) {
 case 1:

  VAR_10 = 'B';

 case 2:

  if (FUNC_4(VAR_4, VAR_5, VAR_8, VAR_10) != 0) {



   return (-1);
  }
  break;

 case 5:

  if (FUNC_4(VAR_4, VAR_5, VAR_8, VAR_10) != 0 ||
      FUNC_4(VAR_4, VAR_5, VAR_9, VAR_11) != 0) {



   return (-1);
  }
  if (FUNC_6(VAR_12, "and") != ((void*)0))
   *VAR_3 = 1;
  else if (FUNC_6(VAR_12, "or") != ((void*)0))
   *VAR_3 = 0;
  else {



   return (-1);
  }
  break;

 default:



  return (-1);
 }




 return (0);
}
