
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,char*,char*) ;
 int FUNC_3 (int,char*,int) ;

int
FUNC_4(int VAR_2, char *VAR_3, int VAR_4, int *VAR_5, int *VAR_6, int VAR_7,
 char *VAR_8)
{
 char *VAR_9;
 char *VAR_10;
 int VAR_11;
 char *VAR_12 = VAR_3;




 while (VAR_4) {
  if (!*VAR_5) {





   *VAR_6 = 1;
   *VAR_5 = VAR_7;
  }





  VAR_11 = FUNC_0(VAR_4, *VAR_5);
  VAR_4 -= VAR_11;
  *VAR_5 -= VAR_11;
  if (*VAR_6) {




   VAR_9 = VAR_12;
   VAR_10 = VAR_12 + VAR_11;




   while ((VAR_9 < VAR_10) && (*VAR_9 == '\0'))
    ++VAR_9;

   if (VAR_9 == VAR_10) {



    if (FUNC_1(VAR_2, (off_t)VAR_11, VAR_0) < 0) {
     FUNC_2(1,VAR_1,"File seek on %s",
         VAR_8);
     return(-1);
    }
    VAR_12 = VAR_9;
    continue;
   }



   *VAR_6 = 0;
  }




  if (FUNC_3(VAR_2, VAR_12, VAR_11) != VAR_11) {
   FUNC_2(1, VAR_1, "Failed write to file %s", VAR_8);
   return(-1);
  }
  VAR_12 += VAR_11;
 }
 return(VAR_12 - VAR_3);
}
